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
    struct HttpPerformContext;
    struct WebSocketConnectContext;
    // clang-format on
    
    // NetworkState inner types define
    struct HttpPerformContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb7239c;
        ::ll::UntypedStorage<8, 8> mUnka9f0d1;
        ::ll::UntypedStorage<8, 8> mUnk35d28e;
        ::ll::UntypedStorage<8, 56> mUnk50a8b6;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        HttpPerformContext& operator=(HttpPerformContext const&);
        HttpPerformContext(HttpPerformContext const&);
        HttpPerformContext();
    
    };
    
    struct WebSocketConnectContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8053d2;
        ::ll::UntypedStorage<8, 32> mUnka91597;
        ::ll::UntypedStorage<8, 32> mUnk7e77c3;
        ::ll::UntypedStorage<8, 8> mUnk97f975;
        ::ll::UntypedStorage<8, 16> mUnk5c6bed;
        ::ll::UntypedStorage<8, 8> mUnkf33523;
        ::ll::UntypedStorage<8, 56> mUnk77a786;
        ::ll::UntypedStorage<8, 16> mUnk525d61;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        WebSocketConnectContext& operator=(WebSocketConnectContext const&);
        WebSocketConnectContext(WebSocketConnectContext const&);
        WebSocketConnectContext();
    
    };
    
    struct ActiveWebSocketContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkcae69f;
        ::ll::UntypedStorage<8, 8> mUnk5d8094;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ActiveWebSocketContext& operator=(ActiveWebSocketContext const&);
        ActiveWebSocketContext(ActiveWebSocketContext const&);
        ActiveWebSocketContext();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkf7d9bd;
    ::ll::UntypedStorage<8, 16> mUnk819e6d;
    ::ll::UntypedStorage<8, 16> mUnkea1c7e;
    ::ll::UntypedStorage<8, 8> mUnk4112ad;
    ::ll::UntypedStorage<8, 16> mUnk2c70cb;
    ::ll::UntypedStorage<8, 16> mUnke544fc;
    ::ll::UntypedStorage<8, 16> mUnk3b1bcc;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkState& operator=(NetworkState const&);
    NetworkState(NetworkState const&);
    NetworkState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::xbox::httpclient::Result<::std::unique_ptr<::HC_CALL, ::http_alloc_deleter<::HC_CALL>>> HttpCallCreate();

    MCNAPI long HttpCallPerformAsync(::HC_CALL* call, ::XAsyncBlock* async);

    MCNAPI NetworkState(::std::unique_ptr<::xbox::httpclient::IHttpProvider, ::http_alloc_deleter<::xbox::httpclient::IHttpProvider>> httpProvider, ::std::unique_ptr<::xbox::httpclient::IWebSocketProvider, ::http_alloc_deleter<::xbox::httpclient::IWebSocketProvider>> webSocketProvider);

    MCNAPI bool ScheduleCleanup();

    MCNAPI long WebSocketConnectAsync(::http_string&& uri, ::http_string&& subprotocol, ::HC_WEBSOCKET_OBSERVER* clientWebSocketHandle, ::XAsyncBlock* asyncBlock);

    MCNAPI ::xbox::httpclient::Result<::std::shared_ptr<::xbox::httpclient::WebSocket>> WebSocketCreate();

    MCNAPI ~NetworkState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static long HttpCallPerformAsyncProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static void HttpCallPerformComplete(::XAsyncBlock* async);

    MCNAPI static ::xbox::httpclient::Result<::std::unique_ptr<::xbox::httpclient::NetworkState, ::http_alloc_deleter<::xbox::httpclient::NetworkState>>> Initialize(::std::unique_ptr<::xbox::httpclient::IHttpProvider, ::http_alloc_deleter<::xbox::httpclient::IHttpProvider>> httpProvider, ::std::unique_ptr<::xbox::httpclient::IWebSocketProvider, ::http_alloc_deleter<::xbox::httpclient::IWebSocketProvider>> webSocketProvider);

    MCNAPI static void WebSocketClosed(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void* c);

    MCNAPI static long WebSocketConnectAsyncProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static void WebSocketConnectComplete(::XAsyncBlock* async);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::xbox::httpclient::IHttpProvider, ::http_alloc_deleter<::xbox::httpclient::IHttpProvider>> httpProvider, ::std::unique_ptr<::xbox::httpclient::IWebSocketProvider, ::http_alloc_deleter<::xbox::httpclient::IWebSocketProvider>> webSocketProvider);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
