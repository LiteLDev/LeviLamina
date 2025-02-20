#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
struct XAsyncProviderData;
namespace xbox::httpclient { struct HeaderCompare; }
// clang-format on

namespace xbox::httpclient {

class WebSocket {
public:
    // WebSocket inner types declare
    // clang-format off
    struct ConnectContext;
    // clang-format on

    // WebSocket inner types define
    struct ConnectContext {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ConnectContext(::std::shared_ptr<::xbox::httpclient::WebSocket>, ::XAsyncBlock*);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::shared_ptr<::xbox::httpclient::WebSocket>, ::XAsyncBlock*);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI long ConnectAsync(::http_string&&, ::http_string&&, ::XAsyncBlock*);

    MCAPI long Disconnect();

    MCAPI ::std::map<
        ::http_string,
        ::http_string,
        ::xbox::httpclient::HeaderCompare,
        ::http_stl_allocator<::std::pair<::http_string const, ::http_string>>> const&
    Headers() const;

    MCAPI uint64 MaxReceiveBufferSize() const;

    MCAPI bool const ProxyDecryptsHttps() const;

    MCAPI ::http_string const& ProxyUri() const;

    MCAPI
    uint RegisterEventCallbacks(void (*)(::HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*), void (*)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*), void (*)(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*), void*);

    MCAPI long SendAsync(char const*, ::XAsyncBlock*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void BinaryMessageFragmentFunc(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*);

    MCAPI static void BinaryMessageFunc(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*);

    MCAPI static void CloseFunc(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCAPI static long ConnectAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static void ConnectComplete(::XAsyncBlock*);

    MCAPI static void MessageFunc(::HC_WEBSOCKET_OBSERVER*, char const*, void*);

    MCAPI static void NotifyWebSocketRoutedHandlers(::HC_WEBSOCKET_OBSERVER*, bool, char const*, uchar const*, uint64);
    // NOLINTEND
};

} // namespace xbox::httpclient
