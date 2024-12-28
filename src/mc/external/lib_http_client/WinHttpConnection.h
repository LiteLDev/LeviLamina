#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Result.h"
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/proxy_type.h"

// auto generated forward declare list
// clang-format off
struct HC_CALL;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
struct XAsyncProviderData;
namespace xbox::httpclient { struct WinHttpCallbackContext; }
namespace xbox::httpclient { struct XPlatSecurityInformation; }
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
    // member functions
    // NOLINTBEGIN
    MCAPI long Close(::std::function<void()>);

    MCAPI long HttpCallPerformAsync(::XAsyncBlock*);

    MCAPI long Initialize();

    MCAPI void SendRequest();

    MCAPI void StartWinHttpClose();

    MCAPI long WebSocketConnectAsync(::XAsyncBlock*);

    MCAPI long WebSocketDisconnect(::HCWebSocketCloseStatus);

    MCAPI long WebSocketReadAsync();

    MCAPI long WebSocketReadComplete(bool, bool);

    MCAPI void WebSocketSendMessage(::xbox::httpclient::WinHttpConnection::WebSocketSendContext const&);

    MCAPI long WebSocketSendMessageAsync(::XAsyncBlock*, char const*);

    MCAPI long WebSocketSendMessageAsync(::XAsyncBlock*, uchar const*, uint64, ::_WINHTTP_WEB_SOCKET_BUFFER_TYPE);

    MCAPI void complete_task(long, uint);

    MCAPI void on_websocket_disconnected(ushort);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Result<::std::shared_ptr<::xbox::httpclient::WinHttpConnection>>
    Initialize(void*, ::HC_CALL*, ::xbox::httpclient::proxy_type, ::xbox::httpclient::XPlatSecurityInformation&&);

    MCAPI static ::Result<::std::shared_ptr<::xbox::httpclient::WinHttpConnection>>
    Initialize(void*, ::HC_WEBSOCKET_OBSERVER*, char const*, char const*, ::xbox::httpclient::proxy_type, ::xbox::httpclient::XPlatSecurityInformation&&);

    MCAPI static long WebSocketConnectProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static long WebSocketSendProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCAPI static void _multiple_segment_write_data(::xbox::httpclient::WinHttpConnection*);

    MCAPI static void callback_status_headers_available(void*, ::xbox::httpclient::WinHttpConnection*, void*);

    MCAPI static void callback_status_request_error(void*, ::xbox::httpclient::WinHttpConnection*, void*);

    MCAPI static void callback_websocket_status_headers_available(void*, ::xbox::httpclient::WinHttpCallbackContext*);

    MCAPI static void completion_callback(void*, uint64, ulong, void*, ulong);

    MCAPI static long flush_response_buffer(::xbox::httpclient::WinHttpConnection*);

    MCAPI static void parse_headers_string(::HC_CALL*, wchar_t*);

    MCAPI static uint parse_status_code(::HC_CALL*, void*, ::xbox::httpclient::WinHttpConnection*);

    MCAPI static void read_next_response_chunk(::xbox::httpclient::WinHttpConnection*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
