@echo off

cd %~dp0..
setlocal enabledelayedexpansion

set LL_SDK_REMOTE_PATH=https://github.com/LiteLDev/SDK-CPP.git

@REM rem Process System Proxy
@REM for /f "tokens=3* delims= " %%i in ('Reg query "HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings" /v ProxyEnable') do (
@REM     if %%i==0x1 (
@REM         echo [INFO] System Proxy enabled. Adapting Settings...
@REM         for /f "tokens=3* delims= " %%a in ('Reg query "HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings" /v ProxyServer') do set PROXY_ADDR=%%a
@REM         set http_proxy=http://!PROXY_ADDR!
@REM         set https_proxy=http://!PROXY_ADDR!
@REM         echo [INFO] System Proxy enabled. Adapting Settings finished.
@REM         echo.
@REM     )
@REM )


echo [INFO] Fetching SDK-CPP to GitHub ...
echo.

for /f "delims=" %%i in ('git rev-parse --abbrev-ref HEAD') do set LL_SDK_NOW_BRANCH=%%i
for /f "delims=" %%i in ('git describe --tags --always') do set LL_NOW_TAG_LONG=%%i
for /f "delims=-" %%i in ('git describe --tags --always') do set LL_NOW_TAG=%%i

echo LL_SDK_NOW_BRANCH %LL_SDK_NOW_BRANCH%
echo LL_NOW_TAG_LONG %LL_NOW_TAG_LONG%
echo LL_NOW_TAG %LL_NOW_TAG%
echo.

if not exist SDK-CPP/header/ (
    echo [WARNING] SDK-CPP files no found. Pulling from remote...
    echo.
    git clone %LL_SDK_REMOTE_PATH%
)

cd SDK-CPP
git fetch --all
git reset --hard origin/%LL_SDK_NOW_BRANCH%
git checkout %LL_SDK_NOW_BRANCH%
cd ..

echo.
echo [INFO] Fetching SDK-CPP to GitHub finished
echo.

@REM remove all directory except .git in SDK-CPP
for /f "delims=" %%i in ('dir /b /ad SDK-CPP') do (
    if not "%%i"==".git" (
        echo [INFO] Removing SDK-CPP\%%i
        rd /s /q SDK-CPP\%%i
    )
)

@REM copy all from build/sdk to SDK-CPP
xcopy /e /y /i /q build\SDK\* SDK-CPP

cd SDK-CPP
for /f "delims=" %%i in ('git status . -s') do set LL_SDK_NOW_STATUS=%%i
if "%LL_SDK_NOW_STATUS%" neq "" (
    echo [INFO] Modified files found.
    echo.
    git add .
    if "%LL_SDK_NOW_BRANCH%" == "main" (
        git commit -m "From LiteLoader %LL_NOW_TAG%"
        if [%2] == [release] (
            git tag %LL_NOW_TAG%
        )
    ) else (
        git commit -m "From LiteLoader %LL_NOW_TAG_LONG%"
    )
    echo.
    echo [INFO] Pushing to origin...
    echo.
    if [%1] neq [action] (
        git push origin %LL_SDK_NOW_BRANCH%
        git push --tags origin %LL_SDK_NOW_BRANCH%
    ) else (
        mkdir ~\.ssh
        echo %DEPLOY_KEY% > ~\.ssh\id_rsa
        git push git@github.com:LiteLDev/SDK-CPP.git %LL_SDK_NOW_BRANCH%
        git push --tags git@github.com:LiteLDev/SDK-CPP.git %LL_SDK_NOW_BRANCH%
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
    echo [INFO] No need to Upgrade SDK-CPP.
    goto Finish
)

:Finish
if [%1]==[action] goto End
timeout /t 3 >nul
:End