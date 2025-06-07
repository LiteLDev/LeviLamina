#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::PoolAliases {

struct Direct {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka4dfe5;
    ::ll::UntypedStorage<8, 32> mUnkb29ee7;
    // NOLINTEND

public:
    // prevent constructor by default
    Direct(Direct const&);
    Direct();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::PoolAliases::Direct& operator=(::SharedTypes::v1_21_20::PoolAliases::Direct&&);

    MCNAPI ::SharedTypes::v1_21_20::PoolAliases::Direct& operator=(::SharedTypes::v1_21_20::PoolAliases::Direct const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
