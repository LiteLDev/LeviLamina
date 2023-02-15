#include "llapi/utils/DbgHelper.h"

#include <thread>
#include <string>
#include <map>

#include <windows.h>
#include <Psapi.h>

#include <dbghelp/dbghelp.h>

#include "llapi/utils/WinHelper.h"
#include "llapi/utils/StringHelper.h"
#include "llapi/LoggerAPI.h"

#include "liteloader/Config.h"
#include "liteloader/LiteLoader.h"

using namespace std;

using ll::logger;

#define DBGHELP_TRANSLATE_TCHAR

/////////////////////////////////// Symbol Loader ///////////////////////////////////

std::set<std::wstring> loadedSymbolDir;
bool symbolsLoaded = false;

void FindSymbols(wstring& collection, const string& nowPath, bool recursion = false) {
    filesystem::directory_iterator list(nowPath);
    for (auto& it : list) {
        if (it.is_directory() && recursion) {
            FindSymbols(collection, it.path().string(), recursion);
        } else if (it.path().extension() == ".pdb") {
            filesystem::path dir = filesystem::canonical(it.path());
            wstring dirPath = dir.remove_filename().native();

            if (loadedSymbolDir.find(dirPath) == loadedSymbolDir.end()) {
                collection = collection + L";" + dirPath.substr(0, dirPath.size() - 1);
                loadedSymbolDir.insert(dirPath);
            }
        }
    }
}

bool LoadSymbols() {
    if (symbolsLoaded)
        return true;

    loadedSymbolDir.clear();
    wstring symbolPath{L"srv*C:\\Windows\\symbols*http://msdl.microsoft.com/download/symbols"};
    FindSymbols(symbolPath, ".", false);
    FindSymbols(symbolPath, ".\\plugins", true);

    if (!SymInitializeW(GetCurrentProcess(), symbolPath.c_str(), TRUE)) {
        logger.warn("Fail to load Symbol Files! Error Code: {}", GetLastError());
        return false;
    }
    loadedSymbolDir.clear();
    symbolsLoaded = true;
    return true;
}

bool CleanupSymbols() {
    symbolsLoaded = false;
    return SymCleanup(GetCurrentProcess());
}


/////////////////////////////////// Symbol Reader ///////////////////////////////////

std::map<DWORD, std::wstring> moduleMap;

PSYMBOL_INFOW GetSymbolInfo(HANDLE hProcess, void* address) {
    PSYMBOL_INFOW pSymbol = (SYMBOL_INFOW*)new char[sizeof(SYMBOL_INFOW) + MAX_SYM_NAME * sizeof(TCHAR)];
    pSymbol->SizeOfStruct = sizeof(SYMBOL_INFOW);
    pSymbol->MaxNameLen = MAX_SYM_NAME;

    DWORD64 displacement = 0;
    if (SymFromAddrW(hProcess, (DWORD64)address, &displacement, pSymbol))
        return pSymbol;
    else
        return NULL;
}

void CleanSymbolInfo(PSYMBOL_INFOW pSymbol) {
    delete[]((char*)pSymbol);
}

BOOL CALLBACK EnumerateModuleCallBack(PCTSTR ModuleName, DWORD64 ModuleBase, ULONG ModuleSize, PVOID UserContext) {
    std::map<DWORD, std::wstring>* pModuleMap = (std::map<DWORD, std::wstring>*)UserContext;
    LPCWSTR name = wcsrchr(ModuleName, TEXT('\\')) + 1;
    (*pModuleMap)[(DWORD)ModuleBase] = name;
    return TRUE;
}

bool CreateModuleMap(HANDLE hProcess) {
    if (!EnumerateLoadedModulesW64(hProcess, EnumerateModuleCallBack, &moduleMap)) {
        logger.error("Fail to Enumerate loaded modules! Error Code: {}", GetLastError());
        return false;
    }
    return true;
}

