@echo off

cd ..

rmdir LiteLoaderSDK /S /Q 2>nul

echo [INFO] Packing LiteLoaderSDK...
echo.

mkdir LiteLoaderSDK\Header 2>nul
mkdir LiteLoaderSDK\Lib 2>nul
mkdir LiteLoaderSDK\Tools 2>nul

xcopy LiteLoader\Header\* LiteLoaderSDK\Header /E /Q /Y

copy /Y build\Tools\SymDBHelper\Release\SymDBHelper.lib LiteLoaderSDK\Lib
copy /Y build\LiteLoader\Release\LiteLoader.lib LiteLoaderSDK\Lib

copy /Y Tools\LibraryBuilder.exe LiteLoaderSDK\Tools
copy /Y Tools\LLPeEditor.exe LiteLoaderSDK\Tools
copy /Y Tools\*.cmd LiteLoaderSDK\Tools

echo.
echo [INFO] Packing LiteLoaderSDK... DONE!

if [%1]==[action] goto End
timeout /t 3 >nul
:End
