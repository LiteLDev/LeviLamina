#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/Result.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
struct XAsyncProviderData;
namespace xbox::httpclient { class IHttpProvider; }
namespace xbox::httpclient { class IWebSocketProvider; }
namespace xbox::httpclient { class WebSocket; }
// clang-format on

namespace xbox::httpclient {

class NetworkState {
public:
    // NetworkState inner types declare
    // clang-format off
    struct ActiveWebSocketContext;
    // clang-format on

    // NetworkState inner types define
    struct ActiveWebSocketContext {};

public:
    // prevent constructor by default
    NetworkState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::xbox::httpclient::Result<::std::unique_ptr<::HC_CALL, ::http_alloc_deleter<::HC_CALL>>> HttpCallCreate();

    MCNAPI long HttpCallPerformAsync(::HC_CALL*, ::XAsyncBlock*);

    MCNAPI NetworkState(
        ::std::unique_ptr<::xbox::httpclient::IHttpProvider, ::http_alloc_deleter<::xbox::httpclient::IHttpProvider>>,
        ::std::unique_ptr<
            ::xbox::httpclient::IWebSocketProvider,
            ::http_alloc_deleter<::xbox::httpclient::IWebSocketProvider>>
    );

    MCNAPI bool ScheduleCleanup();

    MCNAPI long WebSocketConnectAsync(::http_string&&, ::http_string&&, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*);

    MCNAPI ::xbox::httpclient::Result<::std::shared_ptr<::xbox::httpclient::WebSocket>> WebSocketCreate();

    MCNAPI ~NetworkState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long HttpCallPerformAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void HttpCallPerformComplete(::XAsyncBlock*);

    MCNAPI static ::xbox::httpclient::Result<
        ::std::unique_ptr<::xbox::httpclient::NetworkState, ::http_alloc_deleter<::xbox::httpclient::NetworkState>>>
        Initialize(
            ::std::
                unique_ptr<::xbox::httpclient::IHttpProvider, ::http_alloc_deleter<::xbox::httpclient::IHttpProvider>>,
            ::std::unique_ptr<
                ::xbox::httpclient::IWebSocketProvider,
                ::http_alloc_deleter<::xbox::httpclient::IWebSocketProvider>>
        );

    MCNAPI static void WebSocketClosed(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCNAPI static long WebSocketConnectAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void WebSocketConnectComplete(::XAsyncBlock*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::xbox::httpclient::IHttpProvider, ::http_alloc_deleter<::xbox::httpclient::IHttpProvider>>,
        ::std::unique_ptr<
            ::xbox::httpclient::IWebSocketProvider,
            ::http_alloc_deleter<::xbox::httpclient::IWebSocketProvider>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace xbox::httpclient
