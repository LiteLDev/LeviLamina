#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
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

#ifdef LL_PLAT_S
    virtual ::Bedrock::Threading::Async<::NetherNet::ESessionError>
    SendSignal(::NetherNet::NetworkID from, ::NetherNet::NetworkID to, ::std::string const& message) = 0;
#else // LL_PLAT_C
    virtual ::Bedrock::Threading::Async<::NetherNet::ESessionError>
    SendSignal(::NetherNet::NetworkID from, ::NetherNet::NetworkID to, ::std::string const& signal) = 0;
#endif

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) = 0;
    // NOLINTEND
};

} // namespace NetherNet
