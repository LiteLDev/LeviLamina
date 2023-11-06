#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Result.h"
#include "mc/network/HCWebSocketCloseStatus.h"
#include "mc/network/XAsyncOp.h"
#include "mc/network/http_alloc_deleter.h"
#include "mc/network/http_stl_allocator.h"

struct HC_PERFORM_ENV {
public:
    // prevent constructor by default
    HC_PERFORM_ENV& operator=(HC_PERFORM_ENV const&);
    HC_PERFORM_ENV(HC_PERFORM_ENV const&);
    HC_PERFORM_ENV();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HC_PERFORM_ENV@@UEAA@XZ
    virtual ~HC_PERFORM_ENV();

    // symbol: ?HttpCallPerformAsyncShim@HC_PERFORM_ENV@@QEAAJPEAUHC_CALL@@PEAUXAsyncBlock@@@Z
    MCAPI long HttpCallPerformAsyncShim(struct HC_CALL*, struct XAsyncBlock*);

    // symbol:
    // ?WebSocketConnectAsyncShim@HC_PERFORM_ENV@@QEAAJ$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@0PEAUHC_WEBSOCKET_OBSERVER@@PEAUXAsyncBlock@@@Z
    MCAPI long
    WebSocketConnectAsyncShim(http_string&&, http_string&&, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*);

    // symbol: ?GetPlatformDefaultHttpHandlers@HC_PERFORM_ENV@@SA?AUHttpPerformInfo@@XZ
    MCAPI static struct HttpPerformInfo GetPlatformDefaultHttpHandlers();

    // symbol: ?GetPlatformDefaultWebSocketHandlers@HC_PERFORM_ENV@@SA?AUWebSocketPerformInfo@@XZ
    MCAPI static struct WebSocketPerformInfo GetPlatformDefaultWebSocketHandlers();

    // symbol:
    // ?Initialize@HC_PERFORM_ENV@@SA?AV?$Result@V?$unique_ptr@UHC_PERFORM_ENV@@U?$http_alloc_deleter@UHC_PERFORM_ENV@@@@@std@@@@PEAUHCInitArgs@@@Z
    MCAPI static class Result<std::unique_ptr<struct HC_PERFORM_ENV, struct http_alloc_deleter<struct HC_PERFORM_ENV>>>
    Initialize(struct HCInitArgs*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?HttpPerformAsyncShimProvider@HC_PERFORM_ENV@@CAJW4XAsyncOp@@PEBUXAsyncProviderData@@@Z
    MCAPI static long HttpPerformAsyncShimProvider(::XAsyncOp, struct XAsyncProviderData const*);

    // symbol: ?HttpPerformComplete@HC_PERFORM_ENV@@CAXPEAUXAsyncBlock@@@Z
    MCAPI static void HttpPerformComplete(struct XAsyncBlock*);

    // symbol: ?ProviderCleanup@HC_PERFORM_ENV@@CAXPEAX_N@Z
    MCAPI static void ProviderCleanup(void*, bool);

    // symbol: ?WebSocketClosed@HC_PERFORM_ENV@@CAXPEAUHC_WEBSOCKET_OBSERVER@@W4HCWebSocketCloseStatus@@PEAX@Z
    MCAPI static void WebSocketClosed(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    // symbol: ?WebSocketConnectAsyncShimProvider@HC_PERFORM_ENV@@CAJW4XAsyncOp@@PEBUXAsyncProviderData@@@Z
    MCAPI static long WebSocketConnectAsyncShimProvider(::XAsyncOp, struct XAsyncProviderData const*);

    // symbol: ?WebSocketConnectComplete@HC_PERFORM_ENV@@CAXPEAUXAsyncBlock@@@Z
    MCAPI static void WebSocketConnectComplete(struct XAsyncBlock*);

    // NOLINTEND
};
