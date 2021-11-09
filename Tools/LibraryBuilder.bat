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
    echo **** You must choose a folder for process!!
    goto ExitProcess
)

if not exist "%BDS_PATH%\bedrock_server.exe" (
    mshta vbscript:CreateObject("Wscript.Shell").popup("bedrock_server.exe no found!",0,"Error",16)(window.close)
    echo.
    echo **** [Error]
    echo **** You must choose a folder contains *bedrock_server.exe*!!
    goto ExitProcess
)

if not exist "%BDS_PATH%\bedrock_server.pdb" (
    mshta vbscript:CreateObject("Wscript.Shell").popup("bedrock_server.pdb no found!",0,"Error",16)(window.close)
    echo.
    echo **** [Error]
    echo **** You must choose a folder contains *bedrock_server.pdb*!!
    goto ExitProcess
)

: ================== Run SymDB ================== 
echo ---- Running SymDB2...
mkdir temp
copy /Y SymDB2.exe temp
copy /Y "%BDS_PATH%\bedrock_server.exe" temp
copy /Y "%BDS_PATH%\bedrock_server.pdb" temp

cd temp
start "SymDB2" %SYMDB_PROCESS_PATH% -def
timeout /T %SYMDB_TIMEOUT%
taskkill -f -im %SYMDB_PROCESS_PATH% >nul
cd ..

: ================== Run llvm-dlltool ================== 
echo ---- Running LLVM-DLLTool...
%LLVM_DLLTOOL_PATH% -m i386:x86-64 -d "temp\bedrock_server_api.def" -l "..\LiteLoader\bedrock_server_api.lib"
%LLVM_DLLTOOL_PATH% -m i386:x86-64 -d "temp\bedrock_server_var.def" -l "..\LiteLoader\bedrock_server_var.lib"

: ================== Clean ==================
echo.
echo ---- [Success]
echo ---- Everything is OK!!!

: ================== Exit ================== 
:ExitProcess
rd /s /q temp >nul
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
$wsr = $ws.popup("You need to choose a folder contains `n*bedrock_server.exe* and *bedrock_server.pdb* `n`nTo make SymDB2 able to work",0,"Tips",64)

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