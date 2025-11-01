#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeCoordinateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::ExpressionOp> mMinValueType;
    ::ll::TypedStorage<2, 2, ushort> mMinValue;
    ::ll::TypedStorage<2, 2, ::ExpressionOp> mMaxValueType;
    ::ll::TypedStorage<2, 2, ushort> mMaxValue;
    ::ll::TypedStorage<4, 4, uint> mGridOffset;
    ::ll::TypedStorage<4, 4, uint> mGridStepSize;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType> mDistribution;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeCoordinateData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

};
