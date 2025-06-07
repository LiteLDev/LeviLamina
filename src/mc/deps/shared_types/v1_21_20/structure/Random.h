#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::PoolAliases {

struct Random {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4c8f65;
    ::ll::UntypedStorage<8, 24> mUnk8b95df;
    // NOLINTEND

public:
    // prevent constructor by default
    Random(Random const&);
    Random();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::PoolAliases::Random& operator=(::SharedTypes::v1_21_20::PoolAliases::Random&&);

    MCNAPI ::SharedTypes::v1_21_20::PoolAliases::Random& operator=(::SharedTypes::v1_21_20::PoolAliases::Random const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
