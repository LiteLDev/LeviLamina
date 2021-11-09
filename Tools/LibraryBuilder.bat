<# :
@echo off & setlocal
: ================== Define ================== 
set SYMDB_PROCESS_PATH="SymDB2.exe"
set SYMDB_TIMEOUT=30
set LLVM_DLLTOOL_PATH=".\llvm-dlltool-msys2\llvm-dlltool.exe"


: ================================ Main Part ================================

echo.
echo   /////////////////////////////////////////////////////
echo   //                                                 //
echo   //         LiteLoader Dev Library Builder          //
echo   //                                                 //
echo   /////////////////////////////////////////////////////
echo.
echo ---- Start Processing...

: ================== Call Choose File ================== 
set "POWERSHELL_BAT_ARGS=%*"
for /f "delims=" %%i in ('powershell -noprofile -NoLogo "iex (${%~f0} | out-string)"') do (set "BDS_PATH=%%i")

: ================== Check Valid ================== 
if [%BDS_PATH%]==[] (
    echo.
    echo **** [Error]
    echo **** You must choose a folder for process !
    goto ExitProcess
)

if not exist "%BDS_PATH%\bedrock_server.exe" (
    mshta vbscript:CreateObject^("Wscript.Shell"^).popup^("Wrong target directory! bedrock_server.exe no found",0,"Error",16^)^(window.close^)
    echo.
    echo **** [Error]
    echo **** You must choose a folder contains *bedrock_server.exe* !
    goto ExitProcess
)

if not exist "%BDS_PATH%\bedrock_server.pdb" (
    mshta vbscript:CreateObject^("Wscript.Shell"^).popup^("Wrong target directory! bedrock_server.pdb no found",0,"Error",16^)^(window.close^)
    echo.
    echo **** [Error]
    echo **** You must choose a folder contains *bedrock_server.pdb* !
    goto ExitProcess
)

: ================== Run SymDB ================== 
rd /s /q temp 2>nul
mkdir temp
copy /Y SymDB2.exe temp
copy /Y "%BDS_PATH%\bedrock_server.exe" temp
copy /Y "%BDS_PATH%\bedrock_server.pdb" temp

cd temp
echo.
echo ---- Running SymDB2...
%SYMDB_PROCESS_PATH% -noMod -noSymdb -def -noPause
cd ..

: ================== Run llvm-dlltool ================== 
echo.
echo ---- Running LLVM-DLLTool...
%LLVM_DLLTOOL_PATH% -m i386:x86-64 -d "temp\bedrock_server_api.def" -l "temp\bedrock_server_api.lib"
%LLVM_DLLTOOL_PATH% -m i386:x86-64 -d "temp\bedrock_server_var.def" -l "temp\bedrock_server_var.lib"

: ================== Check Valid ================== 
if not exist "..\LiteLoader\bedrock_server_api.lib" (
    mshta vbscript:CreateObject^("Wscript.Shell"^).popup^("Fail to generate API static library!",0,"Error",16^)^(window.close^)
    echo.
    echo **** [Error]
    echo **** Fail to generate API static library !
    goto ExitProcess
)

if not exist "..\LiteLoader\bedrock_server_var.lib" (
    mshta vbscript:CreateObject^("Wscript.Shell"^).popup^("Fail to generate VAR static library!",0,"Error",16^)^(window.close^)
    echo.
    echo **** [Error]
    echo **** Fail to generate VAR static library !
    goto ExitProcess
)

: ================== Finish ==================
copy /Y "temp\bedrock_server_api.lib" "..\LiteLoader\bedrock_server_api.lib"
copy /Y "temp\bedrock_server_var.lib" "..\LiteLoader\bedrock_server_var.lib"
rd /s /q temp >nul
echo.
echo ---- [Success]
echo ---- Everything is OK.
set %errorlevel%=0

: ================== Exit ================== 
:ExitProcess
timeout /T 5 >nul
exit /b %errorlevel%



: ============================ Choose File Function ============================
: ============================== PowerShell below ============================== #>

$POWERSHELL_BAT_ARGS=$env:POWERSHELL_BAT_ARGS

#: ================== From parameters ================== 
If($POWERSHELL_BAT_ARGS -ne $null)
{
  return $POWERSHELL_BAT_ARGS
}

#: ================== User to choose ================== 
$ws = New-Object -ComObject WScript.Shell  
$wsr = $ws.popup("Extra static library, which is generated from an existing BDS server's symbol file, is needed to finish this compile.`n`nYou need to choose a folder contains `n*bedrock_server.exe* and *bedrock_server.pdb* next",0,"Tips",64)

Add-Type -AssemblyName System.Windows.Forms
$form = New-Object System.Windows.Forms.FolderBrowserDialog
$form.ShowNewFolderButton = $false
$form.Description = "Choose the folder contains *bedrock_server.exe* and *bedrock_server.pdb*"
If ($form.ShowDialog())
{
    $res = $form.SelectedPath
    If($res -eq '')
    {
        $wsr = $ws.popup("You haven't choose a target!",0,"Error",16)
        Return ''
    }
    Return $form.SelectedPath
}
Else
{
    $wsr = $ws.popup("Fail to create open-file dialog!",0,"Error",16)
    Return ''
}