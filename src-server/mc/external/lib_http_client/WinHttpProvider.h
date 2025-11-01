#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/Result.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
namespace xbox::httpclient { class Uri; }
namespace xbox::httpclient { struct WinHttpWebSocketExports; }
// clang-format on

namespace xbox::httpclient {

class WinHttpProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb0da06;
    ::ll::UntypedStorage<4, 4> mUnkb204e6;
    ::ll::UntypedStorage<8, 32> mUnk457e34;
    ::ll::UntypedStorage<8, 80> mUnkf9480b;
    ::ll::UntypedStorage<8, 16> mUnk4ffef1;
    ::ll::UntypedStorage<8, 16> mUnkc63850;
    // NOLINTEND

public:
    // prevent constructor by default
    WinHttpProvider& operator=(WinHttpProvider const&);
    WinHttpProvider(WinHttpProvider const&);
    WinHttpProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WinHttpProvider();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long CloseAllConnections();

    MCNAPI long ConnectAsync(::http_string const& uri, ::http_string const& subprotocol, ::HC_WEBSOCKET_OBSERVER* websocketHandle, ::XAsyncBlock* async);

    MCNAPI ::xbox::httpclient::Result<void*> GetHSession(uint securityProtocolFlags);

    MCNAPI long PerformAsync(::HC_CALL* callHandle, ::XAsyncBlock* async);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long GetProxyName(::xbox::httpclient::proxy_type proxyType, ::xbox::httpclient::Uri proxyUri, ulong& pAccessType, ::http_wstring& pwProxyName);

    MCNAPI static ::xbox::httpclient::WinHttpWebSocketExports GetWinHttpWebSocketExports();

    MCNAPI static ::xbox::httpclient::Result<::std::unique_ptr<::xbox::httpclient::WinHttpProvider, ::http_alloc_deleter<::xbox::httpclient::WinHttpProvider>>> Initialize();

    MCNAPI static long SetGlobalProxyForHSession(void* hSession, char const* proxyUri);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
