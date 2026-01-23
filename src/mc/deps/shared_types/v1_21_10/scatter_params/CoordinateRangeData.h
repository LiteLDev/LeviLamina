#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct CoordinateRangeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType>         mDistribution;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>> mMinOrSingleValue;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mStepSize;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mGridOffset;
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mExtent;
    // NOLINTEND

public:
    // prevent constructor by default
    CoordinateRangeData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CoordinateRangeData(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCAPI CoordinateRangeData(::SharedTypes::v1_21_10::CoordinateRangeData const&);

    MCAPI ::SharedTypes::v1_21_10::CoordinateRangeData& operator=(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCAPI ::SharedTypes::v1_21_10::CoordinateRangeData& operator=(::SharedTypes::v1_21_10::CoordinateRangeData const&);

    MCAPI ~CoordinateRangeData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::CoordinateRangeData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
