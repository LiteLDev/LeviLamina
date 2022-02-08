#pragma comment(lib, "version")
#include <LLAPI.h>

LL::Version GetScriptEngineVersion()
{
    DWORD   verBufferSize;
    char    verBuffer[2048];
    TCHAR filePath[MAX_PATH * 2] = { 0 };

    if (GetModuleFileName(GetCurrentModule(), filePath, sizeof(filePath)) == 0)
        return LL::Version();

    verBufferSize = GetFileVersionInfoSize(filePath, NULL);
    if (verBufferSize > 0 && verBufferSize <= sizeof(verBuffer))
    {
        if (GetFileVersionInfo(filePath, NULL, verBufferSize, verBuffer))
        {
            UINT length;
            VS_FIXEDFILEINFO* verInfo = NULL;

            if (TRUE == VerQueryValue(verBuffer, TEXT("\\"), reinterpret_cast<LPVOID*>(&verInfo), &length))
            {
                return LL::Version(HIWORD(verInfo->dwProductVersionMS), LOWORD(verInfo->dwProductVersionMS),
                    HIWORD(verInfo->dwProductVersionLS)/*, LOWORD(verInfo->dwProductVersionLS)*/);
            }
        }
    }
    return LL::Version();
}