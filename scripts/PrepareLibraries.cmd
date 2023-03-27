@echo off

if not exist %1\LiteLoader\lib\bedrock_server_api.lib goto process
if not exist %1\LiteLoader\lib\bedrock_server_var.lib goto process
goto end

:process
if not exist %1\LiteLoader\lib\ mkdir %1\LiteLoader\lib
cd /d %1\Tools
LLPeEditor.exe -c -l -o ../LiteLoader/lib

:end
