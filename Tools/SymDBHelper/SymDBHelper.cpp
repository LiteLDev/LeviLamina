﻿/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 *
 * This file is derived from Microsoft implementation file delayhlp.cpp, which
 * is free for users to modify and derive.
 *
 * Modified By BDSLiteloader Developers in ordered to support SymDB
 * You Must Link with BDSLiteLoader.dll to get dlsym support
 *
 * To use this Method, you should static link this project (and LiteLoader)
 * Open Your Plugin's Project Setting
 * [Properties -> Linker -> Input -> Delay Load DLL] and add "bedrock_server.dll" to the list
 * then make sure you link bedrock_server_api.lib and bedrock_server_var.lib and here we go!
 *
 * BDS Funtions will be loaded as you call them
 *
 */

#pragma warning(disable : 4267)

#ifndef BDSAPI_FAKEDLL_NAME
#define BDSAPI_FAKEDLL_NAME "bedrock_server.dll"
#endif // !BDSAPI_FAKEDLL_NAME

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <delayimp.h>

#ifdef __cplusplus
#define EXTERN_C_SymDBHelper extern "C"
#else
#define EXTERN_C_SymDBHelper extern
#endif

extern "C" {
inline const PfnDliHook __pfnDliFailureHook2 = nullptr;
inline const PfnDliHook __pfnDliNotifyHook2 = nullptr;
}

// LiteLoader Api to Fetch Function Address
EXTERN_C_SymDBHelper void* dlsym_real(char const* name);

static size_t __strlen(const char* sz) {
    const char* szEnd = sz;
    while (*szEnd++ != 0)
        ;
    return szEnd - sz - 1;
}

static int __memcmp(const void* pv1, const void* pv2, size_t cb) {
    if (!cb)
        return 0;
    while (--cb && *(char*)pv1 == *(char*)pv2) {
        pv1 = ((char*)pv1) + 1;
        pv2 = ((char*)pv2) + 1;
    }
    return *((unsigned char*)pv1) - *((unsigned char*)pv2);
}

static void* __memcpy(void* pvDst, const void* pvSrc, size_t cb) {
    void* pvRet = pvDst;
    while (cb--) {
        *(char*)pvDst = *(char*)pvSrc;
        pvDst = ((char*)pvDst) + 1;
        pvSrc = ((char*)pvSrc) + 1;
    }
    return pvRet;
}

static unsigned IndexFromPImgThunkData(PCImgThunkData pitdCur, PCImgThunkData pitdBase) {
    return (unsigned)(pitdCur - pitdBase);
}

EXTERN_C_SymDBHelper IMAGE_DOS_HEADER __ImageBase;

#define PtrFromRVA(RVA) (((PBYTE)&__ImageBase) + (RVA))

typedef struct UnloadInfo* PUnloadInfo;
typedef struct UnloadInfo {
    PUnloadInfo puiNext;
    PCImgDelayDescr pidd;
} UnloadInfo;

static unsigned CountOfImports(PCImgThunkData pitdBase) {
    unsigned cRet = 0;
    PCImgThunkData pitd = pitdBase;
    while (pitd->u1.Function) {
        pitd++;
        cRet++;
    }
    return cRet;
}

PUnloadInfo __puiHead = 0;

static UnloadInfo* add_ULI(PCImgDelayDescr pidd_) {
    UnloadInfo* ret = (UnloadInfo*)LocalAlloc(LPTR, sizeof(UnloadInfo));
    ret->pidd = pidd_;
    ret->puiNext = __puiHead;
    __puiHead = ret;
    return ret;
}

static void del_ULI(UnloadInfo* p) {
    if (p) {
        PUnloadInfo* ppui = &__puiHead;
        while (*ppui && *ppui != p) {
            ppui = &((*ppui)->puiNext);
        }
        if (*ppui == p)
            *ppui = p->puiNext;
        LocalFree((void*)p);
    }
}

typedef struct InternalImgDelayDescr {
    DWORD grAttrs;
    LPCSTR szName;
    HMODULE* phmod;
    PImgThunkData pIAT;
    PCImgThunkData pINT;
    PCImgThunkData pBoundIAT;
    PCImgThunkData pUnloadIAT;
    DWORD dwTimeStamp;
} InternalImgDelayDescr;

typedef InternalImgDelayDescr* PIIDD;
typedef const InternalImgDelayDescr* PCIIDD;

