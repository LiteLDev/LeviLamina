@echo off

if not exist %1\lib\bds\bedrock_server_api.lib goto process
if not exist %1\lib\bds\bedrock_server_var.lib goto process
goto end

:process
cd /d %1\prebuilt\tools
LibraryBuilder.exe
move %1\prebuilt\tools\bedrock_server_api.lib %1\lib\bds\ >nul 2>&1
move %1\prebuilt\tools\bedrock_server_var.lib %1\lib\bds\ >nul 2>&1

:end
