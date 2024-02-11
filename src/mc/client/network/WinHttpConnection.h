#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/proxy_type.h"
#include "mc/common/wrapper/Result.h"
#include "mc/network/HCWebSocketCloseStatus.h"
#include "mc/network/XAsyncOp.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { struct WinHttpCallbackContext; }
namespace xbox::httpclient { struct XPlatSecurityInformation; }
struct HC_CALL;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
struct XAsyncProviderData;
// clang-format on

namespace xbox::httpclient {

class WinHttpConnection {
public:
    // WinHttpConnection inner types declare
    // clang-format off
    struct WebSocketSendContext;
    // clang-format on

    // WinHttpConnection inner types define
    struct WebSocketSendContext {
    public:
        // prevent constructor by default
        WebSocketSendContext& operator=(WebSocketSendContext const&);
        WebSocketSendContext(WebSocketSendContext const&);
        WebSocketSendContext();
    };

public:
    // prevent constructor by default
    WinHttpConnection& operator=(WinHttpConnection const&);
    WinHttpConnection(WinHttpConnection const&);
    WinHttpConnection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WinHttpConnection@httpclient@xbox@@UEAA@XZ
    virtual ~WinHttpConnection();

    // symbol: ?Close@WinHttpConnection@httpclient@xbox@@QEAAJV?$function@$$A6AXXZ@std@@@Z
    MCAPI long Close(std::function<void()>);

    // symbol: ?HttpCallPerformAsync@WinHttpConnection@httpclient@xbox@@QEAAJPEAUXAsyncBlock@@@Z
    MCAPI long HttpCallPerformAsync(struct XAsyncBlock*);

    // symbol: ?WebSocketConnectAsync@WinHttpConnection@httpclient@xbox@@QEAAJPEAUXAsyncBlock@@@Z
    MCAPI long WebSocketConnectAsync(struct XAsyncBlock*);

    // symbol: ?WebSocketDisconnect@WinHttpConnection@httpclient@xbox@@QEAAJW4HCWebSocketCloseStatus@@@Z
    MCAPI long WebSocketDisconnect(::HCWebSocketCloseStatus);

    // symbol: ?WebSocketSendMessageAsync@WinHttpConnection@httpclient@xbox@@QEAAJPEAUXAsyncBlock@@PEBD@Z
    MCAPI long WebSocketSendMessageAsync(struct XAsyncBlock*, char const*);

    // symbol:
    // ?WebSocketSendMessageAsync@WinHttpConnection@httpclient@xbox@@QEAAJPEAUXAsyncBlock@@PEBE_KW4_WINHTTP_WEB_SOCKET_BUFFER_TYPE@@@Z
    MCAPI long
    WebSocketSendMessageAsync(struct XAsyncBlock*, uchar const*, uint64, enum class _WINHTTP_WEB_SOCKET_BUFFER_TYPE);

    // symbol:
    // ?Initialize@WinHttpConnection@httpclient@xbox@@SA?AV?$Result@V?$shared_ptr@VWinHttpConnection@httpclient@xbox@@@std@@@@PEAXPEAUHC_CALL@@W4proxy_type@23@$$QEAUXPlatSecurityInformation@23@@Z
    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WinHttpConnection>>
    Initialize(void*, struct HC_CALL*, ::xbox::httpclient::proxy_type, struct xbox::httpclient::XPlatSecurityInformation&&);

