#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

struct AddressOrGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     rakNetGuid;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    // NOLINTEND

public:
    AddressOrGUID() = default;
    AddressOrGUID& operator=(AddressOrGUID const&) = default;
    AddressOrGUID(::RakNet::SystemAddress const& input) : rakNetGuid{-1, -1} { systemAddress = input; }
    AddressOrGUID(::RakNet::RakNetGUID const& input) : rakNetGuid(input), systemAddress{} {}

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AddressOrGUID(::RakNet::AddressOrGUID const& input);

    MCAPI bool IsUndefined() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RakNet::AddressOrGUID const& input);
    // NOLINTEND
};

} // namespace RakNet
