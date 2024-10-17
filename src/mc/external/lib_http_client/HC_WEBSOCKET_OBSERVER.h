#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"
#include "mc/external/lib_http_client/http_alloc_deleter.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class WebSocket; }
// clang-format on

struct HC_WEBSOCKET_OBSERVER {
public:
    // prevent constructor by default
    HC_WEBSOCKET_OBSERVER& operator=(HC_WEBSOCKET_OBSERVER const&);
    HC_WEBSOCKET_OBSERVER(HC_WEBSOCKET_OBSERVER const&);
    HC_WEBSOCKET_OBSERVER();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HC_WEBSOCKET_OBSERVER() = default;

    MCAPI static std::unique_ptr<struct HC_WEBSOCKET_OBSERVER, struct http_alloc_deleter<struct HC_WEBSOCKET_OBSERVER>> Initialize(std::shared_ptr<class xbox::httpclient::WebSocket>, void (*)(struct HC_WEBSOCKET_OBSERVER*, char const*, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*), void (*)(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*), void*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void BinaryMessageFragmentFunc(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*);

    MCAPI static void BinaryMessageFunc(struct HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*);

    MCAPI static void CloseFunc(struct HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCAPI static void MessageFunc(struct HC_WEBSOCKET_OBSERVER*, char const*, void*);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
