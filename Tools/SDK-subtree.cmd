@echo off
setlocal enabledelayedexpansion

set LL_SDK_REMOTE_PATH=https://github.com/LiteLDev/LiteLoaderSDK.git
set LL_SDK_USE_BRANCH=main
set LL_SDK_DIRECTORY_PATH=SDK



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

echo [INFO] Upgrading LL-SDK from GitHub ...
echo.
git stash save "Uploading LL SDK..."
echo.

if not exist %LL_SDK_DIRECTORY_PATH% (
    git subtree add --prefix=%LL_SDK_DIRECTORY_PATH% %LL_SDK_REMOTE_PATH% %LL_SDK_USE_BRANCH% --squash
) else (
    git subtree pull --prefix=%LL_SDK_DIRECTORY_PATH% %LL_SDK_REMOTE_PATH% %LL_SDK_USE_BRANCH% --squash
)

git stash pop -q
echo.
echo [INFO] Upgrading LL-SDK from GitHub finished.
echo.
echo.
echo [INFO] Upgrade end successfully.

if [%1]==[action] goto End
timeout /t 3 >nul
:End