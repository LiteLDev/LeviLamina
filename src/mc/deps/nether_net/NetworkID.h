#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/p2p/NetworkID.h"
#include "mc/deps/nether_net/realms/NetworkID.h"

namespace NetherNet {

struct NetworkID
: public ::std::variant<::std::monostate, ::NetherNet::P2P::NetworkID, ::NetherNet::Realms::NetworkID> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string toString() const;
    // NOLINTEND
};

} // namespace NetherNet
