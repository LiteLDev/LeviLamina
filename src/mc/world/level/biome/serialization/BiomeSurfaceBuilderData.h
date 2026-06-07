#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeCappedSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeMesaSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeNoiseGradientSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeSurfaceBuilderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::std::optional<::BiomeSurfaceMaterialData>>       mSurfaceMaterials;
    ::ll::TypedStorage<1, 1, bool>                                               mHasDefaultOverworldSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasSwampSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasFrozenOceanSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasTheEndSurface;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMesaSurfaceData>>           mMesaSurface;
    ::ll::TypedStorage<8, 80, ::std::optional<::BiomeCappedSurfaceData>>         mCappedSurface;
    ::ll::TypedStorage<8, 120, ::std::optional<::BiomeNoiseGradientSurfaceData>> mNoiseGradientSurface;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeSurfaceBuilderData& operator=(BiomeSurfaceBuilderData const&);
    BiomeSurfaceBuilderData(BiomeSurfaceBuilderData const&);
    BiomeSurfaceBuilderData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BiomeSurfaceBuilderData& operator=(::BiomeSurfaceBuilderData&&);

    MCAPI bool operator==(::BiomeSurfaceBuilderData const& other) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeSurfaceBuilderData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Result<::BiomeSurfaceBuilderData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
