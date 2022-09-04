@echo off

if not exist %1\SDK\Lib\bedrock_server_api.lib goto process
if not exist %1\SDK\Lib\bedrock_server_var.lib goto process
goto end

:process
cd /d %1\Tools
LibraryBuilder.exe

:end