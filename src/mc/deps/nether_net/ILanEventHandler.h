#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::LanEvents { struct DiscoveryRequest; }
namespace NetherNet::LanEvents { struct DiscoveryResponse; }
namespace NetherNet::LanEvents { struct MessageReceived; }
namespace NetherNet::LanEvents { struct MessageSent; }
// clang-format on

namespace NetherNet {

struct ILanEventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILanEventHandler() = default;

    // vIndex: 4
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&);

    // vIndex: 3
    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);

    // vIndex: 2
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&);

    // vIndex: 1
    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const&);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&);
    // NOLINTEND
};

} // namespace NetherNet
