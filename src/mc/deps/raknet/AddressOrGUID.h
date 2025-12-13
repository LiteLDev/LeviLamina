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

public:
    AddressOrGUID()                                = default;
    AddressOrGUID(AddressOrGUID const&)            = default;
    AddressOrGUID& operator=(AddressOrGUID const&) = default;
    AddressOrGUID(::RakNet::SystemAddress const& input) : rakNetGuid{-1, -1} { systemAddress = input; }
    AddressOrGUID(::RakNet::RakNetGUID const& input) : rakNetGuid(input), systemAddress{} {}

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool IsUndefined() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RakNet::AddressOrGUID const& input);

    MCAPI void* $ctor(::RakNet::RakNetGUID const& input);

    MCAPI void* $ctor(::RakNet::SystemAddress const& input);
    // NOLINTEND
};

} // namespace RakNet
