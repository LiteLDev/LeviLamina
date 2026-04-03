#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterCollectionGroup.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct FilterGroupData; }
namespace cereal { struct ReflectionCtx; }
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
    // prevent constructor by default
    FilterGroupDataMap(FilterGroupDataMap const&);
    FilterGroupDataMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::FilterGroupDataMap& operator=(::SharedTypes::v1_21_20::FilterGroupDataMap&&);

    MCAPI ::SharedTypes::v1_21_20::FilterGroupDataMap& operator=(::SharedTypes::v1_21_20::FilterGroupDataMap const&);

    MCAPI ~FilterGroupDataMap();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
