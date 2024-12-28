#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryResponsePacket : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mUnk4fea9b;
    ::ll::UntypedStorage<1, 1148> mUnk6b5fed;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryResponsePacket& operator=(DiscoveryResponsePacket const&);
    DiscoveryResponsePacket(DiscoveryResponsePacket const&);
    DiscoveryResponsePacket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string_view ApplicationData() const;

    MCAPI DiscoveryResponsePacket(::NetherNet::NetworkID senderId, ::std::string_view applicationData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::NetworkID senderId, ::std::string_view applicationData);
    // NOLINTEND
};

} // namespace NetherNet
