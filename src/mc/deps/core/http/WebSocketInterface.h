#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
struct HC_PERFORM_ENV;
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace Bedrock::Http {

class WebSocketInterface : public ::Bedrock::ImplBase<::Bedrock::Http::WebSocketInterface> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocketInterface() /*override*/ = default;

    // vIndex: 1
    virtual HRESULT
    connect(char const*, char const*, ::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::gsl::not_null<::XAsyncBlock*>, ::HC_PERFORM_ENV*) = 0;

    // vIndex: 2
    virtual HRESULT
        sendMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::std::string_view, ::gsl::not_null<::XAsyncBlock*>) = 0;

    // vIndex: 3
    virtual HRESULT
        sendBinaryMessage(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::gsl::span<uchar const>, ::gsl::not_null<::XAsyncBlock*>) = 0;

    // vIndex: 4
    virtual HRESULT disconnect(::gsl::not_null<::HC_WEBSOCKET_OBSERVER*>, ::HCWebSocketCloseStatus) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
