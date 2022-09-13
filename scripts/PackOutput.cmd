@echo off

SET PROJECT_PATH=%~dp0..
SET OUTPUT_DIR=%~dp0..\output

echo [INFO] Remove old output files...
rmdir /s /q %OUTPUT_DIR% 2>nul

echo [INFO] Copying assets...
xcopy /E /Q /Y %PROJECT_PATH%\assets %OUTPUT_DIR%\ >nul

echo [INFO] Copying ScriptEngine BaseLib...
copy /Y %PROJECT_PATH%\ScriptEngine\BaseLib\* %OUTPUT_DIR%\plugins\lib\ >nul

echo [INFO] Copying LLPreLoader...
copy /Y %PROJECT_PATH%\build\LLPreLoader\Release\LLPreLoader.dll %OUTPUT_DIR%\LLPreLoader.dll >nul

echo [INFO] Copying LiteLoader...
copy /Y %PROJECT_PATH%\build\LiteLoader\Release\LiteLoader.dll %OUTPUT_DIR%\LiteLoader.dll >nul

echo [INFO] Copying ScriptEngine...
copy /Y %PROJECT_PATH%\build\ScriptEngine\CMake\ScriptEngine-QuickJs\Release\LiteLoader.Js.dll %OUTPUT_DIR%\plugins\LiteLoader\ >nul
copy /Y %PROJECT_PATH%\build\ScriptEngine\CMake\ScriptEngine-NodeJs\Release\LiteLoader.NodeJs.dll %OUTPUT_DIR%\plugins\LiteLoader\ >nul
copy /Y %PROJECT_PATH%\build\ScriptEngine\CMake\ScriptEngine-Lua\Release\LiteLoader.Lua.dll %OUTPUT_DIR%\plugins\LiteLoader\ >nul

echo [INFO] Copying LLPeEditor...
copy /Y %PROJECT_PATH%\Tools\LLPeEditor.exe %OUTPUT_DIR%\LLPeEditor.exe >nul

echo [INFO] Done!

if [%1]==[action] goto End
explorer.exe %OUTPUT_DIR%
timeout /t 3 >nul
:End