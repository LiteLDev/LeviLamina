#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/WebSocketInterface.h"
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class WebSocketInterfaceInternal : public ::Bedrock::Http::WebSocketInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketInterfaceInternal() /*override*/ = default;

    // vIndex: 1
    virtual HRESULT
    connect(char const*, char const*, ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*) /*override*/
        ;

    // vIndex: 2
    virtual HRESULT
        sendMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::std::string_view, ::gsl::not_null<::XAsyncBlock*>) /*override*/
        ;

    // vIndex: 3
    virtual HRESULT
        sendBinaryMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::gsl::span<uchar const>, ::gsl::not_null<::XAsyncBlock*>) /*override*/
        ;

    // vIndex: 4
    virtual HRESULT
    disconnect(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*> websocket, ::HCWebSocketCloseStatus status) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI HRESULT
    $connect(char const*, char const*, ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*);

    MCNAPI HRESULT
        $sendMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::std::string_view, ::gsl::not_null<::XAsyncBlock*>);

    MCNAPI HRESULT
        $sendBinaryMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::gsl::span<uchar const>, ::gsl::not_null<::XAsyncBlock*>);

    MCNAPI HRESULT $disconnect(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*> websocket, ::HCWebSocketCloseStatus status);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
