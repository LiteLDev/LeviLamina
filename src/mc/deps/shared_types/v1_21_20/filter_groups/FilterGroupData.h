#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterCollectionGroup.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterTestData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::std::optional<::SharedTypes::v1_21_20::FilterTestData>>                mTestNode;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_21_20::FilterGroupData>>> mChildren;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::SharedTypes::v1_21_20::FilterCollectionGroup, ::SharedTypes::v1_21_20::FilterGroupData>>
        mCollectionGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilterGroupData();

    MCAPI FilterGroupData(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);

    MCAPI ::SharedTypes::v1_21_20::FilterGroupData& operator=(::SharedTypes::v1_21_20::FilterGroupData const&);

    MCAPI ~FilterGroupData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void fromFilterGroupVector(
        ::SharedTypes::v1_21_20::FilterGroupData&                      instance,
        ::std::vector<::SharedTypes::v1_21_20::FilterGroupData> const& filterGroups
    );

    MCAPI static void fromFilterTestData(
        ::SharedTypes::v1_21_20::FilterGroupData&      instance,
        ::SharedTypes::v1_21_20::FilterTestData const& filterTestData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
