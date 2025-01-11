#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::SignalingEvents { struct ErrorReceived; }
namespace NetherNet::SignalingEvents { struct MessageAccepted; }
namespace NetherNet::SignalingEvents { struct MessageDelivered; }
namespace NetherNet::SignalingEvents { struct MessageReceived; }
namespace NetherNet::SignalingEvents { struct MessageSent; }
namespace NetherNet::SignalingEvents { struct PingSent; }
namespace NetherNet::SignalingEvents { struct TurnAuthReceived; }
// clang-format on

namespace NetherNet {

struct ISignalingEventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISignalingEventHandler() = default;

    // vIndex: 7
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageSent const&);

    // vIndex: 6
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const&);

    // vIndex: 5
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::PingSent const&);

    // vIndex: 4
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageAccepted const&);

    // vIndex: 3
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageDelivered const&);

    // vIndex: 2
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::TurnAuthReceived const&);

    // vIndex: 1
    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::ErrorReceived const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageSent const&);

    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const&);

    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::PingSent const&);

    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageAccepted const&);

    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::MessageDelivered const&);

    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::TurnAuthReceived const&);

    MCFOLD void $OnSignalingEvent(::NetherNet::SignalingEvents::ErrorReceived const&);
    // NOLINTEND
};

} // namespace NetherNet
