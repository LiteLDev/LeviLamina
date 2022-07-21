// BDS and LiteLoader Apis
#pragma comment(lib, "../LiteLoader/Lib/bedrock_server_api.lib")
#pragma comment(lib, "../LiteLoader/Lib/bedrock_server_var.lib")
#pragma comment(lib, "../LiteLoader/Lib/SymDBHelper.lib")
#pragma comment(lib, "../LiteLoader/Lib/LiteLoader.lib")

// Common Libs
#pragma comment(lib, "third-party/cpp-base64/lib/cpp-base64.lib")
#pragma comment(lib, "third-party/openssl/libcrypto.lib")
#pragma comment(lib, "third-party/dyncall/lib/libdyncall_s.lib")
#pragma comment(lib, "third-party/dyncall/lib/libdyncallback_s.lib")
#pragma comment(lib, "third-party/dyncall/lib/libdynload_s.lib")
#pragma comment(lib, "third-party/openssl/libssl.lib")
#pragma comment(lib, "third-party/LightWebSocketClient/lib/LightWSClient.lib")
#pragma comment(lib, "third-party/nbt-cpp/lib/nbt-cpp.lib")

// Language Libraries for specific Language Platform
#ifdef SCRIPTX_LANG_NODEJS
#pragma comment(lib, "third-party/ScriptX/lib/ScriptX-NodeJs.lib")
#pragma comment(lib, "third-party/NodeJs/out/Release/libnode.lib")
#pragma comment(lib, "third-party/NodeJs/out/Release/lib/v8_libplatform.lib")
#pragma comment(linker, "/alternatename:?MakeWeak@V8@v8@@CAXPEAPEA_K@Z=?MakeWeak@api_internal@v8@@YAXPEAPEA_K@Z")
#pragma comment(linker, "/alternatename:?GlobalizeReference@V8@v8@@CAPEA_KPEAVIsolate@internal@2@PEA_K@Z=?GlobalizeReference@api_internal@v8@@YAPEA_KPEAVIsolate@internal@2@PEA_K@Z")
#pragma comment(linker, "/alternatename:?MoveGlobalReference@V8@v8@@CAXPEAPEA_K0@Z=?MoveGlobalReference@api_internal@v8@@YAXPEAPEA_K0@Z")
#pragma comment(linker, "/alternatename:?DisposeGlobal@V8@v8@@CAXPEA_K@Z=?DisposeGlobal@api_internal@v8@@YAXPEA_K@Z")
#pragma comment(linker, "/alternatename:?CopyGlobalReference@V8@v8@@CAPEA_KPEA_K@Z=?CopyGlobalReference@api_internal@v8@@YAPEA_KPEA_K@Z")
#pragma comment(linker, "/alternatename:?New@FunctionTemplate@v8@@SA?AV?$Local@VFunctionTemplate@v8@@@2@PEAVIsolate@2@P6AXAEBV?$FunctionCallbackInfo@VValue@v8@@@2@@ZV?$Local@VValue@v8@@@2@V?$Local@VSignature@v8@@@2@HW4ConstructorBehavior@2@W4SideEffectType@2@PEBVCFunction@2@@Z=?New@FunctionTemplate@v8@@SA?AV?$Local@VFunctionTemplate@v8@@@2@PEAVIsolate@2@P6AXAEBV?$FunctionCallbackInfo@VValue@v8@@@2@@ZV?$Local@VValue@v8@@@2@V?$Local@VSignature@v8@@@2@HW4ConstructorBehavior@2@W4SideEffectType@2@PEBVCFunction@2@GGG@Z")
#pragma comment(linker, "/alternatename:?ToLocalEmpty@V8@v8@@CAXXZ=?ToLocalEmpty@api_internal@v8@@YAXXZ")
#endif

#ifdef SCRIPTX_LANG_V8JS
#pragma comment(lib, "third-party/ScriptX/lib/ScriptX-Js.lib")
#pragma comment(lib, "third-party/V8/lib/v8.lib")
#pragma comment(lib, "third-party/V8/lib/v8_libbase.lib")
#pragma comment(lib, "third-party/V8/lib/v8_libplatform.lib")
#pragma comment(lib, "third-party/V8/lib/zlib.lib")
#endif

#ifdef SCRIPTX_LANG_LUA
#pragma comment(lib, "third-party/ScriptX/lib/ScriptX-Lua.lib")
#pragma comment(lib, "third-party/Lua/lib/lua.lib")
#endif

#include <windows.h>
#include <iostream>

extern void entry();

extern "C" {
    _declspec(dllexport) void onPostInit() {
        std::ios::sync_with_stdio(false);
        entry();
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,DWORD  ul_reason_for_call,LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

