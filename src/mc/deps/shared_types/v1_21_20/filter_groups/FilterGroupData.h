#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupDataMap.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterTestData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterGroupData {
public:
    // FilterGroupData inner types define
    using Variant = ::std::variant<
        ::SharedTypes::v1_21_20::FilterTestData,
        ::std::vector<::SharedTypes::v1_21_20::FilterGroupData>,
        ::SharedTypes::v1_21_20::FilterGroupDataMap>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        232,
        ::std::variant<
            ::SharedTypes::v1_21_20::FilterTestData,
            ::std::vector<::SharedTypes::v1_21_20::FilterGroupData>,
            ::SharedTypes::v1_21_20::FilterGroupDataMap>>
        mData;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterGroupData& operator=(FilterGroupData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilterGroupData();

    MCAPI FilterGroupData(::SharedTypes::v1_21_20::FilterGroupData&&);

    MCAPI FilterGroupData(::SharedTypes::v1_21_20::FilterGroupData const&);

    MCAPI ~FilterGroupData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterGroupData&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterGroupData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
