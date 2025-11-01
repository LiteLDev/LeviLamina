#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::PoolAliases {

struct RandomGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkab835a;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomGroup& operator=(RandomGroup const&);
    RandomGroup(RandomGroup const&);
    RandomGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::PoolAliases::RandomGroup& operator=(::SharedTypes::v1_21_20::PoolAliases::RandomGroup&&);
    // NOLINTEND

};

}