wstring MapModuleFromAddr(HANDLE hProcess, void* address) {
    return moduleMap[(DWORD)SymGetModuleBase64(hProcess, (DWORD64)address)];
}

/////////////////////////////////// Print Traceback ///////////////////////////////////

#define MACHINE_TYPE IMAGE_FILE_MACHINE_AMD64

bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e, Logger* l) {
    Logger& debugLogger = l ? *l : logger;
    if (!ll::globalConfig.enableErrorStackTraceback) {
        logger.error("* Stack traceback is disabled by config file.");
        return true;
    }

    HANDLE hProcess = GetCurrentProcess();
    HANDLE hThread = GetCurrentThread();
    DWORD threadId = GetCurrentThreadId();
    bool cacheSymbol = ll::globalConfig.cacheErrorStackTracebackSymbol;
    bool res = false;

    std::thread printThread([e, hProcess, hThread, threadId, cacheSymbol, &res, &debugLogger]() {
        // Set global SEH-Exception handler
        _set_se_translator(seh_exception::TranslateSEHtoCE);

        LoadSymbols();
        CreateModuleMap(hProcess);

        PCONTEXT pContext;
        CONTEXT context{};
        if (e)
            pContext = e->ContextRecord;
        else {
            HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, TRUE, threadId);
            if (hThread == NULL) {
                logger.error("Fail to Open Thread! Error Code: {}", GetLastError());
                return;
            }
            context.ContextFlags = CONTEXT_FULL;
            if (!GetThreadContext(hThread, &context)) {
                logger.error("Fail to Get Context! Error Code: {}", GetLastError());
                return;
            }
            pContext = &context;
        }

        STACKFRAME64 stackFrame = {0};
        stackFrame.AddrPC.Mode = AddrModeFlat;
        stackFrame.AddrPC.Offset = pContext->Rip;
        stackFrame.AddrStack.Mode = AddrModeFlat;
        stackFrame.AddrStack.Offset = pContext->Rsp;
        stackFrame.AddrFrame.Mode = AddrModeFlat;
        stackFrame.AddrFrame.Offset = pContext->Rbp;

        bool skipingPrintFunctionsStack = true;

        while (StackWalk64(MACHINE_TYPE, hProcess, hThread, &stackFrame, pContext,
                           NULL, SymFunctionTableAccess64, SymGetModuleBase64, NULL)) {
            DWORD64 address = stackFrame.AddrPC.Offset;

            // Function
            PSYMBOL_INFOW info;
            auto moduleName = wstr2str(MapModuleFromAddr(hProcess, (void*)address).c_str());
            if (info = GetSymbolInfo(hProcess, (void*)address)) {
                if (skipingPrintFunctionsStack) {
                    if (wcscmp(info->Name, L"PrintCurrentStackTraceback") == 0) // Skiping these print functions' stack
                        skipingPrintFunctionsStack = false;
                    continue;
                }

                debugLogger.error("at {} (0x{:X})  [{}]",
                                  wstr2str(info->Name), info->Address, moduleName);

                // Line
                DWORD displacement = 0;
                IMAGEHLP_LINEW64 line{};
                line.SizeOfStruct = sizeof(IMAGEHLP_LINEW64);

                if (SymGetLineFromAddrW64(hProcess, address, &displacement, &line))
                    debugLogger.error("(in File {} : Line {})", wstr2str(line.FileName), line.LineNumber);
                delete info;
            } else
                debugLogger.error("at ???????? (0x{:X})  [{}]", address, moduleName);
        }
        cout << endl;

        if (!cacheSymbol)
            CleanupSymbols();
        res = true;
    });

    printThread.join();
    return res;
}

/////////////////////////////////// Debug Helper ///////////////////////////////////

