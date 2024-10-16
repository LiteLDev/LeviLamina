#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/proxy_type.h"

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
    // vIndex: 0
    virtual ~WinHttpConnection();

    MCAPI long Close(std::function<void()>);

    MCAPI long HttpCallPerformAsync(struct XAsyncBlock*);

    MCAPI long WebSocketConnectAsync(struct XAsyncBlock*);

    MCAPI long WebSocketDisconnect(::HCWebSocketCloseStatus);

    MCAPI long WebSocketSendMessageAsync(struct XAsyncBlock*, char const*);

    MCAPI long
    WebSocketSendMessageAsync(struct XAsyncBlock*, uchar const*, uint64, enum class _WINHTTP_WEB_SOCKET_BUFFER_TYPE);

    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WinHttpConnection>>
    Initialize(void*, struct HC_CALL*, ::xbox::httpclient::proxy_type, struct xbox::httpclient::XPlatSecurityInformation&&);

    MCAPI static class Result<std::shared_ptr<class xbox::httpclient::WinHttpConnection>>
    Initialize(void*, struct HC_WEBSOCKET_OBSERVER*, char const*, char const*, ::xbox::httpclient::proxy_type, struct xbox::httpclient::XPlatSecurityInformation&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI long Initialize();

    MCAPI void SendRequest();

    MCAPI void StartWinHttpClose();

    MCAPI long WebSocketReadAsync();

    MCAPI long WebSocketReadComplete(bool, bool);

    MCAPI void WebSocketSendMessage(struct xbox::httpclient::WinHttpConnection::WebSocketSendContext const&);

    MCAPI void complete_task(long, uint);

    MCAPI void on_websocket_disconnected(ushort);

    MCAPI static long WebSocketConnectProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static long WebSocketSendProvider(::XAsyncOp, struct XAsyncProviderData const*);

    MCAPI static void _multiple_segment_write_data(class xbox::httpclient::WinHttpConnection*);

    MCAPI static void callback_status_headers_available(void*, class xbox::httpclient::WinHttpConnection*, void*);

    MCAPI static void callback_status_request_error(void*, class xbox::httpclient::WinHttpConnection*, void*);

    MCAPI static void
    callback_websocket_status_headers_available(void*, struct xbox::httpclient::WinHttpCallbackContext*);

    MCAPI static void completion_callback(void*, uint64, ulong, void*, ulong);

    MCAPI static long flush_response_buffer(class xbox::httpclient::WinHttpConnection*);

    MCAPI static void parse_headers_string(struct HC_CALL*, wchar_t*);

    MCAPI static uint parse_status_code(struct HC_CALL*, void*, class xbox::httpclient::WinHttpConnection*);

    MCAPI static void read_next_response_chunk(class xbox::httpclient::WinHttpConnection*, ulong);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace xbox::httpclient
