#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/Result.h"
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
    struct WebSocketSendContext {};

public:
    // prevent constructor by default
    WinHttpConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Close(::std::function<void()>);

    MCNAPI long HttpCallPerformAsync(::XAsyncBlock*);

    MCNAPI long Initialize();

    MCNAPI void SendRequest();

    MCNAPI void StartWinHttpClose();

    MCNAPI long WebSocketConnectAsync(::XAsyncBlock*);

    MCNAPI long WebSocketDisconnect(::HCWebSocketCloseStatus);

    MCNAPI long WebSocketReadAsync();

    MCNAPI long WebSocketReadComplete(bool, bool);

    MCNAPI void WebSocketSendMessage(::xbox::httpclient::WinHttpConnection::WebSocketSendContext const&);

    MCNAPI long WebSocketSendMessageAsync(::XAsyncBlock*, char const*);

    MCNAPI long WebSocketSendMessageAsync(::XAsyncBlock*, uchar const*, uint64, ::_WINHTTP_WEB_SOCKET_BUFFER_TYPE);

    MCNAPI WinHttpConnection(
        void*,
        ::HC_CALL*,
        ::xbox::httpclient::proxy_type,
        ::xbox::httpclient::XPlatSecurityInformation&&
    );

    MCNAPI void complete_task(long, uint);

    MCNAPI void on_websocket_disconnected(ushort);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::xbox::httpclient::Result<::std::shared_ptr<::xbox::httpclient::WinHttpConnection>>
    Initialize(void*, ::HC_CALL*, ::xbox::httpclient::proxy_type, ::xbox::httpclient::XPlatSecurityInformation&&);

    MCNAPI static ::xbox::httpclient::Result<::std::shared_ptr<::xbox::httpclient::WinHttpConnection>> Initialize(
        void*,
        ::HC_WEBSOCKET_OBSERVER*,
        char const*,
        char const*,
        ::xbox::httpclient::proxy_type,
        ::xbox::httpclient::XPlatSecurityInformation&&
    );

    MCNAPI static long WebSocketConnectProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static long WebSocketSendProvider(::XAsyncOp, ::XAsyncProviderData const*);

    MCNAPI static void _multiple_segment_write_data(::xbox::httpclient::WinHttpConnection*);

    MCNAPI static void callback_status_data_available(void*, ::xbox::httpclient::WinHttpConnection*, void*);

    MCNAPI static void callback_status_headers_available(void*, ::xbox::httpclient::WinHttpConnection*, void*);

    MCNAPI static void callback_status_request_error(void*, ::xbox::httpclient::WinHttpConnection*, void*);

    MCNAPI static void callback_websocket_status_headers_available(void*, ::xbox::httpclient::WinHttpCallbackContext*);

    MCNAPI static void completion_callback(void*, uint64, ulong, void*, ulong);

    MCNAPI static long flush_response_buffer(::xbox::httpclient::WinHttpConnection*);

    MCNAPI static void parse_headers_string(::HC_CALL*, wchar_t*);

    MCNAPI static uint parse_status_code(::HC_CALL*, void*, ::xbox::httpclient::WinHttpConnection*);

    MCNAPI static void read_next_response_chunk(::xbox::httpclient::WinHttpConnection*, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(void*, ::HC_CALL*, ::xbox::httpclient::proxy_type, ::xbox::httpclient::XPlatSecurityInformation&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
