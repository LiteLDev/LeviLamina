@echo off

del /F /Q RELEASE\Chakra.dll 2>nul
del /F /Q RELEASE\LiteLoader.dll 2>nul
del /F /Q RELEASE\plugins\LiteLoader\LLAutoUpdate.dll 2>nul
del /F /Q RELEASE\SymDB2.exe 2>nul
del /F /Q RELEASE\*.zip 2>nul
del /F /Q LiteLoader.zip 2>nul
del /F /Q LiteLoader-SDK.zip 2>nul

echo [INFO] Packing RELEASE...
echo.

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
explorer.exe .\RELEASE
timeout /t 3 >nul
:End