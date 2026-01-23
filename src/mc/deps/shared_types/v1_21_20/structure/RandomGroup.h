#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/WeightedRandomItem.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20::PoolAliases { struct Direct; }
namespace SharedTypes::v1_21_20::PoolAliases { struct Random; }
// clang-format on

namespace SharedTypes::v1_21_20::PoolAliases {

struct RandomGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::SharedTypes::v1_21_20::WeightedRandomItem<::std::vector<::std::variant<
            ::SharedTypes::v1_21_20::PoolAliases::Direct,
            ::SharedTypes::v1_21_20::PoolAliases::Random>>>>>
        mGroups;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomGroup& operator=(RandomGroup const&);
    RandomGroup(RandomGroup const&);
    RandomGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::PoolAliases::RandomGroup&
    operator=(::SharedTypes::v1_21_20::PoolAliases::RandomGroup&&);

    MCAPI ~RandomGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
