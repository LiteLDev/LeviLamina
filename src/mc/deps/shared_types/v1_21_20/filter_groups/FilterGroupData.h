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
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterGroupData();

    MCNAPI bool operator==(::SharedTypes::v1_21_20::FilterGroupData const&) const;

    MCNAPI ~FilterGroupData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
