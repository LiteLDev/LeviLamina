#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { struct HeaderCompare; }
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct WebSocketPerformInfo;
struct XAsyncBlock;
struct XAsyncProviderData;
// clang-format on

namespace xbox::httpclient {

class WebSocket {
public:
    // WebSocket inner types declare
    // clang-format off
    class ConnectContext;
    // clang-format on

    // WebSocket inner types define
    class ConnectContext {
    public:
        // prevent constructor by default
        ConnectContext& operator=(ConnectContext const&);
        ConnectContext(ConnectContext const&);
        ConnectContext();

    public:
        // NOLINTBEGIN
        MCAPI ConnectContext(std::shared_ptr<class xbox::httpclient::WebSocket>, struct XAsyncBlock*);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(std::shared_ptr<class xbox::httpclient::WebSocket>, struct XAsyncBlock*);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);
    WebSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocket() = default;

    MCAPI long ConnectAsync(http_string&&, http_string&&, struct XAsyncBlock*);

    MCAPI long Disconnect();

    MCAPI std::map<
        http_string,
        http_string,
        struct xbox::httpclient::HeaderCompare,
        class http_stl_allocator<std::pair<http_string const, http_string>>> const&
    Headers() const;

    MCAPI uint64 MaxReceiveBufferSize() const;

    MCAPI bool const ProxyDecryptsHttps() const;

    MCAPI http_string const& ProxyUri() const;

    MCAPI uint
    RegisterEventCallbacks(void (*)(struct HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*), void*);

    MCAPI long SendAsync(char const*, struct XAsyncBlock*);

    MCAPI long SetHeader(http_string&&, http_string&&);

    MCAPI static void BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*);

    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*);

    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WebSocket>> Initialize();

    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER*, char const*, void*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI WebSocket(uint64, struct WebSocketPerformInfo, struct HC_PERFORM_ENV*);

    MCAPI static long ConnectAsyncProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static void ConnectComplete(struct XAsyncBlock*);

    MCAPI static void
    NotifyWebSocketRoutedHandlers(struct HC_WEBSOCKET_OBSERVER*, bool, char const*, uchar const*, uint64);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(uint64, struct WebSocketPerformInfo, struct HC_PERFORM_ENV*);

    // NOLINTEND
};

}; // namespace xbox::httpclient
