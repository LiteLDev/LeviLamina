#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class ISignalingInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISignalingInterface() = default;

    virtual void
    SendSignal(::NetherNet::NetworkID, ::std::string const&, ::std::function<void(::NetherNet::ESessionError)>&&) = 0;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
