#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

struct HC_PERFORM_ENV {
public:
    // prevent constructor by default
    HC_PERFORM_ENV& operator=(HC_PERFORM_ENV const&);
    HC_PERFORM_ENV(HC_PERFORM_ENV const&);
    HC_PERFORM_ENV();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HC_PERFORM_ENV();

    MCAPI long HttpCallPerformAsyncShim(struct HC_CALL*, struct XAsyncBlock*);

    MCAPI long
    WebSocketConnectAsyncShim(http_string&&, http_string&&, struct HC_WEBSOCKET_OBSERVER*, struct XAsyncBlock*);

    MCAPI static struct HttpPerformInfo GetPlatformDefaultHttpHandlers();

    MCAPI static struct WebSocketPerformInfo GetPlatformDefaultWebSocketHandlers();

    MCAPI static class Result<std::unique_ptr<struct HC_PERFORM_ENV, struct http_alloc_deleter<struct HC_PERFORM_ENV>>>
    Initialize(struct HCInitArgs*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static long HttpPerformAsyncShimProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static void HttpPerformComplete(struct XAsyncBlock*);

    MCAPI static void ProviderCleanup(void*, bool);

    MCAPI static void WebSocketClosed(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCAPI static long WebSocketConnectAsyncShimProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static void WebSocketConnectComplete(struct XAsyncBlock*);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
