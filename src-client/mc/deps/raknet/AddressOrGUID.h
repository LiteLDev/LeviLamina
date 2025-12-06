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
    // prevent constructor by default
    AddressOrGUID& operator=(AddressOrGUID const&);
    AddressOrGUID();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AddressOrGUID(::RakNet::RakNetGUID const& input);

    MCAPI explicit AddressOrGUID(::RakNet::SystemAddress const& input);

    MCAPI AddressOrGUID(::RakNet::AddressOrGUID const& input);

    MCAPI bool IsUndefined() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RakNet::RakNetGUID const& input);

    MCAPI void* $ctor(::RakNet::SystemAddress const& input);

    MCAPI void* $ctor(::RakNet::AddressOrGUID const& input);
    // NOLINTEND
};

} // namespace RakNet
