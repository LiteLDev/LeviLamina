#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
struct BiomeCoordinateData;
// clang-format on

struct BiomeScatterParamData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeCoordinateData>>              mCoordinates;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder> mEvalOrder;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                     mChancePercentType;
    ::ll::TypedStorage<2, 2, ushort>                                             mChancePercent;
    ::ll::TypedStorage<4, 4, int>                                                mChanceNumerator;
    ::ll::TypedStorage<4, 4, int>                                                mChanceDenominator;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>                                     mIterationsType;
    ::ll::TypedStorage<2, 2, ushort>                                             mIterations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeScatterParamData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeScatterParamData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
