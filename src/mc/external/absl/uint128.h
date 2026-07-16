#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class uint128 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc9a004;
    ::ll::UntypedStorage<8, 8> mUnkc226c5;
    // NOLINTEND

public:
    // prevent constructor by default
    uint128& operator=(uint128 const&);
    uint128(uint128 const&);
    uint128();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::absl::uint128& operator<<=(int amount);

    MCNAPI ::absl::uint128& operator>>=(int amount);
    // NOLINTEND
};

} // namespace absl
