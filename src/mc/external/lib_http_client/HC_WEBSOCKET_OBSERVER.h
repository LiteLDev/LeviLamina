#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

// auto generated forward declare list
// clang-format off
namespace xbox::httpclient { class WebSocket; }
namespace xbox::httpclient { struct ObserverDeleter; }
// clang-format on

struct HC_WEBSOCKET_OBSERVER {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int AddRef();

    MCNAPI int Release();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void BinaryMessageFragmentFunc(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*);

    MCNAPI static void BinaryMessageFunc(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*);

    MCNAPI static void CloseFunc(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*);

    MCNAPI static ::std::unique_ptr<::HC_WEBSOCKET_OBSERVER, ::xbox::httpclient::ObserverDeleter> Initialize(
        ::std::shared_ptr<::xbox::httpclient::WebSocket>,
        void (*)(::HC_WEBSOCKET_OBSERVER*, char const*, void*),
        void (*)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*),
        void (*)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*),
        void (*)(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*),
        void*
    );

    MCNAPI static void MessageFunc(::HC_WEBSOCKET_OBSERVER*, char const*, void*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
