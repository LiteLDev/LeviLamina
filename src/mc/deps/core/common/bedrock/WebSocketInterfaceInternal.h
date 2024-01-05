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
    // vIndex: 0, symbol: __gen_??1WebSocketInterfaceInternal@Http@Bedrock@@UEAA@XZ
    virtual ~WebSocketInterfaceInternal() = default;

    // symbol:
    // ?connect@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJPEBD0V?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@V?$not_null@PEAUXAsyncBlock@@@5@PEAUHC_PERFORM_ENV@@@Z
    MCVAPI long connect(
        char const*                                  uri,
        char const*                                  subProtocol,
        gsl::not_null<struct HC_WEBSOCKET_OBSERVER*> websocket,
        gsl::not_null<struct XAsyncBlock*>           asyncBlock,
        struct HC_PERFORM_ENV*                       env
    );

    // symbol:
    // ?disconnect@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJV?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@W4HCWebSocketCloseStatus@@@Z
    MCVAPI long disconnect(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*> websocket, ::HCWebSocketCloseStatus status);

    // symbol:
    // ?sendBinaryMessage@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJV?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@V?$span@$$CBE$0?0@5@V?$not_null@PEAUXAsyncBlock@@@5@@Z
    MCVAPI long
        sendBinaryMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::span<uchar const>, gsl::not_null<struct XAsyncBlock*>);

    // symbol:
    // ?sendMessage@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJV?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$not_null@PEAUXAsyncBlock@@@5@@Z
    MCVAPI long
        sendMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, std::string_view, gsl::not_null<struct XAsyncBlock*>);

    // NOLINTEND
};

}; // namespace Bedrock::Http
