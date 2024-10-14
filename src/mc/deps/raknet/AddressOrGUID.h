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
    RakNetGUID    guid;
    SystemAddress adr;

public:
    // NOLINTBEGIN
    MCAPI AddressOrGUID(struct RakNet::AddressOrGUID const& input);

    MCAPI AddressOrGUID(struct RakNet::RakNetGUID const& input);

    MCAPI AddressOrGUID(struct RakNet::SystemAddress const& input);

    MCAPI bool IsUndefined() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace RakNet
