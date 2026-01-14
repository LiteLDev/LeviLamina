#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ScatterChanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mNumerator;
    ::ll::TypedStorage<4, 4, int>                                                     mDenominator;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>> mChancePercent;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatterChanceData& operator=(ScatterChanceData const&);
    ScatterChanceData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScatterChanceData(::SharedTypes::v1_21_10::ScatterChanceData&&);

    MCAPI ScatterChanceData(::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCAPI ::SharedTypes::v1_21_10::ScatterChanceData& operator=(::SharedTypes::v1_21_10::ScatterChanceData&&);

    MCAPI ~ScatterChanceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterChanceData&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterChanceData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
