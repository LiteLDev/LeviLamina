@echo off

rmdir SDK\Header /S /Q 2>nul
rmdir SDK\Pdb /S /Q 2>nul
rmdir SDK\Lib /S /Q 2>nul
rmdir SDK\Tools /S /Q 2>nul

echo [INFO] Packing LL-SDK...
echo.

mkdir SDK\Header 2>nul
mkdir SDK\Pdb 2>nul
mkdir SDK\Lib 2>nul
mkdir SDK\Tools 2>nul
mkdir SDK\Tools\llvm-dlltool-msys2 2>nul

xcopy LiteLoader\Header\* SDK\Header /E /Q /Y

copy /Y LiteLoader\Lib\SymDBHelper.lib SDK\Lib
copy /Y x64\Release\*.lib SDK\Lib
copy /Y x64\Release\*.pdb SDK\Pdb

xcopy Tools\llvm-dlltool-msys2\* SDK\Tools\llvm-dlltool-msys2 /E /Q /Y
copy /Y Tools\LibraryBuilder.exe SDK\Tools
copy /Y Tools\SymDB2.exe SDK\Tools
copy /Y Tools\DownloadSDK.cmd SDK\Tools

if [%1] neq [action] goto Zipped
echo.
echo [INFO] Zipping Files...
cd SDK
..\Tools\7zip\7za.exe a -y -tzip -mmt -mx=3 ..\LiteLoader-SDK.zip *
cd ..
:Zipped

echo.
echo [INFO] Packing LL-SDK... DONE!

if [%1]==[action] goto End
timeout /t 3 >nul
:End