@echo off
echo [INFO] Packing LL-SDK...
echo.

mkdir SDK\header 2>nul
mkdir SDK\pdb 2>nul
mkdir SDK\lib 2>nul

xcopy LiteLoader\Header\* SDK\header /E /Q /Y
copy /Y x64\Release\*.lib SDK\lib
copy /Y x64\Release\*.pdb SDK\pdb

echo.
echo [INFO] Zipping Files...
cd SDK
..\Tools\7zip\7za.exe a -y -tzip -mmt -mx=3 ..\LiteLoader-SDK.zip *
cd ..
rmdir SDK /S /Q

echo.
echo [INFO] Packing LL-SDK... DONE!

if [%1]==[action] goto End
timeout /t 3 >nul
:End