    // symbol:
    // ?Initialize@WinHttpConnection@httpclient@xbox@@SA?AV?$Result@V?$shared_ptr@VWinHttpConnection@httpclient@xbox@@@std@@@@PEAXPEAUHC_WEBSOCKET_OBSERVER@@PEBD2W4proxy_type@23@$$QEAUXPlatSecurityInformation@23@@Z
    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WinHttpConnection>>
    Initialize(void*, struct HC_WEBSOCKET_OBSERVER*, char const*, char const*, ::xbox::httpclient::proxy_type, struct xbox::httpclient::XPlatSecurityInformation&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Initialize@WinHttpConnection@httpclient@xbox@@AEAAJXZ
    MCAPI long Initialize();

    // symbol: ?SendRequest@WinHttpConnection@httpclient@xbox@@AEAAXXZ
    MCAPI void SendRequest();

    // symbol: ?StartWinHttpClose@WinHttpConnection@httpclient@xbox@@AEAAXXZ
    MCAPI void StartWinHttpClose();

    // symbol: ?WebSocketReadAsync@WinHttpConnection@httpclient@xbox@@AEAAJXZ
    MCAPI long WebSocketReadAsync();

    // symbol: ?WebSocketReadComplete@WinHttpConnection@httpclient@xbox@@AEAAJ_N0@Z
    MCAPI long WebSocketReadComplete(bool, bool);

    // symbol: ?WebSocketSendMessage@WinHttpConnection@httpclient@xbox@@AEAAXAEBUWebSocketSendContext@123@@Z
    MCAPI void WebSocketSendMessage(struct xbox::httpclient::WinHttpConnection::WebSocketSendContext const&);

    // symbol: ?complete_task@WinHttpConnection@httpclient@xbox@@AEAAXJI@Z
    MCAPI void complete_task(long, uint);

    // symbol: ?on_websocket_disconnected@WinHttpConnection@httpclient@xbox@@AEAAXG@Z
    MCAPI void on_websocket_disconnected(ushort);

    // symbol: ?WebSocketConnectProvider@WinHttpConnection@httpclient@xbox@@CAJW4XAsyncOp@@PEBUXAsyncProviderData@@@Z
    MCAPI static long WebSocketConnectProvider(::XAsyncOp, struct XAsyncProviderData const*);

    // symbol: ?WebSocketSendProvider@WinHttpConnection@httpclient@xbox@@CAJW4XAsyncOp@@PEBUXAsyncProviderData@@@Z
    MCAPI static long WebSocketSendProvider(::XAsyncOp, struct XAsyncProviderData const*);

    // symbol: ?_multiple_segment_write_data@WinHttpConnection@httpclient@xbox@@CAXPEAV123@@Z
    MCAPI static void _multiple_segment_write_data(class xbox::httpclient::WinHttpConnection*);

    // symbol: ?callback_status_headers_available@WinHttpConnection@httpclient@xbox@@CAXPEAXPEAV123@0@Z
    MCAPI static void callback_status_headers_available(void*, class xbox::httpclient::WinHttpConnection*, void*);

    // symbol: ?callback_status_request_error@WinHttpConnection@httpclient@xbox@@CAXPEAXPEAV123@0@Z
    MCAPI static void callback_status_request_error(void*, class xbox::httpclient::WinHttpConnection*, void*);

    // symbol:
    // ?callback_websocket_status_headers_available@WinHttpConnection@httpclient@xbox@@CAXPEAXPEAUWinHttpCallbackContext@23@@Z
    MCAPI static void
    callback_websocket_status_headers_available(void*, struct xbox::httpclient::WinHttpCallbackContext*);

    // symbol: ?completion_callback@WinHttpConnection@httpclient@xbox@@CAXPEAX_KK0K@Z
    MCAPI static void completion_callback(void*, uint64, ulong, void*, ulong);

    // symbol: ?flush_response_buffer@WinHttpConnection@httpclient@xbox@@CAJPEAV123@@Z
    MCAPI static long flush_response_buffer(class xbox::httpclient::WinHttpConnection*);

    // symbol: ?parse_headers_string@WinHttpConnection@httpclient@xbox@@CAXPEAUHC_CALL@@PEA_W@Z
    MCAPI static void parse_headers_string(struct HC_CALL*, wchar_t*);

    // symbol: ?parse_status_code@WinHttpConnection@httpclient@xbox@@CAIPEAUHC_CALL@@PEAXPEAV123@@Z
    MCAPI static uint parse_status_code(struct HC_CALL*, void*, class xbox::httpclient::WinHttpConnection*);

    // symbol: ?read_next_response_chunk@WinHttpConnection@httpclient@xbox@@CAXPEAV123@K@Z
    MCAPI static void read_next_response_chunk(class xbox::httpclient::WinHttpConnection*, ulong);

    // NOLINTEND
};

}; // namespace xbox::httpclient
