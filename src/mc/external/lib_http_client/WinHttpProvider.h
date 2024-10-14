#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class Uri; }
namespace xbox::httpclient { struct WinHttpWebSocketExports; }
struct HC_CALL;
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace xbox::httpclient {

class WinHttpProvider {
public:
    // prevent constructor by default
    WinHttpProvider& operator=(WinHttpProvider const&);
    WinHttpProvider(WinHttpProvider const&);
    WinHttpProvider();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WinHttpProvider();

    MCAPI static struct xbox::httpclient::WinHttpWebSocketExports GetWinHttpWebSocketExports();

    MCAPI static void HttpCallPerformAsyncHandler(struct HC_CALL*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);

    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WinHttpProvider>> Initialize();

    MCAPI static long
    WebSocketConnectAsyncHandler(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);

    MCAPI static long WebSocketDisconnectHandler(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCAPI static long WebSocketSendAsyncHandler(struct HC_WEBSOCKET_OBSERVER*, char const*, struct XAsyncBlock*, void*);

    MCAPI static long
    WebSocketSendBinaryAsyncHandler(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, struct XAsyncBlock*, void*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI long CloseAllConnections();

    MCAPI class Result<void*> GetHSession(uint);

    MCAPI long HttpCallPerformAsync(struct HC_CALL*, struct XAsyncBlock*);

    MCAPI long WebSocketConnectAsync(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*);

    MCAPI static long GetProxyName(::xbox::httpclient::proxy_type, class xbox::httpclient::Uri, ulong&, http_wstring&);

    MCAPI static long SetGlobalProxyForHSession(void*, char const*);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace xbox::httpclient
