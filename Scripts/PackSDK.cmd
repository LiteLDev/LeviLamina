@echo off

cd ..

rmdir LiteLoaderSDK\Header /S /Q 2>nul
rmdir LiteLoaderSDK\Lib /S /Q 2>nul
rmdir LiteLoaderSDK\Tools /S /Q 2>nul

echo [INFO] Packing LiteLoaderSDK...
echo.

mkdir LiteLoaderSDK\Header 2>nul
mkdir LiteLoaderSDK\Lib 2>nul
mkdir LiteLoaderSDK\Tools 2>nul
mkdir LiteLoaderSDK\Tools\llvm-dlltool-msys2 2>nul

xcopy LiteLoader\Header\* LiteLoaderSDK\Header /E /Q /Y

copy /Y LiteLoader\Lib\SymDBHelper.lib LiteLoaderSDK\Lib
copy /Y x64\Release\LiteLoader.lib LiteLoaderSDK\Lib

xcopy Tools\llvm-dlltool-msys2\* LiteLoaderSDK\Tools\llvm-dlltool-msys2 /E /Q /Y
copy /Y Tools\LibraryBuilder.exe LiteLoaderSDK\Tools
copy /Y Tools\LLPeEditor.exe LiteLoaderSDK\Tools
copy /Y Tools\*.cmd LiteLoaderSDK\Tools

if [%1] neq [action] goto Zipped
echo.
echo [INFO] Zipping Files...
cd LiteLoaderSDK
..\Tools\7zip\7za.exe a -y -tzip -mmt -mx=3 ..\LiteLoaderSDK.zip *
cd ..
:Zipped

echo.
echo [INFO] Packing LiteLoaderSDK... DONE!

if [%1]==[action] goto End
timeout /t 3 >nul
:End
