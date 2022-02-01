#pragma once
#include <Global.h>
#include <windows.h>
#include <string>

using namespace std;

LIAPI bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e = nullptr);