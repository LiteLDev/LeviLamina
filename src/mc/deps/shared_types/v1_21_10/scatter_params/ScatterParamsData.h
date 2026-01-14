#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateRangeData.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/ScatterChanceData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ScatterParamsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                       mIterations;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_21_10::ScatterChanceData>> mScatterChance;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder>           mCoordinateEvalOrder;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_10::CoordinateRangeData>               mX;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_10::CoordinateRangeData>               mY;
    ::ll::TypedStorage<8, 176, ::SharedTypes::v1_21_10::CoordinateRangeData>               mZ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScatterParamsData();

    MCAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCAPI ~ScatterParamsData();
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

    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