HMODULE GetCallerModule(unsigned long FramesToSkip) {
    static const int maxFrameCount = 1;
    void* frames[maxFrameCount];
    int frameCount = CaptureStackBackTrace(FramesToSkip + 2, maxFrameCount, frames, NULL);

    std::string name;
    if (0 < frameCount) {
        HMODULE hModule;
        GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                          (LPCWSTR)frames[0], &hModule);
        return hModule;
    }
    return HMODULE();
}

std::string GetCallerModuleFileName(unsigned long FramesToSkip) {
    return GetModuleName(GetCallerModule(FramesToSkip));
}

bool GetFileVersion(const wchar_t* filePath, unsigned short* ver1, unsigned short* ver2, unsigned short* ver3, unsigned short* ver4, unsigned int* flag) {

    DWORD dwHandle = 0;
    DWORD dwLen = GetFileVersionInfoSizeW(filePath, &dwHandle);
    if (0 >= dwLen) {
        return false;
    }
    wchar_t* pBlock = new wchar_t[dwLen];
    if (NULL == pBlock) {
        return false;
    }
    if (!GetFileVersionInfoW(filePath, dwHandle, dwLen, pBlock)) {
        delete[] pBlock;
        return false;
    }

    VS_FIXEDFILEINFO* lpBuffer = nullptr;
    unsigned int uLen = 0;
    if (!VerQueryValueW(pBlock, L"\\", (void**)&lpBuffer, &uLen)) {
        delete[] pBlock;
        return false;
    }

    if (ver1)
        *ver1 = (lpBuffer->dwFileVersionMS >> 16) & 0x0000FFFF;
    if (ver2)
        *ver2 = lpBuffer->dwFileVersionMS & 0x0000FFFF;
    if (ver3)
        *ver3 = (lpBuffer->dwFileVersionLS >> 16) & 0x0000FFFF;
    if (ver4)
        *ver4 = lpBuffer->dwFileVersionLS & 0x0000FFFF;
    if (flag)
        *flag = lpBuffer->dwFileFlags;

    delete[] pBlock;
    return true;
}

inline std::string VersionToString(unsigned short major_ver, unsigned short minor_ver, unsigned short revision_ver, unsigned short build_ver, unsigned int flag = 0) {
    std::string flagStr = "";
    if (flag & VS_FF_DEBUG)
        flagStr += " DEBUG";
    if (flag & VS_FF_PRERELEASE)
        flagStr += " PRERELEASE";
    if (flag & VS_FF_PATCHED)
        flagStr += " PATCHED";
    if (flag & VS_FF_PRIVATEBUILD)
        flagStr += " PRIVATEBUILD";
    if (flag & VS_FF_INFOINFERRED)
        flagStr += " INFOINFERRED";
    if (flag & VS_FF_SPECIALBUILD)
        flagStr += " SPECIALBUILD";
    return fmt::format("{}.{}.{}.{}{}", major_ver, minor_ver, revision_ver, build_ver, flagStr);
}

std::string GetFileVersionString(HMODULE hModule, bool includeFlag) {
    unsigned short major_ver, minor_ver, revision_ver, build_ver;
    unsigned int flag;
    wchar_t filePath[MAX_PATH] = {0};
    GetModuleFileNameEx(GetCurrentProcess(), hModule, filePath, MAX_PATH);
    if (GetFileVersion(filePath, &major_ver, &minor_ver, &revision_ver, &build_ver, &flag)) {
        return VersionToString(major_ver, minor_ver, revision_ver, build_ver, includeFlag ? flag : 0);
    }
    return "";
}

std::string GetFileVersionString(std::string const& filePath, bool includeFlag) {
    unsigned short major_ver, minor_ver, revision_ver, build_ver;
    unsigned int flag;
    std::wstring wFilePath = str2wstr(filePath);
    if (GetFileVersion(wFilePath.c_str(), &major_ver, &minor_ver, &revision_ver, &build_ver, &flag)) {
        return VersionToString(major_ver, minor_ver, revision_ver, build_ver, includeFlag ? flag : 0);
    }
    return "";
}
