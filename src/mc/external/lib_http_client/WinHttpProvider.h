#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_PERFORM_ENV;
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

    MCNAPI ::Result<void*> GetHSession(uint);

    MCNAPI long HttpCallPerformAsync(::HC_CALL*, ::XAsyncBlock*);

    MCNAPI long WebSocketConnectAsync(char const*, char const*, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long GetProxyName(::xbox::httpclient::proxy_type, ::xbox::httpclient::Uri, ulong&, ::http_wstring&);

    MCNAPI static ::xbox::httpclient::WinHttpWebSocketExports GetWinHttpWebSocketExports();

    MCNAPI static void HttpCallPerformAsyncHandler(::HC_CALL*, ::XAsyncBlock*, void*, ::HC_PERFORM_ENV*);

    MCNAPI static ::Result<::std::shared_ptr<::xbox::httpclient::WinHttpProvider>> Initialize();

    MCNAPI static long SetGlobalProxyForHSession(void*, char const*);

    MCNAPI static long
    WebSocketConnectAsyncHandler(char const*, char const*, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*, void*, ::HC_PERFORM_ENV*);

    MCNAPI static long WebSocketDisconnectHandler(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCNAPI static long WebSocketSendAsyncHandler(::HC_WEBSOCKET_OBSERVER*, char const*, ::XAsyncBlock*, void*);

    MCNAPI static long
    WebSocketSendBinaryAsyncHandler(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, ::XAsyncBlock*, void*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
