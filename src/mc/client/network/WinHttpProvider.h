#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/proxy_type.h"
#include "mc/common/wrapper/Result.h"
#include "mc/network/HCWebSocketCloseStatus.h"
#include "mc/network/http_stl_allocator.h"

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
    // vIndex: 0, symbol: ??1WinHttpProvider@httpclient@xbox@@UEAA@XZ
    virtual ~WinHttpProvider();

    // symbol: ?GetWinHttpWebSocketExports@WinHttpProvider@httpclient@xbox@@SA?AUWinHttpWebSocketExports@23@XZ
    MCAPI static struct xbox::httpclient::WinHttpWebSocketExports GetWinHttpWebSocketExports();

    // symbol:
    // ?HttpCallPerformAsyncHandler@WinHttpProvider@httpclient@xbox@@SAXPEAUHC_CALL@@PEAUXAsyncBlock@@PEAXPEAUHC_PERFORM_ENV@@@Z
    MCAPI static void HttpCallPerformAsyncHandler(struct HC_CALL*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);

    // symbol:
    // ?Initialize@WinHttpProvider@httpclient@xbox@@SA?AV?$Result@V?$shared_ptr@VWinHttpProvider@httpclient@xbox@@@std@@@@XZ
    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WinHttpProvider>> Initialize();

    // symbol:
    // ?WebSocketConnectAsyncHandler@WinHttpProvider@httpclient@xbox@@SAJPEBD0PEAUHC_WEBSOCKET_OBSERVER@@PEAUXAsyncBlock@@PEAXPEAUHC_PERFORM_ENV@@@Z
    MCAPI static long
    WebSocketConnectAsyncHandler(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*, void*, struct HC_PERFORM_ENV*);

    // symbol:
    // ?WebSocketDisconnectHandler@WinHttpProvider@httpclient@xbox@@SAJPEAUHC_WEBSOCKET_OBSERVER@@W4HCWebSocketCloseStatus@@PEAX@Z
    MCAPI static long WebSocketDisconnectHandler(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    // symbol:
    // ?WebSocketSendAsyncHandler@WinHttpProvider@httpclient@xbox@@SAJPEAUHC_WEBSOCKET_OBSERVER@@PEBDPEAUXAsyncBlock@@PEAX@Z
    MCAPI static long WebSocketSendAsyncHandler(struct HC_WEBSOCKET_OBSERVER*, char const*, struct XAsyncBlock*, void*);

    // symbol:
    // ?WebSocketSendBinaryAsyncHandler@WinHttpProvider@httpclient@xbox@@SAJPEAUHC_WEBSOCKET_OBSERVER@@PEBEIPEAUXAsyncBlock@@PEAX@Z
    MCAPI static long
    WebSocketSendBinaryAsyncHandler(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, struct XAsyncBlock*, void*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CloseAllConnections@WinHttpProvider@httpclient@xbox@@AEAAJXZ
    MCAPI long CloseAllConnections();

    // symbol: ?GetHSession@WinHttpProvider@httpclient@xbox@@AEAA?AV?$Result@PEAX@@I@Z
    MCAPI class Result<void*> GetHSession(uint);

    // symbol: ?HttpCallPerformAsync@WinHttpProvider@httpclient@xbox@@AEAAJPEAUHC_CALL@@PEAUXAsyncBlock@@@Z
    MCAPI long HttpCallPerformAsync(struct HC_CALL*, struct XAsyncBlock*);

    // symbol:
    // ?WebSocketConnectAsync@WinHttpProvider@httpclient@xbox@@AEAAJPEBD0PEAUHC_WEBSOCKET_OBSERVER@@PEAUXAsyncBlock@@@Z
    MCAPI long WebSocketConnectAsync(char const*, char const*, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*);

    // symbol:
    // ?GetProxyName@WinHttpProvider@httpclient@xbox@@CAJW4proxy_type@23@VUri@23@AEAKAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$http_stl_allocator@_W@@@std@@@Z
    MCAPI static long GetProxyName(::xbox::httpclient::proxy_type, class xbox::httpclient::Uri, ulong&, http_wstring&);

    // symbol: ?SetGlobalProxyForHSession@WinHttpProvider@httpclient@xbox@@CAJPEAXPEBD@Z
    MCAPI static long SetGlobalProxyForHSession(void*, char const*);

    // NOLINTEND
};

}; // namespace xbox::httpclient
