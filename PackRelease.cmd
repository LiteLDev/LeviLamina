@echo off
echo [INFO] Packing RELEASE...
echo.

mkdir RELEASE 2>nul
del /F /Q RELEASE\*.zip 2>nul
del /F /Q LiteLoader.zip 2>nul
del /F /Q LiteLoader-SDK.zip 2>nul

copy /Y x64\Release\Chakra.dll RELEASE\Chakra.dll
copy /Y x64\Release\LiteLoader.dll RELEASE\LiteLoader.dll
copy /Y x64\Release\LLAutoUpdate.dll RELEASE\plugins\LiteLoader\LLAutoUpdate.dll
copy /Y Tools\SymDB2.exe RELEASE\SymDB2.exe

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
timeout /t 3 >nul
:End