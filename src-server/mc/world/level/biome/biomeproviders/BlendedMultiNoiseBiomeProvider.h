#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/ParameterList.h"
#include "mc/world/level/biome/RTree.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class ChunkBlenderFactory;
struct GetBiomeOptions;
struct OverworldNoises3d;
struct TargetPoint;
// clang-format on

class BlendedMultiNoiseBiomeProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&> mOverworldNoises;
    ::ll::TypedStorage<8, 192, ::ParameterList> mParameterList;
    ::ll::TypedStorage<8, 8, ::ChunkBlenderFactory&> mAttenuationFactory;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendedMultiNoiseBiomeProvider& operator=(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Biome const* _selectBestFittingBiome(::TargetPoint const& current, ::RTree::Hint* hint) const;

    MCAPI ::Biome const* tryGetBiome(::GetBiomeOptions const& getBiomeOptions) const;

    MCAPI ::Biome const* tryGetBiome(::GetBiomeOptions const& getBiomeOptions, ::ChunkLocalNoiseCache::CacheEntry const& xzCacheEntry, ::RTree::Hint* hint) const;

    MCAPI ~BlendedMultiNoiseBiomeProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
