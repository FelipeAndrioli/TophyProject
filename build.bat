@ECHO OFF

REM Path to g++
SET G="compiler/bin/g++.exe"

SET OBJECTS=
REM Recursive every .cpp file in ./src
FOR /R "./src" %%a IN (*.cpp) DO (
    CALL SET OBJECTS=%%OBJECTS%% "%%a"
)

@ECHO ON

%G% %OBJECTS% -obin/main.exe -I./GLFW/include -I./GLEW/include -L./lib/GLFW/lib -L./lib/GLEW/lib -lmingw32 -lglfw3 -l:libglfw3dll.a -l:libglfw3.a -lopengl32 -lgdi32 -luser32
