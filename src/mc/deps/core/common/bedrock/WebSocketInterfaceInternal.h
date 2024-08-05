#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/WebSocketInterface.h"
#include "mc/network/HCWebSocketCloseStatus.h"

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
    virtual long connect(
        char const* uri,
        char const*,
        gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>,
        gsl::not_null<struct XAsyncBlock*>,
        struct HC_PERFORM_ENV* env
    );

    // vIndex: 2
    virtual long
        sendMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, std::string_view, gsl::not_null<struct XAsyncBlock*>);

    // vIndex: 3
    virtual long
        sendBinaryMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::span<uchar const>, gsl::not_null<struct XAsyncBlock*>);

    // vIndex: 4
    virtual long disconnect(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus status);

    // NOLINTEND
};

}; // namespace Bedrock::Http
