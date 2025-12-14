#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeElementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                       mNoiseFreqScale;
    ::ll::TypedStorage<4, 4, float>                       mNoiseLowerBound;
    ::ll::TypedStorage<4, 4, float>                       mNoiseUpperBound;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>              mHeightMinType;
    ::ll::TypedStorage<2, 2, ushort>                      mHeightMin;
    ::ll::TypedStorage<2, 2, ::ExpressionOp>              mHeightMaxType;
    ::ll::TypedStorage<2, 2, ushort>                      mHeightMax;
    ::ll::TypedStorage<4, 24, ::BiomeSurfaceMaterialData> mAdjustedMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void write(::BinaryStream& stream) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeElementData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND
};
