#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HCInitArgs;
struct HC_CALL;
struct HC_WEBSOCKET_OBSERVER;
struct HttpPerformInfo;
struct WebSocketPerformInfo;
struct XAsyncBlock;
struct XAsyncProviderData;
// clang-format on

struct HC_PERFORM_ENV {
public:
    // HC_PERFORM_ENV inner types declare
    // clang-format off
    struct ActiveWebSocketContext;
    // clang-format on

    // HC_PERFORM_ENV inner types define
    struct ActiveWebSocketContext {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long HttpCallPerformAsyncShim(::HC_CALL*, ::XAsyncBlock*);

    MCNAPI long WebSocketConnectAsyncShim(::http_string&&, ::http_string&&, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HttpPerformInfo GetPlatformDefaultHttpHandlers();

    MCNAPI static ::WebSocketPerformInfo GetPlatformDefaultWebSocketHandlers();

    MCNAPI static long HttpPerformAsyncShimProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void HttpPerformComplete(::XAsyncBlock*);

    MCNAPI static ::Result<::std::unique_ptr<::HC_PERFORM_ENV, ::http_alloc_deleter<::HC_PERFORM_ENV>>>
    Initialize(::HCInitArgs*);

    MCNAPI static void ProviderCleanup(void*, bool);

    MCNAPI static void WebSocketClosed(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCNAPI static long WebSocketConnectAsyncShimProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void WebSocketConnectComplete(::XAsyncBlock*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
