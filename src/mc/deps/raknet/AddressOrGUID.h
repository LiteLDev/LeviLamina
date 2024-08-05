#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

struct AddressOrGUID {
public:
    // prevent constructor by default
    AddressOrGUID& operator=(AddressOrGUID const&);
    AddressOrGUID();

public:
    // NOLINTBEGIN
    MCAPI AddressOrGUID(struct RakNet::AddressOrGUID const&);

    MCAPI explicit AddressOrGUID(struct RakNet::RakNetGUID const&);

    MCAPI explicit AddressOrGUID(struct RakNet::SystemAddress const&);

    MCAPI bool IsUndefined() const;

    // NOLINTEND
};

}; // namespace RakNet
