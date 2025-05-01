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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AddressOrGUID(::RakNet::RakNetGUID const& input);

    MCNAPI explicit AddressOrGUID(::RakNet::SystemAddress const& input);

    MCNAPI AddressOrGUID(::RakNet::AddressOrGUID const& input);

    MCNAPI bool IsUndefined() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RakNet::RakNetGUID const& input);

    MCNAPI void* $ctor(::RakNet::SystemAddress const& input);

    MCNAPI void* $ctor(::RakNet::AddressOrGUID const& input);
    // NOLINTEND
};

} // namespace RakNet
