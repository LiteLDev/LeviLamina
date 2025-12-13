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
// clang-format on

namespace xbox::httpclient {

class ExternalWebSocketProvider : public ::xbox::httpclient::IWebSocketProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke33a1c;
    ::ll::UntypedStorage<8, 8> mUnk83c5a7;
    ::ll::UntypedStorage<8, 8> mUnk19b95b;
    ::ll::UntypedStorage<8, 8> mUnk9f632c;
    ::ll::UntypedStorage<8, 8> mUnkd5d456;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalWebSocketProvider& operator=(ExternalWebSocketProvider const&);
    ExternalWebSocketProvider(ExternalWebSocketProvider const&);
    ExternalWebSocketProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual HRESULT ConnectAsync(
        ::http_string const&     uri,
        ::http_string const&     subprotocol,
        ::HC_WEBSOCKET_OBSERVER* websocketHandle,
        ::XAsyncBlock*           async
    ) /*override*/;

    // vIndex: 2
    virtual HRESULT
    SendAsync(::HC_WEBSOCKET_OBSERVER* websocketHandle, char const* message, ::XAsyncBlock* async) /*override*/;

    // vIndex: 3
    virtual HRESULT SendBinaryAsync(
        ::HC_WEBSOCKET_OBSERVER* websocketHandle,
        uchar const*             payloadBytes,
        uint                     payloadSize,
        ::XAsyncBlock*           async
    ) /*override*/;

    // vIndex: 4
    virtual HRESULT
    Disconnect(::HC_WEBSOCKET_OBSERVER* websocketHandle, ::HCWebSocketCloseStatus closeStatus) /*override*/;

    // vIndex: 0
    virtual ~ExternalWebSocketProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool HasCallbacks() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::xbox::httpclient::ExternalWebSocketProvider& Get();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI HRESULT $ConnectAsync(
        ::http_string const&     uri,
        ::http_string const&     subprotocol,
        ::HC_WEBSOCKET_OBSERVER* websocketHandle,
        ::XAsyncBlock*           async
    );

    MCNAPI HRESULT $SendAsync(::HC_WEBSOCKET_OBSERVER* websocketHandle, char const* message, ::XAsyncBlock* async);

    MCNAPI HRESULT $SendBinaryAsync(
        ::HC_WEBSOCKET_OBSERVER* websocketHandle,
        uchar const*             payloadBytes,
        uint                     payloadSize,
        ::XAsyncBlock*           async
    );

    MCNAPI HRESULT $Disconnect(::HC_WEBSOCKET_OBSERVER* websocketHandle, ::HCWebSocketCloseStatus closeStatus);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace xbox::httpclient
