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
    struct EventCallbacks;
    // clang-format on

    // WebSocket inner types define
    struct ConnectContext {
    public:
        // prevent constructor by default
        ConnectContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ConnectContext(::std::shared_ptr<::xbox::httpclient::WebSocket>, ::XAsyncBlock*);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::shared_ptr<::xbox::httpclient::WebSocket>, ::XAsyncBlock*);
        // NOLINTEND
    };

    struct EventCallbacks {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long ConnectAsync(::http_string&&, ::http_string&&, ::XAsyncBlock*);

    MCNAPI long Disconnect();

    MCNAPI ::std::map<
        ::http_string,
        ::http_string,
        ::xbox::httpclient::HeaderCompare,
        ::http_stl_allocator<::std::pair<::http_string const, ::http_string>>> const&
    Headers() const;

    MCNAPI uint64 MaxReceiveBufferSize() const;

    MCNAPI bool const ProxyDecryptsHttps() const;

    MCNAPI ::http_string const& ProxyUri() const;

    MCNAPI
    uint RegisterEventCallbacks(void (*)(::HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*), void (*)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*), void (*)(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*), void*);

    MCNAPI long SendAsync(char const*, ::XAsyncBlock*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void BinaryMessageFragmentFunc(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*);

    MCNAPI static void BinaryMessageFunc(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*);

    MCNAPI static void CloseFunc(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCNAPI static long ConnectAsyncProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void ConnectComplete(::XAsyncBlock*);

    MCNAPI static void MessageFunc(::HC_WEBSOCKET_OBSERVER*, char const*, void*);

    MCNAPI static void NotifyWebSocketRoutedHandlers(::HC_WEBSOCKET_OBSERVER*, bool, char const*, uchar const*, uint64);
    // NOLINTEND
};

} // namespace xbox::httpclient
