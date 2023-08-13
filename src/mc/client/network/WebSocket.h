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
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0ConnectContext\@WebSocket\@httpclient\@xbox\@\@QEAA\@V?$shared_ptr\@VWebSocket\@httpclient\@xbox\@\@\@std\@\@PEAUXAsyncBlock\@\@\@Z
         */
        MCAPI ConnectContext(std::shared_ptr<class xbox::httpclient::WebSocket>, struct XAsyncBlock*);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&) = delete;
    WebSocket(WebSocket const&)            = delete;
    WebSocket()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?ConnectAsync\@WebSocket\@httpclient\@xbox\@\@QEAAJ$$QEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@0PEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long
    ConnectAsync(std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>&&, std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>&&, struct XAsyncBlock*);
    /**
     * @symbol ?Disconnect\@WebSocket\@httpclient\@xbox\@\@QEAAJXZ
     */
    MCAPI long Disconnect();
    /**
     * @symbol
     * ?Headers\@WebSocket\@httpclient\@xbox\@\@QEBAAEBV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@UHeaderCompare\@httpclient\@xbox\@\@V?$http_stl_allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@V12\@\@std\@\@\@\@\@std\@\@XZ
     */
    MCAPI std::map<
        std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>,
        std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>,
        struct xbox::httpclient::HeaderCompare,
        class http_stl_allocator<std::pair<
            std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>> const,
            std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>>>>> const&
    Headers() const;
    /**
     * @symbol ?MaxReceiveBufferSize\@WebSocket\@httpclient\@xbox\@\@QEBA_KXZ
     */
    MCAPI uint64_t MaxReceiveBufferSize() const;
    /**
     * @symbol ?ProxyDecryptsHttps\@WebSocket\@httpclient\@xbox\@\@QEBA?B_NXZ
     */
    MCAPI bool const ProxyDecryptsHttps() const;
    /**
     * @symbol
     * ?ProxyUri\@WebSocket\@httpclient\@xbox\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$http_stl_allocator\@D\@\@\@std\@\@XZ
     */
    MCAPI std::basic_string<char, std::char_traits<char>, class http_stl_allocator<char>> const& ProxyUri() const;
    /**
     * @symbol
     * ?RegisterEventCallbacks\@WebSocket\@httpclient\@xbox\@\@QEAAIP6AXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBDPEAX\@ZP6AX0PEBEI2\@ZP6AX04I_N2\@ZP6AX0W4HCWebSocketCloseStatus\@\@2\@Z2\@Z
     */
    MCAPI unsigned int
    RegisterEventCallbacks(void(__cdecl*)(struct HC_WEBSOCKET_OBSERVER*, char const*, void*), void(__cdecl*)(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, void*), void(__cdecl*)(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, bool, void*), void(__cdecl*)(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*), void*);
    /**
     * @symbol ?SendAsync\@WebSocket\@httpclient\@xbox\@\@QEAAJPEBDPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI long SendAsync(char const*, struct XAsyncBlock*);
    /**
     * @symbol ?BinaryMessageFragmentFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBEI_NPEAX\@Z
     */
    MCAPI static void
    BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, bool, void*);
    /**
     * @symbol ?BinaryMessageFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBEIPEAX\@Z
     */
    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER*, unsigned char const*, unsigned int, void*);
    /**
     * @symbol
     * ?CloseFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@W4HCWebSocketCloseStatus\@\@PEAX\@Z
     */
    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER*, enum class HCWebSocketCloseStatus, void*);
    /**
     * @symbol ?MessageFunc\@WebSocket\@httpclient\@xbox\@\@SAXPEAUHC_WEBSOCKET_OBSERVER\@\@PEBDPEAX\@Z
     */
    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER*, char const*, void*);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?ConnectAsyncProvider\@WebSocket\@httpclient\@xbox\@\@CAJW4XAsyncOp\@\@PEBUXAsyncProviderData\@\@\@Z
     */
    MCAPI static long ConnectAsyncProvider(enum class XAsyncOp, struct XAsyncProviderData const*);
    /**
     * @symbol ?ConnectComplete\@WebSocket\@httpclient\@xbox\@\@CAXPEAUXAsyncBlock\@\@\@Z
     */
    MCAPI static void ConnectComplete(struct XAsyncBlock*);
    /**
     * @symbol
     * ?NotifyWebSocketRoutedHandlers\@WebSocket\@httpclient\@xbox\@\@CAXPEAUHC_WEBSOCKET_OBSERVER\@\@_NPEBDPEBE_K\@Z
     */
    MCAPI static void
    NotifyWebSocketRoutedHandlers(struct HC_WEBSOCKET_OBSERVER*, bool, char const*, unsigned char const*, uint64_t);
    // NOLINTEND
};

}; // namespace xbox::httpclient