static PIMAGE_NT_HEADERS WINAPI PinhFromImageBase(HMODULE hmod) {
    return (PIMAGE_NT_HEADERS)(((PBYTE)(hmod)) + ((PIMAGE_DOS_HEADER)(hmod))->e_lfanew);
}

static void WINAPI OverlayIAT(PImgThunkData pitdDst, PCImgThunkData pitdSrc) {
    __memcpy(pitdDst, pitdSrc, CountOfImports(pitdDst) * sizeof(IMAGE_THUNK_DATA));
}

static DWORD WINAPI TimeStampOfImage(PIMAGE_NT_HEADERS pinh) {
    return pinh->FileHeader.TimeDateStamp;
}

static int WINAPI FLoadedAtPreferredAddress(PIMAGE_NT_HEADERS pinh, HMODULE hmod) {
    return ((UINT_PTR)(hmod)) == pinh->OptionalHeader.ImageBase;
}

#if (defined(_X86_) && !defined(__x86_64))
#undef InterlockedExchangePointer
#define InterlockedExchangePointer(Target, Value) (PVOID)(LONG_PTR) InterlockedExchange((PLONG)(Target), (LONG)(LONG_PTR)(Value))
/*typedef unsigned long *PULONG_PTR;*/
#endif

namespace Magic {
static __int64 pImgDelayDescr_BDS = 0;

static __int64 findRva(PCImgDelayDescr pidd, unsigned int iIAT) {

    InternalImgDelayDescr idd = {
        pidd->grAttrs,
        (LPCSTR)PtrFromRVA(pidd->rvaDLLName),
        (HMODULE*)PtrFromRVA(pidd->rvaHmod),
        (PImgThunkData)PtrFromRVA(pidd->rvaIAT),
        (PCImgThunkData)PtrFromRVA(pidd->rvaINT),
        (PCImgThunkData)PtrFromRVA(pidd->rvaBoundIAT),
        (PCImgThunkData)PtrFromRVA(pidd->rvaUnloadIAT),
        pidd->dwTimeStamp};

    unsigned int iINT;
    PCImgThunkData pitd;

    if (!(idd.grAttrs & dlattrRva)) {
        return 0;
    }

    iINT = iIAT;
    pitd = &(idd.pINT[iINT]);

    if (!IMAGE_SNAP_BY_ORDINAL(pitd->u1.Ordinal))
        return (__int64)dlsym_real(
            (LPCSTR)(((PIMAGE_IMPORT_BY_NAME)PtrFromRVA(
                          (RVA)((UINT_PTR)(pitd->u1.AddressOfData))))
                         ->Name));
    return 0;
}
static void initDlsymLinkCache(LPCSTR szDll) {
    PIMAGE_NT_HEADERS pinh = PinhFromImageBase((HMODULE)(&__ImageBase));
    if (pinh->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT].Size) {
        PCImgDelayDescr pidd;
        // find target dll as PCImgDelayDescr
        pidd = (PCImgDelayDescr)PtrFromRVA(pinh->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT].VirtualAddress);
        while (pidd->rvaDLLName) {
            LPCSTR szDllCur = (LPCSTR)PtrFromRVA(pidd->rvaDLLName);
            size_t cchDllCur = __strlen(szDllCur);
            if (cchDllCur == __strlen(szDll) && __memcmp(szDll, szDllCur, cchDllCur) == 0)
                break;
            pidd++;
        }
        if (pidd->rvaDLLName) {
            FARPROC* ppfnIATEntry = (FARPROC*)PtrFromRVA(pidd->rvaIAT);
            size_t iIAT = 0;
            size_t cpfnIATEntries = CountOfImports((PCImgThunkData)(ppfnIATEntry));
            FARPROC* ppfnIATEntryMax = ppfnIATEntry + cpfnIATEntries;
            for (; ppfnIATEntry < ppfnIATEntryMax;) {
                // iat binding
                *ppfnIATEntry = (FARPROC)findRva(pidd, iIAT);
                ppfnIATEntry++;
                iIAT++;
            }
        } else {
            RaiseException(VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND), 0, 1, (PULONG_PTR)(szDll));
        }
    }
    return;
}
struct DynamicInitializer {
    DynamicInitializer() {
        initDlsymLinkCache(BDSAPI_FAKEDLL_NAME);
    }
};
static DynamicInitializer dynamicInitializer;
} // namespace Magic

