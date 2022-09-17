@echo off

if not exist %1\LiteLoader\lib\bedrock_server_api.lib goto process
if not exist %1\LiteLoader\lib\bedrock_server_var.lib goto process
goto end

:process
cd /d %1\Tools
LibraryBuilder.exe
if not exist %1\LiteLoader\lib\ mkdir %1\LiteLoader\lib
move %1\Tools\bedrock_server_api.lib %1\LiteLoader\lib\
move %1\Tools\bedrock_server_var.lib %1\LiteLoader\lib\

:end
