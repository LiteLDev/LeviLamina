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
    // prevent constructor by default
    HC_PERFORM_ENV& operator=(HC_PERFORM_ENV const&);
    HC_PERFORM_ENV(HC_PERFORM_ENV const&);
    HC_PERFORM_ENV();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI long HttpCallPerformAsyncShim(::HC_CALL*, ::XAsyncBlock*);

    MCAPI long WebSocketConnectAsyncShim(::http_string&&, ::http_string&&, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HttpPerformInfo GetPlatformDefaultHttpHandlers();

    MCAPI static ::WebSocketPerformInfo GetPlatformDefaultWebSocketHandlers();

    MCAPI static long HttpPerformAsyncShimProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static void HttpPerformComplete(::XAsyncBlock*);

    MCAPI static ::Result<::std::unique_ptr<::HC_PERFORM_ENV, ::http_alloc_deleter<::HC_PERFORM_ENV>>>
    Initialize(::HCInitArgs*);

    MCAPI static void ProviderCleanup(void*, bool);

    MCAPI static void WebSocketClosed(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCAPI static long WebSocketConnectAsyncShimProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static void WebSocketConnectComplete(::XAsyncBlock*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