#include <stdio.h>
EXTERN_C_SymDBHelper FARPROC WINAPI
    __delayLoadHelper2(PCImgDelayDescr pidd, FARPROC* ppfnIATEntry) {

    InternalImgDelayDescr idd = {
        pidd->grAttrs,
        (LPCSTR)PtrFromRVA(pidd->rvaDLLName),
        (HMODULE*)PtrFromRVA(pidd->rvaHmod),
        (PImgThunkData)PtrFromRVA(pidd->rvaIAT),
        (PCImgThunkData)PtrFromRVA(pidd->rvaINT),
        (PCImgThunkData)PtrFromRVA(pidd->rvaBoundIAT),
        (PCImgThunkData)PtrFromRVA(pidd->rvaUnloadIAT),
        pidd->dwTimeStamp};
    DelayLoadInfo dli = {
        sizeof(DelayLoadInfo),
        pidd,
        ppfnIATEntry,
        idd.szName,
        {0, {NULL}},
        0,
        0,
        0};
    HMODULE hmod;
    unsigned iIAT, iINT;
    PCImgThunkData pitd;
    FARPROC pfnRet;

    if (!(idd.grAttrs & dlattrRva)) {
        PDelayLoadInfo rgpdli[1] = {&dli};
        RaiseException(VcppException(ERROR_SEVERITY_ERROR, ERROR_INVALID_PARAMETER), 0, 1, (PULONG_PTR)(rgpdli));
        return 0;
    }
    hmod = *idd.phmod;

    // Calculate the index for the IAT entry in the import address table
    // N.B. The INT entries are ordered the same as the IAT entries so
    // the calculation can be done on the IAT side.
    iIAT = IndexFromPImgThunkData((PCImgThunkData)(ppfnIATEntry), idd.pIAT);
    iINT = iIAT;
    pitd = &(idd.pINT[iINT]);

    dli.dlp.fImportByName = !IMAGE_SNAP_BY_ORDINAL(pitd->u1.Ordinal);
    if (dli.dlp.fImportByName)
        dli.dlp.szProcName =
            (LPCSTR)(((PIMAGE_IMPORT_BY_NAME)PtrFromRVA(
                          (RVA)((UINT_PTR)(pitd->u1.AddressOfData))))
                         ->Name);
    else
        dli.dlp.dwOrdinal = (DWORD)(IMAGE_ORDINAL(pitd->u1.Ordinal));
    pfnRet = NULL;
    if (__pfnDliNotifyHook2) {
        pfnRet = ((*__pfnDliNotifyHook2)(dliStartProcessing, &dli));
        if (pfnRet != NULL)
            goto HookBypass;
    }
    //"bedrock_server.dll"
    // printf_s("DelayLoad Called for [iiat=%d] %s %d\n", iIAT, dli.dlp.szProcName, dli.dlp.dwOrdinal);
    if (Magic::pImgDelayDescr_BDS == (__int64)pidd ||
        strcmp(dli.szDll, BDSAPI_FAKEDLL_NAME) == 0) {
        pfnRet = (FARPROC)dlsym_real(dli.dlp.szProcName);
        goto SetEntryHookBypass;
    }

    if (hmod == 0) {
        if (__pfnDliNotifyHook2)
            hmod = (HMODULE)(((*__pfnDliNotifyHook2)(dliNotePreLoadLibrary, &dli)));
        if (hmod == 0)
#ifdef __clang__
            hmod = LoadLibraryA(dli.szDll);
#elif __GNUC__
            hmod = LoadLibrary(dli.szDll);
#elif _MSC_VER
            hmod = LoadLibraryA(dli.szDll);
#endif


        if (hmod == 0) {
            dli.dwLastError = GetLastError();
            if (__pfnDliFailureHook2)
                hmod = (HMODULE)((*__pfnDliFailureHook2)(dliFailLoadLib, &dli));
            if (hmod == 0) {
                PDelayLoadInfo rgpdli[1] = {&dli};
                RaiseException(VcppException(ERROR_SEVERITY_ERROR, ERROR_MOD_NOT_FOUND), 0, 1, (PULONG_PTR)(rgpdli));
                return dli.pfnCur;
            }
        }
        HMODULE hmodT = (HMODULE)(InterlockedExchangePointer((PVOID*)idd.phmod, (PVOID)(hmod)));
        if (hmodT != hmod) {
            if (pidd->rvaUnloadIAT)
                add_ULI(pidd);
        } else
            FreeLibrary(hmod);
    }
    dli.hmodCur = hmod;
    if (__pfnDliNotifyHook2)
        pfnRet = (*__pfnDliNotifyHook2)(dliNotePreGetProcAddress, &dli);
    if (pfnRet == 0) {
        if (pidd->rvaBoundIAT && pidd->dwTimeStamp) {
            PIMAGE_NT_HEADERS pinh = (PIMAGE_NT_HEADERS)(PinhFromImageBase(hmod));
            if (pinh->Signature == IMAGE_NT_SIGNATURE &&
                TimeStampOfImage(pinh) == idd.dwTimeStamp &&
                FLoadedAtPreferredAddress(pinh, hmod)) {
                pfnRet = (FARPROC)((UINT_PTR)(idd.pBoundIAT[iIAT].u1.Function));
                if (pfnRet != 0)
                    goto SetEntryHookBypass;
            }
        }
        pfnRet = GetProcAddress(hmod, dli.dlp.szProcName);
    }
    if (!pfnRet) {
        dli.dwLastError = GetLastError();
        if (__pfnDliFailureHook2)
            pfnRet = (*__pfnDliFailureHook2)(dliFailGetProc, &dli);
        if (!pfnRet) {
            PDelayLoadInfo rgpdli[1] = {&dli};
            RaiseException(VcppException(ERROR_SEVERITY_ERROR, ERROR_PROC_NOT_FOUND), 0, 1, (PULONG_PTR)(rgpdli));
            pfnRet = dli.pfnCur;
        }
    }
SetEntryHookBypass:
    *ppfnIATEntry = pfnRet;
HookBypass:
    if (__pfnDliNotifyHook2) {
        dli.dwLastError = 0;
        dli.hmodCur = hmod;
        dli.pfnCur = pfnRet;
        (*__pfnDliNotifyHook2)(dliNoteEndProcessing, &dli);
    }
    return pfnRet;
}

