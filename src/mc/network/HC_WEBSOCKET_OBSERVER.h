#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class WebSocket; }
// clang-format on

struct HC_WEBSOCKET_OBSERVER {

public:
    // prevent constructor by default
    HC_WEBSOCKET_OBSERVER& operator=(HC_WEBSOCKET_OBSERVER const&) = delete;
    HC_WEBSOCKET_OBSERVER(HC_WEBSOCKET_OBSERVER const&)            = delete;
    HC_WEBSOCKET_OBSERVER()                                        = delete;

public:
    /**
     * @symbol
     * ?Initialize\@HC_WEBSOCKET_OBSERVER\@\@SA?AV?$unique_ptr\@UHC_WEBSOCKET_OBSERVER\@\@U?$http_alloc_deleter\@UHC_WEBSOCKET_OBSERVER\@\@\@\@\@std\@\@V?$shared_ptr\@VWebSocket\@httpclient\@xbox\@\@\@3\@P6AXPEAU1\@PEBDPEAX\@ZP6AX1PEBEI3\@ZP6AX15I_N3\@ZP6AX1W4HCWebSocketCloseStatus\@\@3\@Z3\@Z
     */
    MCAPI static class std::unique_ptr<
        struct HC_WEBSOCKET_OBSERVER,
        struct http_alloc_deleter<struct HC_WEBSOCKET_OBSERVER>>
    Initialize(class std::shared_ptr<class xbox::httpclient::WebSocket>, void (*)(struct HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, bool, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*), void*); // NOLINT

    // private:
    /**
     * @symbol ?BinaryMessageFragmentFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@PEBEI_NPEAX\@Z
     */
    MCAPI static void
    BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, bool, void*); // NOLINT
    /**
     * @symbol ?BinaryMessageFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@PEBEIPEAX\@Z
     */
    MCAPI static void
    BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, void*); // NOLINT
    /**
     * @symbol ?CloseFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*); // NOLINT
    /**
     * @symbol ?MessageFunc\@HC_WEBSOCKET_OBSERVER\@\@CAXPEAU1\@PEBDPEAX\@Z
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER*, char const*, void*); // NOLINT
};
