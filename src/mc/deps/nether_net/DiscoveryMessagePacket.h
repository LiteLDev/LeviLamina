#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/DiscoveryPacket.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

struct DiscoveryMessagePacket : public ::NetherNet::DiscoveryPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk6bec51;
    ::ll::UntypedStorage<4, 4>    mUnk22205e;
    ::ll::UntypedStorage<1, 1140> mUnk9eddc0;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryMessagePacket& operator=(DiscoveryMessagePacket const&);
    DiscoveryMessagePacket(DiscoveryMessagePacket const&);
    DiscoveryMessagePacket();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiscoveryMessagePacket(
        ::NetherNet::NetworkID senderId,
        ::NetherNet::NetworkID recipientId,
        ::std::string_view     message
    );

    MCAPI ::std::string_view MessageData() const;

    MCAPI ::NetherNet::NetworkID RecipientId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NetherNet::NetworkID senderId, ::NetherNet::NetworkID recipientId, ::std::string_view message);
    // NOLINTEND
};

} // namespace NetherNet
