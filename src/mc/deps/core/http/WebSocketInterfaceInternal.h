#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocketInterface.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class WebSocketInterface; }
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class WebSocketInterfaceInternal : public ::Bedrock::Http::WebSocketInterface {
public:
    // prevent constructor by default
    WebSocketInterfaceInternal& operator=(WebSocketInterfaceInternal const&);
    WebSocketInterfaceInternal(WebSocketInterfaceInternal const&);
    WebSocketInterfaceInternal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketInterfaceInternal() = default;

    // vIndex: 1
    virtual long
    connect(char const*, char const*, gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::not_null<struct XAsyncBlock*>, struct HC_PERFORM_ENV*);

    // vIndex: 2
    virtual long
        sendMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, std::string_view, gsl::not_null<struct XAsyncBlock*>);

    // vIndex: 3
    virtual long
        sendBinaryMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::span<uchar const>, gsl::not_null<struct XAsyncBlock*>);

    // vIndex: 4
    virtual long disconnect(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*> websocket, ::HCWebSocketCloseStatus status);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI long
    connect$(char const*, char const*, gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::not_null<struct XAsyncBlock*>, struct HC_PERFORM_ENV*);

    MCAPI long disconnect$(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*> websocket, ::HCWebSocketCloseStatus status);

    MCAPI long
        sendBinaryMessage$(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::span<uchar const>, gsl::not_null<struct XAsyncBlock*>);

    MCAPI long
        sendMessage$(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, std::string_view, gsl::not_null<struct XAsyncBlock*>);

    // NOLINTEND
};

}; // namespace Bedrock::Http
