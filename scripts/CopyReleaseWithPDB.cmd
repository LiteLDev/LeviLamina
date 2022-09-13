@echo off

cd ..

del /F /Q RELEASE\LLPreLoader.dll 2>nul
del /F /Q RELEASE\LiteLoader.dll 2>nul
rmdir /s /q RELEASE\plugins\LiteLoader\pdb 2>nul
del /F /Q RELEASE\plugins\LiteLoader\LiteLoader.*.dll 2>nul
del /F /Q RELEASE\LLPeEditor.exe 2>nul

echo [INFO] Copying RELEASE...
echo.

copy /Y ScriptEngine\BaseLib\* RELEASE\plugins\lib
copy /Y build\LLPreLoader\Release\LLPreLoader.dll RELEASE\LLPreLoader.dll
copy /Y build\LiteLoader\Release\LiteLoader.dll RELEASE\LiteLoader.dll

copy /Y build\ScriptEngine\CMake\ScriptEngine-QuickJs\Release\LiteLoader.Js.dll RELEASE\plugins\LiteLoader\
copy /Y build\ScriptEngine\CMake\ScriptEngine-NodeJs\Release\LiteLoader.NodeJs.dll RELEASE\plugins\LiteLoader\
copy /Y build\ScriptEngine\CMake\ScriptEngine-Lua\Release\LiteLoader.Lua.dll RELEASE\plugins\LiteLoader\

mkdir RELEASE\plugins\LiteLoader\pdb
copy /Y build\LiteLoader\Release\LiteLoader.pdb RELEASE\plugins\LiteLoader\pdb\
copy /Y build\ScriptEngine\CMake\ScriptEngine-QuickJs\Release\LiteLoader.Js.pdb RELEASE\plugins\LiteLoader\pdb\
copy /Y build\ScriptEngine\CMake\ScriptEngine-NodeJs\Release\LiteLoader.NodeJs.pdb RELEASE\plugins\LiteLoader\pdb\
copy /Y build\ScriptEngine\CMake\ScriptEngine-Lua\Release\LiteLoader.Lua.pdb RELEASE\plugins\LiteLoader\pdb\

copy /Y Tools\LLPeEditor.exe RELEASE\LLPeEditor.exe
copy /Y ScriptEngine\BaseLib\* RELEASE\plugins\lib\

echo [INFO] Copying RELEASE... DONE!

if [%1]==[action] goto End
explorer.exe .\RELEASE
timeout /t 3 >nul
:End