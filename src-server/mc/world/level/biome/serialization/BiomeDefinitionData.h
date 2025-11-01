#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BiomeIdType.h"
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeDefinitionChunkGenData.h"
#include "mc/world/level/biome/serialization/BiomeTagsData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeDefinitionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::BiomeIdType> mId;
    ::ll::TypedStorage<4, 4, float> mTemperature;
    ::ll::TypedStorage<4, 4, float> mDownfall;
    ::ll::TypedStorage<4, 4, float> mFoliageSnow;
    ::ll::TypedStorage<4, 4, float> mDepth;
    ::ll::TypedStorage<4, 4, float> mScale;
    ::ll::TypedStorage<4, 4, int> mMapWaterColorARGB;
    ::ll::TypedStorage<1, 1, bool> mRain;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeTagsData>> mTags;
    ::ll::TypedStorage<8, 504, ::std::optional<::BiomeDefinitionChunkGenData>> mChunkGenData;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDefinitionData& operator=(BiomeDefinitionData const&);
    BiomeDefinitionData(BiomeDefinitionData const&);
    BiomeDefinitionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeDefinitionData(::BiomeDefinitionData&&);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeDefinitionData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeDefinitionData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeDefinitionData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
