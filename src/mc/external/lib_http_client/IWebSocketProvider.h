#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_stl_allocator.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
// clang-format on

namespace xbox::httpclient {

class IWebSocketProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IWebSocketProvider() = default;

    // vIndex: 1
    virtual HRESULT
    ConnectAsync(::http_string const&, ::http_string const&, ::HC_WEBSOCKET_OBSERVER*, ::XAsyncBlock*) = 0;

    // vIndex: 2
    virtual HRESULT SendAsync(::HC_WEBSOCKET_OBSERVER*, char const*, ::XAsyncBlock*) = 0;

    // vIndex: 3
    virtual HRESULT SendBinaryAsync(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, ::XAsyncBlock*) = 0;

    // vIndex: 4
    virtual HRESULT Disconnect(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace xbox::httpclient
