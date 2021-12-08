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

echo.
echo [INFO] Zipping Files...
.\Tools\7zip\7za.exe a -tzip -mmt -mx=9 LiteLoader.zip RELEASE\*

echo.
echo [INFO] Packing RELEASE... DONE!
timeout /t 3 >nul