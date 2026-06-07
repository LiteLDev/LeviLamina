#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

namespace RakNet {

struct AddressOrGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     rakNetGuid;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    // NOLINTEND
};

} // namespace RakNet
