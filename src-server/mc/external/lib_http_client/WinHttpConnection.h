#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XAsyncOp.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/Result.h"
#include "mc/external/lib_http_client/hc_websocket_impl.h"
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

class WinHttpConnection : public ::xbox::httpclient::hc_websocket_impl, public ::std::enable_shared_from_this<::xbox::httpclient::WinHttpConnection> {
public:
    // WinHttpConnection inner types declare
    // clang-format off
    struct WebSocketSendContext;
    // clang-format on
    
    // WinHttpConnection inner types define
    struct WebSocketSendContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb79477;
        ::ll::UntypedStorage<8, 8> mUnkd77084;
        ::ll::UntypedStorage<8, 8> mUnkd688bc;
        ::ll::UntypedStorage<8, 24> mUnk9a9621;
        ::ll::UntypedStorage<4, 4> mUnk5c0ccd;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        WebSocketSendContext& operator=(WebSocketSendContext const&);
        WebSocketSendContext(WebSocketSendContext const&);
        WebSocketSendContext();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkabf1e8;
    ::ll::UntypedStorage<8, 8> mUnke8fc8a;
    ::ll::UntypedStorage<8, 8> mUnkadf35b;
    ::ll::UntypedStorage<8, 8> mUnk4c5589;
    ::ll::UntypedStorage<8, 8> mUnkdaac13;
    ::ll::UntypedStorage<8, 232> mUnk4c2598;
    ::ll::UntypedStorage<8, 8> mUnke323b9;
    ::ll::UntypedStorage<4, 4> mUnk814a66;
    ::ll::UntypedStorage<8, 64> mUnkdd2941;
    ::ll::UntypedStorage<4, 4> mUnkb429e1;
    ::ll::UntypedStorage<8, 8> mUnkdc6f9a;
    ::ll::UntypedStorage<8, 8> mUnk88bcfc;
    ::ll::UntypedStorage<8, 8> mUnk69a515;
    ::ll::UntypedStorage<8, 24> mUnk2f1eba;
    ::ll::UntypedStorage<8, 24> mUnkc2ef7f;
    ::ll::UntypedStorage<4, 4> mUnk98c493;
    ::ll::UntypedStorage<8, 40> mUnk4ef05d;
    ::ll::UntypedStorage<8, 56> mUnk29c141;
    ::ll::UntypedStorage<8, 8> mUnkc2b232;
    ::ll::UntypedStorage<8, 32> mUnka5143b;
    ::ll::UntypedStorage<8, 8> mUnk9fcdb0;
    ::ll::UntypedStorage<1, 1> mUnka91dd5;
    ::ll::UntypedStorage<8, 80> mUnk61f178;
    ::ll::UntypedStorage<8, 40> mUnkace10b;
    ::ll::UntypedStorage<8, 16> mUnk2914ad;
    ::ll::UntypedStorage<1, 1> mUnke50504;
    // NOLINTEND

public:
    // prevent constructor by default
    WinHttpConnection& operator=(WinHttpConnection const&);
    WinHttpConnection(WinHttpConnection const&);
    WinHttpConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WinHttpConnection() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Close(::std::function<void()> callback);

    MCNAPI long HttpCallPerformAsync(::XAsyncBlock* async);

    MCNAPI long Initialize();

    MCNAPI void SendRequest();

    MCNAPI void StartWinHttpClose();

    MCNAPI long WebSocketConnectAsync(::XAsyncBlock* async);

    MCNAPI long WebSocketDisconnect(::HCWebSocketCloseStatus closeStatus);

    MCNAPI long WebSocketReadAsync();

    MCNAPI long WebSocketReadComplete(bool binaryMessage, bool endOfMessage);

    MCNAPI void WebSocketSendMessage(::xbox::httpclient::WinHttpConnection::WebSocketSendContext const& sendContext);

    MCNAPI long WebSocketSendMessageAsync(::XAsyncBlock* async, char const* message);

    MCNAPI long WebSocketSendMessageAsync(::XAsyncBlock* async, uchar const* payloadBytes, uint64 payloadSize, ::_WINHTTP_WEB_SOCKET_BUFFER_TYPE payloadType);

    MCNAPI WinHttpConnection(void* hSession, ::HC_CALL* call, ::xbox::httpclient::proxy_type proxyType, ::xbox::httpclient::XPlatSecurityInformation&& securityInformation);

    MCNAPI void complete_task(long translatedHR, uint platformSpecificError);

    MCNAPI void on_websocket_disconnected(ushort closeReason);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::xbox::httpclient::Result<::std::shared_ptr<::xbox::httpclient::WinHttpConnection>> Initialize(void* hSession, ::HC_CALL* call, ::xbox::httpclient::proxy_type proxyType, ::xbox::httpclient::XPlatSecurityInformation&& securityInformation);

    MCNAPI static ::xbox::httpclient::Result<::std::shared_ptr<::xbox::httpclient::WinHttpConnection>> Initialize(void* hSession, ::HC_WEBSOCKET_OBSERVER* webSocket, char const* uri, char const* subprotocol, ::xbox::httpclient::proxy_type proxyType, ::xbox::httpclient::XPlatSecurityInformation&& securityInformation);

    MCNAPI static long WebSocketConnectProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static long WebSocketSendProvider(::XAsyncOp op, ::XAsyncProviderData const* data);

    MCNAPI static void _multiple_segment_write_data(::xbox::httpclient::WinHttpConnection* pRequestContext);

    MCNAPI static void callback_status_data_available(void* hRequestHandle, ::xbox::httpclient::WinHttpConnection* pRequestContext, void* statusInfo);

    MCNAPI static void callback_status_headers_available(void* hRequestHandle, ::xbox::httpclient::WinHttpConnection* pRequestContext, void*);

    MCNAPI static void callback_status_request_error(void* hRequestHandle, ::xbox::httpclient::WinHttpConnection* pRequestContext, void* statusInfo);

    MCNAPI static void callback_websocket_status_headers_available(void* hRequestHandle, ::xbox::httpclient::WinHttpCallbackContext* winHttpContext);

    MCNAPI static void completion_callback(void* hRequestHandle, uint64 context, ulong statusCode, void* statusInfo, ulong statusInfoLength);

    MCNAPI static long flush_response_buffer(::xbox::httpclient::WinHttpConnection* pRequestContext);

    MCNAPI static void parse_headers_string(::HC_CALL* call, wchar_t* headersStr);

    MCNAPI static uint parse_status_code(::HC_CALL* call, void* hRequestHandle, ::xbox::httpclient::WinHttpConnection* pRequestContext);

    MCNAPI static void read_next_response_chunk(::xbox::httpclient::WinHttpConnection* pRequestContext, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(void* hSession, ::HC_CALL* call, ::xbox::httpclient::proxy_type proxyType, ::xbox::httpclient::XPlatSecurityInformation&& securityInformation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
