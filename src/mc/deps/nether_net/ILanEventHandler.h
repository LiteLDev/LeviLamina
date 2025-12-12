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
    virtual ~ILanEventHandler() = default;

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageSent const&);

    virtual void OnLanEvent(::NetherNet::LanEvents::MessageReceived const&);

    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&);

    virtual void OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::MessageSent const&);

#ifdef LL_PLAT_C
    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryRequest const&);

    MCNAPI void $OnLanEvent(::NetherNet::LanEvents::DiscoveryResponse const&);
#endif


    // NOLINTEND
};

} // namespace NetherNet
