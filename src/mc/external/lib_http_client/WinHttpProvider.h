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
    // member functions
    // NOLINTBEGIN
    MCNAPI long CloseAllConnections();

    MCNAPI long ConnectAsync(::http_string const&, ::http_string const&, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*);

    MCNAPI ::xbox::httpclient::Result<void*> GetHSession(uint);

    MCNAPI long PerformAsync(::HC_CALL*, ::XAsyncBlock*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long GetProxyName(::xbox::httpclient::proxy_type, ::xbox::httpclient::Uri, ulong&, ::http_wstring&);

    MCNAPI static ::xbox::httpclient::WinHttpWebSocketExports GetWinHttpWebSocketExports();

    MCNAPI static ::xbox::httpclient::Result<::std::unique_ptr<
        ::xbox::httpclient::WinHttpProvider,
        ::http_alloc_deleter<::xbox::httpclient::WinHttpProvider>>>
    Initialize();

    MCNAPI static long SetGlobalProxyForHSession(void*, char const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
