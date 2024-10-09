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
    MCAPI AddressOrGUID(struct RakNet::AddressOrGUID const& input);

    MCAPI explicit AddressOrGUID(struct RakNet::RakNetGUID const& input);

    MCAPI explicit AddressOrGUID(struct RakNet::SystemAddress const& input);

    MCAPI bool IsUndefined() const;

    // NOLINTEND
};

}; // namespace RakNet
