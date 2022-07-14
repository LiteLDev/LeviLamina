@echo off

cd ..
setlocal enabledelayedexpansion

set LL_SDK_REMOTE_PATH=https://github.com/LiteLDev/LiteLoaderSDK.git


rem Process System Proxy
for /f "tokens=3* delims= " %%i in ('Reg query "HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings" /v ProxyEnable') do (
    if %%i==0x1 (
        echo [INFO] System Proxy enabled. Adapting Settings...
        for /f "tokens=3* delims= " %%a in ('Reg query "HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings" /v ProxyServer') do set PROXY_ADDR=%%a
        set http_proxy=http://!PROXY_ADDR!
        set https_proxy=http://!PROXY_ADDR!
        echo [INFO] System Proxy enabled. Adapting Settings finished.
        echo.
    )
)


echo [INFO] Fetching LiteLoaderSDK to GitHub ...
echo.

for /f "delims=" %%i in ('git rev-parse --abbrev-ref HEAD') do set LL_SDK_NOW_BRANCH=%%i
for /f "delims=" %%i in ('git describe') do set LL_NOW_TAG_LONG=%%i
for /f "delims=-" %%i in ('git describe') do set LL_NOW_TAG=%%i

echo LL_SDK_NOW_BRANCH %LL_SDK_NOW_BRANCH%
echo LL_NOW_TAG_LONG %LL_NOW_TAG_LONG%
echo LL_NOW_TAG %LL_NOW_TAG%
echo.

if not exist LiteLoaderSDK/Header/ (
    echo [WARNING] LiteLoaderSDK files no found. Pulling from remote...
    echo.
    git clone %LL_SDK_REMOTE_PATH%
)

cd LiteLoaderSDK
git fetch --all
git reset --hard origin/%LL_SDK_NOW_BRANCH%
git checkout %LL_SDK_NOW_BRANCH%
cd ..

echo.
echo [INFO] Fetching LiteLoaderSDK to GitHub finished
echo.

@REM if [%1] neq [action] (
    cd Scripts
    echo [INFO] Packing LiteLoaderSDK ...
    start /wait cmd /c PackSDK.cmd
    echo [INFO] Packing LiteLoaderSDK finished.
    echo.
    cd ..
@REM )

cd LiteLoaderSDK
for /f "delims=" %%i in ('git status . -s') do set LL_SDK_NOW_STATUS=%%i
if "%LL_SDK_NOW_STATUS%" neq "" (
    echo [INFO] Modified files found.
    echo.
    git add .
    if "%LL_SDK_NOW_BRANCH%" == "main" (
        git commit -m "From LiteLoader %LL_NOW_TAG%"
        git tag %LL_NOW_TAG%
    ) else (
        git commit -m "From LiteLoader %LL_NOW_TAG_LONG%"
    )
    echo.
    echo [INFO] Pushing to origin...
    echo.
    if [%1] neq [action] (
        git push --tags origin %LL_SDK_NOW_BRANCH%
    ) else (
        git push https://%USERNAME%:%REPO_KEY%@github.com/LiteLDev/LiteLoaderSDK.git %LL_SDK_NOW_BRANCH%
    )
    cd ..
    echo.
    echo [INFO] Upload finished.
    echo.
    goto Finish
) else (
    cd ..
    echo.
    echo.
    echo [INFO] No modified files found.
    echo [INFO] No need to Upgrade LiteLoaderSDK.
    goto Finish
)

:Finish
if [%1]==[action] goto End
timeout /t 3 >nul
:End