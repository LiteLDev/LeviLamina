@echo off
del /F /Q LiteLoader\Lib\bedrock_server_api.lib 2>nul
del /F /Q LiteLoader\Lib\bedrock_server_var.lib 2>nul

echo.
echo [INFO] Version updated. Please build the project again.
timeout /t 3 >nul
