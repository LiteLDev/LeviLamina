#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct FilterTestData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 232> mUnk1c066f;
    ::ll::UntypedStorage<8, 32>  mUnk156e2f;
    ::ll::UntypedStorage<8, 64>  mUnkaa6552;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterGroupData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterGroupData(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);

    MCNAPI ::SharedTypes::v1_21_20::FilterGroupData& operator=(::SharedTypes::v1_21_20::FilterGroupData const&);

    MCNAPI ~FilterGroupData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void fromFilterGroupVector(
        ::SharedTypes::v1_21_20::FilterGroupData&                      instance,
        ::std::vector<::SharedTypes::v1_21_20::FilterGroupData> const& filterGroups
    );

    MCNAPI static void fromFilterTestData(
        ::SharedTypes::v1_21_20::FilterGroupData&      instance,
        ::SharedTypes::v1_21_20::FilterTestData const& filterTestData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::FilterGroupData const& filterGroupData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
