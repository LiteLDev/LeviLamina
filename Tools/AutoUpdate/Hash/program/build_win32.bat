@echo off

rem Prerequisites
rem   git: https://git-scm.com/
rem   msvc: https://visualstudio.microsoft.com
rem   python3: https://www.python.org/

if not "%VSCMD_ARG_TGT_ARCH%" == "x64" (
	call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
)

if not exist ".venv" (
	python -m venv ".venv"
	call ".venv\Scripts\activate.bat"
	pip3 install meson ninja
) else (
	call ".venv\Scripts\activate.bat"
)

if not exist "_build" (
	meson "_build"
	rem --backend vs
)

(
	meson ^
		compile ^
		-C "_build" ^
		-j 2
)
