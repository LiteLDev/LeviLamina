@echo off

set LL_SDK_REMOTE_PATH=https://github.com/LiteLDev/LiteLoaderSDK.git



echo [INFO] Upgrading LL-SDK to GitHub ...

for /f "delims=" %%i in ('git rev-parse --abbrev-ref HEAD') do set LL_SDK_NOW_BRANCH=%%i
if not exist SDK/Header/ (
    echo [WARNING] SDK Directory no found. Pulling From Remote...
    echo.
    rem git submodule add --name SDK -- %LL_SDK_REMOTE_PATH% SDK 
    git submodule update --init --recursive
    echo.
)

cd SDK
git checkout -q %LL_SDK_NOW_BRANCH%
cd ..

echo [INFO] Upgrading LL-SDK to GitHub finished
echo.
echo [INFO] Packing LL-SDK ...

start /wait cmd /c PackSDK.cmd

echo [INFO] Packing LL-SDK finished.
echo.

cd SDK
for /f "delims=" %%i in ('git status . -s') do set LL_SDK_NOW_STATUS=%%i
if "%LL_SDK_NOW_STATUS%" neq "" (
    echo [INFO] Modified files found.
    echo.
    git add .
    git commit -m "Update LiteLoader SDK"
    echo.
    echo [INFO] Pushing to origin...
    echo.
    git push origin %LL_SDK_NOW_BRANCH%
    cd ..
    git add SDK
    git commit -a -m "Update LiteLoader SDK"
    echo.
    echo [INFO] Pushing to origin...
    echo.
    git push origin %LL_SDK_NOW_BRANCH%
    echo.
    echo [INFO] Upload finished.
    echo.
    goto Finish
) else (
    echo.
    echo.
    echo [INFO] No modified files found.
    echo [INFO] No need to Upgrade SDK.
    cd ..
    goto Finish
)

:Finish
if [%1]==[action] goto End
timeout /t 3 >nul
:End