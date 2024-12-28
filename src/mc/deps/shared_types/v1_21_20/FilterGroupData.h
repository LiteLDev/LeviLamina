#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
