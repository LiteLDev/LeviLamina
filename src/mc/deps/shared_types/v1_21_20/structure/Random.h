#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/WeightedRandomItem.h"

namespace SharedTypes::v1_21_20::PoolAliases {

struct Random {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mAlias;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::WeightedRandomItem<::SharedTypes::Reference<15>>>>
        mTargets;
    // NOLINTEND

public:
    // prevent constructor by default
    Random(Random const&);
    Random();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::PoolAliases::Random& operator=(::SharedTypes::v1_21_20::PoolAliases::Random&&);

    MCAPI ::SharedTypes::v1_21_20::PoolAliases::Random& operator=(::SharedTypes::v1_21_20::PoolAliases::Random const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
