#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Result.h"
#include "mc/network/HCWebSocketCloseStatus.h"
#include "mc/network/XAsyncOp.h"
#include "mc/network/http_stl_allocator.h"

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
        // symbol:
        // ??0ConnectContext@WebSocket@httpclient@xbox@@QEAA@V?$shared_ptr@VWebSocket@httpclient@xbox@@@std@@PEAUXAsyncBlock@@@Z
        MCAPI ConnectContext(std::shared_ptr<class xbox::httpclient::WebSocket>, struct XAsyncBlock*);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);
    WebSocket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WebSocket@httpclient@xbox@@UEAA@XZ
    virtual ~WebSocket() = default;

    // symbol:
    // ?ConnectAsync@WebSocket@httpclient@xbox@@QEAAJ$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@0PEAUXAsyncBlock@@@Z
    MCAPI long ConnectAsync(http_string&&, http_string&&, struct XAsyncBlock*);

    // symbol: ?Disconnect@WebSocket@httpclient@xbox@@QEAAJXZ
    MCAPI long Disconnect();

    // symbol:
    // ?Headers@WebSocket@httpclient@xbox@@QEBAAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@UHeaderCompare@httpclient@xbox@@V?$http_stl_allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@V12@@std@@@@@std@@XZ
    MCAPI std::map<
        http_string,
        http_string,
        struct xbox::httpclient::HeaderCompare,
        class http_stl_allocator<std::pair<http_string const, http_string>>> const&
    Headers() const;

    // symbol: ?MaxReceiveBufferSize@WebSocket@httpclient@xbox@@QEBA_KXZ
    MCAPI uint64 MaxReceiveBufferSize() const;

    // symbol: ?ProxyDecryptsHttps@WebSocket@httpclient@xbox@@QEBA?B_NXZ
    MCAPI bool const ProxyDecryptsHttps() const;

    // symbol:
    // ?ProxyUri@WebSocket@httpclient@xbox@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@XZ
    MCAPI http_string const& ProxyUri() const;

    // symbol:
    // ?RegisterEventCallbacks@WebSocket@httpclient@xbox@@QEAAIP6AXPEAUHC_WEBSOCKET_OBSERVER@@PEBDPEAX@ZP6AX0PEBEI2@ZP6AX04I_N2@ZP6AX0W4HCWebSocketCloseStatus@@2@Z2@Z
    MCAPI uint
    RegisterEventCallbacks(void (*)(struct HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*), void*);

    // symbol: ?SendAsync@WebSocket@httpclient@xbox@@QEAAJPEBDPEAUXAsyncBlock@@@Z
    MCAPI long SendAsync(char const*, struct XAsyncBlock*);

    // symbol:
    // ?SetHeader@WebSocket@httpclient@xbox@@QEAAJ$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@0@Z
    MCAPI long SetHeader(http_string&&, http_string&&);

    // symbol: ?BinaryMessageFragmentFunc@WebSocket@httpclient@xbox@@SAXPEAUHC_WEBSOCKET_OBSERVER@@PEBEI_NPEAX@Z
    MCAPI static void BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*);

    // symbol: ?BinaryMessageFunc@WebSocket@httpclient@xbox@@SAXPEAUHC_WEBSOCKET_OBSERVER@@PEBEIPEAX@Z
    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*);

    // symbol: ?CloseFunc@WebSocket@httpclient@xbox@@SAXPEAUHC_WEBSOCKET_OBSERVER@@W4HCWebSocketCloseStatus@@PEAX@Z
    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    // symbol: ?Initialize@WebSocket@httpclient@xbox@@SA?AV?$Result@V?$shared_ptr@VWebSocket@httpclient@xbox@@@std@@@@XZ
    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WebSocket>> Initialize();

    // symbol: ?MessageFunc@WebSocket@httpclient@xbox@@SAXPEAUHC_WEBSOCKET_OBSERVER@@PEBDPEAX@Z
    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER*, char const*, void*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0WebSocket@httpclient@xbox@@AEAA@_KUWebSocketPerformInfo@@PEAUHC_PERFORM_ENV@@@Z
    MCAPI WebSocket(uint64, struct WebSocketPerformInfo, struct HC_PERFORM_ENV*);

    // symbol: ?ConnectAsyncProvider@WebSocket@httpclient@xbox@@CAJW4XAsyncOp@@PEBUXAsyncProviderData@@@Z
    MCAPI static long ConnectAsyncProvider(::XAsyncOp, struct XAsyncProviderData const*);

    // symbol: ?ConnectComplete@WebSocket@httpclient@xbox@@CAXPEAUXAsyncBlock@@@Z
    MCAPI static void ConnectComplete(struct XAsyncBlock*);

    // symbol: ?NotifyWebSocketRoutedHandlers@WebSocket@httpclient@xbox@@CAXPEAUHC_WEBSOCKET_OBSERVER@@_NPEBDPEBE_K@Z
    MCAPI static void
    NotifyWebSocketRoutedHandlers(struct HC_WEBSOCKET_OBSERVER*, bool, char const*, uchar const*, uint64);

    // NOLINTEND
};

}; // namespace xbox::httpclient
