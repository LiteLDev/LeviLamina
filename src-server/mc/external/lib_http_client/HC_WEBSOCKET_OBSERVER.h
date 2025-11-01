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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf02763;
    ::ll::UntypedStorage<4, 4>  mUnk28b393;
    ::ll::UntypedStorage<8, 8>  mUnk9debff;
    ::ll::UntypedStorage<8, 8>  mUnkbf23cf;
    ::ll::UntypedStorage<8, 8>  mUnk831388;
    ::ll::UntypedStorage<8, 8>  mUnk677a54;
    ::ll::UntypedStorage<8, 8>  mUnk2e3ecb;
    ::ll::UntypedStorage<4, 4>  mUnk3722c0;
    // NOLINTEND

public:
    // prevent constructor by default
    HC_WEBSOCKET_OBSERVER& operator=(HC_WEBSOCKET_OBSERVER const&);
    HC_WEBSOCKET_OBSERVER(HC_WEBSOCKET_OBSERVER const&);
    HC_WEBSOCKET_OBSERVER();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HC_WEBSOCKET_OBSERVER() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int AddRef();

    MCNAPI int Release();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void BinaryMessageFragmentFunc(
        ::HC_WEBSOCKET_OBSERVER* internalHandle,
        uchar const*             payloadBytes,
        uint                     payloadSize,
        bool                     isLastFragment,
        void*                    context
    );

    MCNAPI static void
    BinaryMessageFunc(::HC_WEBSOCKET_OBSERVER* internalHandle, uchar const* bytes, uint payloadSize, void* context);

    MCNAPI static void
    CloseFunc(::HC_WEBSOCKET_OBSERVER* internalHandle, ::HCWebSocketCloseStatus status, void* context);

    MCNAPI static ::std::unique_ptr<::HC_WEBSOCKET_OBSERVER, ::xbox::httpclient::ObserverDeleter> Initialize(
        ::std::shared_ptr<::xbox::httpclient::WebSocket> websocket,
        void (*messageFunc)(::HC_WEBSOCKET_OBSERVER*, char const*, void*),
        void (*binaryMessageFunc)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, void*),
        void (*binaryFragmentFunc)(::HC_WEBSOCKET_OBSERVER*, uchar const*, uint, bool, void*),
        void (*closeFunc)(::HC_WEBSOCKET_OBSERVER*, ::HCWebSocketCloseStatus, void*),
        void* callbackContext
    );

    MCNAPI static void MessageFunc(::HC_WEBSOCKET_OBSERVER* internalHandle, char const* message, void* context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
