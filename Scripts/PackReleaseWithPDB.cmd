@echo off

cd ..

del /F /Q RELEASE\LLPreLoader.dll 2>nul
del /F /Q RELEASE\LiteLoader.dll 2>nul
rmdir /s /q RELEASE\plugins\LiteLoader\pdb 2>nul
del /F /Q RELEASE\plugins\LiteLoader\LiteLoader.*.dll 2>nul
del /F /Q RELEASE\LLPeEditor.exe 2>nul
del /F /Q RELEASE\*.zip 2>nul
del /F /Q LiteLoader.zip 2>nul
del /F /Q LiteLoader-SDK.zip 2>nul

echo [INFO] Packing RELEASE...
echo.

copy /Y ScriptEngine\BaseLib\* RELEASE\plugins\lib
copy /Y x64\Release\LLPreLoader.dll RELEASE\LLPreLoader.dll
copy /Y x64\Release\LiteLoader.dll RELEASE\LiteLoader.dll
copy /Y x64\Release\LiteLoader.*.dll RELEASE\plugins\LiteLoader\
mkdir RELEASE\plugins\LiteLoader\pdb
copy /Y x64\Release\*.pdb RELEASE\plugins\LiteLoader\pdb\
copy /Y Tools\LLPeEditor.exe RELEASE\LLPeEditor.exe
copy /Y ScriptEngine\BaseLib\* RELEASE\plugins\lib\

if [%1] neq [action] goto Zipped
echo.
echo [INFO] Zipping Files...
cd RELEASE
..\Tools\7zip\7za.exe a -y -tzip -mmt -mx=9 ..\LiteLoader.zip *
cd ..
:Zipped

echo.
echo [INFO] Packing RELEASE... DONE!

if [%1]==[action] goto End
explorer.exe .\RELEASE
timeout /t 3 >nul
:End