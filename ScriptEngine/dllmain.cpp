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

