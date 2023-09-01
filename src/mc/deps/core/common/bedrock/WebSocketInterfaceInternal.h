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
    WebSocketInterfaceInternal& operator=(WebSocketInterfaceInternal const&) = delete;
    WebSocketInterfaceInternal(WebSocketInterfaceInternal const&)            = delete;
    WebSocketInterfaceInternal()                                             = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ?connect@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJPEBD0V?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@V?$not_null@PEAUXAsyncBlock@@@5@PEAUHC_PERFORM_ENV@@@Z
    MCVAPI long
    connect(char const*, char const*, gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::not_null<struct XAsyncBlock*>, struct HC_PERFORM_ENV*);

    // symbol:
    // ?disconnect@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJV?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@W4HCWebSocketCloseStatus@@@Z
    MCVAPI long disconnect(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus);

    // symbol:
    // ?sendBinaryMessage@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJV?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@V?$span@$$CBE$0?0@5@V?$not_null@PEAUXAsyncBlock@@@5@@Z
    MCVAPI long
        sendBinaryMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, gsl::span<uchar const>, gsl::not_null<struct XAsyncBlock*>);

    // symbol:
    // ?sendMessage@WebSocketInterfaceInternal@Http@Bedrock@@UEAAJV?$not_null@PEAUHC_WEBSOCKET_OBSERVER@@@gsl@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$not_null@PEAUXAsyncBlock@@@5@@Z
    MCVAPI long
        sendMessage(gsl::not_null<struct HC_WEBSOCKET_OBSERVER*>, std::string_view, gsl::not_null<struct XAsyncBlock*>);

    // symbol: ??1WebSocketInterfaceInternal@Http@Bedrock@@UEAA@XZ
    MCVAPI ~WebSocketInterfaceInternal();

    // NOLINTEND
};

}; // namespace Bedrock::Http
