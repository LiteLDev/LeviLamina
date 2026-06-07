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
    ::RakNet::RakNetGUID     rakNetGuid;
    ::RakNet::SystemAddress  systemAddress;
    // NOLINTEND

public:
    AddressOrGUID()                                = default;
    AddressOrGUID(AddressOrGUID const&)            = default;
    AddressOrGUID& operator=(AddressOrGUID const&) = default;
    AddressOrGUID(::RakNet::SystemAddress const& input) : rakNetGuid{-1, -1} { systemAddress = input; }
    AddressOrGUID(::RakNet::RakNetGUID const& input) : rakNetGuid(input), systemAddress{} {}

} // namespace RakNet
}
