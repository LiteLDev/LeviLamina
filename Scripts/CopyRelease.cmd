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
copy /Y x64\Release\LLPreLoader.dll RELEASE\LLPreLoader.dll
copy /Y x64\Release\LiteLoader.dll RELEASE\LiteLoader.dll
copy /Y x64\Release\LiteLoader.*.dll RELEASE\plugins\LiteLoader\
copy /Y Tools\LLPeEditor.exe RELEASE\LLPeEditor.exe
copy /Y ScriptEngine\BaseLib\* RELEASE\plugins\lib\

echo [INFO] Copying RELEASE... DONE!

if [%1]==[action] goto End
explorer.exe .\RELEASE
timeout /t 3 >nul
:End