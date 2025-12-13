#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet::SignalingEvents { struct MessageReceived; }
// clang-format on

namespace NetherNet {

struct ISignalingEventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISignalingEventHandler() = default;

    virtual void OnSignalingEvent(::NetherNet::SignalingEvents::MessageReceived const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
