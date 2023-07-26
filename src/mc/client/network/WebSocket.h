#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
enum class HCWebSocketCloseStatus;
enum class XAsyncOp;
namespace xbox::httpclient { struct HeaderCompare; }
struct HC_WEBSOCKET_OBSERVER;
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
        ConnectContext& operator=(ConnectContext const&) = delete;
        ConnectContext(ConnectContext const&)            = delete;
        ConnectContext()                                 = delete;

    public:
        /**
         * @symbol
         * ??0ConnectContext\@WebSocket\@httpclient\@xbox\@\@QEAA\@V?$shared_ptr\@VWebSocket\@httpclient\@xbox\@\@\@std\@\@PEAUXAsyncBlock\@\@\@Z
         */
        MCAPI ConnectContext(class std::shared_ptr<class xbox::httpclient::WebSocket>, struct XAsyncBlock*); // NOLINT
    };

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&) = delete;
    WebSocket(WebSocket const&)            = delete;
    WebSocket()                            = delete;

public:
    /**
     * @symbol
     * ?ConnectAsync\@WebSocket\@httpclient\@xbox\@\@QEAAJ$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@0PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long
    ConnectAsync(class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>&&, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>&&, struct XAsyncBlock*); // NOLINT
    /**
     * @symbol ?Disconnect\@WebSocket\@httpclient\@xbox\@\@QEAAJXZ
     */
    MCAPI long Disconnect(); // NOLINT
    /**
     * @symbol
     * ?Headers\@WebSocket\@httpclient\@xbox\@\@QEBAAEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@UHeaderCompare\@httpclient\@xbox\@\@V?$http_stl_allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@\@std\@\@\@\@\@std\@\@XZ
     */
    MCAPI class std::map<
        class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>,
        class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>,
        struct xbox::httpclient::HeaderCompare,
        class http_stl_allocator<struct std::pair<
            class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const,
            class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>>>> const&
    Headers() const; // NOLINT
    /**
     * @symbol ?MaxReceiveBufferSize\@WebSocket\@httpclient\@xbox\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 MaxReceiveBufferSize() const; // NOLINT
    /**
     * @symbol ?ProxyDecryptsHttps\@WebSocket\@httpclient\@xbox\@\@QEBA?B_NXZ
     */
    MCAPI bool const ProxyDecryptsHttps() const; // NOLINT
    /**
     * @symbol
     * ?ProxyUri\@WebSocket\@httpclient\@xbox\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const&
    ProxyUri() const; // NOLINT
    /**
     * @symbol
     * ?RegisterEventCallbacks\@WebSocket\@httpclient\@xbox\@\@QEAAIP6AXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBDPEAX\@ZP6AX0PEBEI2\@ZP6AX04I_N2\@ZP6AX0W4HCWebSocketCloseStatus\@\@2\@Z2\@Z
     */
    MCAPI unsigned int RegisterEventCallbacks(void (*)(struct HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, bool, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*), void*); // NOLINT
    /**
     * @symbol ?SendAsync\@WebSocket\@httpclient\@xbox\@\@QEAAJPEBDPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long SendAsync(char const*, struct XAsyncBlock*); // NOLINT
    /**
     * @symbol ?BinaryMessageFragmentFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBEI_NPEAX\@Z
     */
    MCAPI static void
    BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, bool, void*); // NOLINT
    /**
     * @symbol ?BinaryMessageFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBEIPEAX\@Z
     */
    MCAPI static void
    BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, void*); // NOLINT
    /**
     * @symbol
     * ?CloseFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*); // NOLINT
    /**
     * @symbol ?MessageFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBDPEAX\@Z
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER*, char const*, void*); // NOLINT

    // private:
    /**
     * @symbol ?ConnectAsyncProvider\@WebSocket\@httpclient\@xbox\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long ConnectAsyncProvider(enum class XAsyncOp, struct XAsyncProviderData const*); // NOLINT
    /**
     * @symbol ?ConnectComplete\@WebSocket\@httpclient\@xbox\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void ConnectComplete(struct XAsyncBlock*); // NOLINT
    /**
     * @symbol
     * ?NotifyWebSocketRoutedHandlers\@WebSocket\@httpclient\@xbox\@\@CAXPEAUHC_WEBSOCKET_OBSERVER\@\@_NPEBDPEBE_K\@Z
     */
    MCAPI static void NotifyWebSocketRoutedHandlers(
        struct HC_WEBSOCKET_OBSERVER*,
        bool,
        char const*,
        unsigned char const*,
        unsigned __int64
    ); // NOLINT

private:
};

}; // namespace xbox::httpclient