BOOL WINAPI __FUnloadDelayLoadedDLL2(LPCSTR szDll) {

    BOOL fRet = FALSE;
    PUnloadInfo pui = __puiHead;

    for (pui = __puiHead; pui; pui = pui->puiNext) {
        LPCSTR szName = (LPCSTR)PtrFromRVA(pui->pidd->rvaDLLName);
        size_t cbName = __strlen(szName);
        if (cbName == __strlen(szDll) && __memcmp(szDll, szName, cbName) == 0)
            break;
    }
    if (pui && pui->pidd->rvaUnloadIAT) {
        PCImgDelayDescr pidd = pui->pidd;
        HMODULE* phmod = (HMODULE*)PtrFromRVA(pidd->rvaHmod);
        HMODULE hmod = *phmod;
        OverlayIAT((PImgThunkData)PtrFromRVA(pidd->rvaIAT), (PCImgThunkData)PtrFromRVA(pidd->rvaUnloadIAT));
        FreeLibrary(hmod);
        *phmod = NULL;
        del_ULI((UnloadInfo*)pui);
        fRet = TRUE;
    }
    return fRet;
}

HRESULT WINAPI __HrLoadAllImportsForDll(LPCSTR szDll) {

    HRESULT hrRet = HRESULT_FROM_WIN32(ERROR_MOD_NOT_FOUND);
    PIMAGE_NT_HEADERS pinh = PinhFromImageBase((HMODULE)(&__ImageBase));
    if (pinh->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT].Size) {
        PCImgDelayDescr pidd;
        pidd = (PCImgDelayDescr)PtrFromRVA(pinh->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT].VirtualAddress);
        while (pidd->rvaDLLName) {
            LPCSTR szDllCur = (LPCSTR)PtrFromRVA(pidd->rvaDLLName);
            size_t cchDllCur = __strlen(szDllCur);
            if (cchDllCur == __strlen(szDll) && __memcmp(szDll, szDllCur, cchDllCur) == 0)
                break;
            pidd++;
        }
        if (pidd->rvaDLLName) {
            FARPROC* ppfnIATEntry = (FARPROC*)PtrFromRVA(pidd->rvaIAT);
            size_t cpfnIATEntries = CountOfImports((PCImgThunkData)(ppfnIATEntry));
            FARPROC* ppfnIATEntryMax = ppfnIATEntry + cpfnIATEntries;
            for (; ppfnIATEntry < ppfnIATEntryMax; ppfnIATEntry++) {
                __delayLoadHelper2(pidd, ppfnIATEntry);
            }
            hrRet = S_OK;
        }
    }
    return hrRet;
}

#undef EXTERN_C_SymDBHelper
