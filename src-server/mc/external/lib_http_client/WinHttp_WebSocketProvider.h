#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/IWebSocketProvider.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
namespace xbox::httpclient { class WinHttpProvider; }
// clang-format on

namespace xbox::httpclient {

class WinHttp_WebSocketProvider : public ::xbox::httpclient::IWebSocketProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk336ab3;
    // NOLINTEND

public:
    // prevent constructor by default
    WinHttp_WebSocketProvider& operator=(WinHttp_WebSocketProvider const&);
    WinHttp_WebSocketProvider(WinHttp_WebSocketProvider const&);
    WinHttp_WebSocketProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual HRESULT ConnectAsync(::http_string const& uri, ::http_string const& subprotocol, ::HC_WEBSOCKET_OBSERVER* websocketHandle, ::XAsyncBlock* async) /*override*/;

    // vIndex: 2
    virtual HRESULT SendAsync(::HC_WEBSOCKET_OBSERVER* websocketHandle, char const* message, ::XAsyncBlock* async) /*override*/;

    // vIndex: 3
    virtual HRESULT SendBinaryAsync(::HC_WEBSOCKET_OBSERVER* websocketHandle, uchar const* payloadBytes, uint payloadSize, ::XAsyncBlock* asyncBlock) /*override*/;

    // vIndex: 4
    virtual HRESULT Disconnect(::HC_WEBSOCKET_OBSERVER* websocketHandle, ::HCWebSocketCloseStatus closeStatus) /*override*/;

    // vIndex: 0
    virtual ~WinHttp_WebSocketProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WinHttp_WebSocketProvider(::std::shared_ptr<::xbox::httpclient::WinHttpProvider> provider);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::xbox::httpclient::WinHttpProvider> provider);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI HRESULT $ConnectAsync(::http_string const& uri, ::http_string const& subprotocol, ::HC_WEBSOCKET_OBSERVER* websocketHandle, ::XAsyncBlock* async);

    MCNAPI HRESULT $SendAsync(::HC_WEBSOCKET_OBSERVER* websocketHandle, char const* message, ::XAsyncBlock* async);

    MCNAPI HRESULT $SendBinaryAsync(::HC_WEBSOCKET_OBSERVER* websocketHandle, uchar const* payloadBytes, uint payloadSize, ::XAsyncBlock* asyncBlock);

    MCNAPI HRESULT $Disconnect(::HC_WEBSOCKET_OBSERVER* websocketHandle, ::HCWebSocketCloseStatus closeStatus);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
