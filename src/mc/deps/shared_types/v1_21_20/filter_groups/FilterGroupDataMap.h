#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterCollectionGroup.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterGroupDataMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::SharedTypes::v1_21_20::FilterCollectionGroup, ::SharedTypes::v1_21_20::FilterGroupData>>
        mCollectionGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FilterGroupDataMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
