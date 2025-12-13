#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct GetBiomeOptions;
struct TargetPoint;
// clang-format on

class BlendedMultiNoiseBiomeProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc86f8c;
    ::ll::UntypedStorage<8, 192> mUnkea9b8f;
    ::ll::UntypedStorage<8, 8>   mUnkd743ad;
    ::ll::UntypedStorage<8, 8>   mUnk39aca8;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendedMultiNoiseBiomeProvider& operator=(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider(BlendedMultiNoiseBiomeProvider const&);
    BlendedMultiNoiseBiomeProvider();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Biome const* _selectBestFittingBiome(::TargetPoint const& current, ::RTree::Hint* hint) const;

    MCNAPI ::Biome const* tryGetBiome(::GetBiomeOptions const& getBiomeOptions) const;

    MCNAPI ::Biome const* tryGetBiome(
        ::GetBiomeOptions const&                  getBiomeOptions,
        ::ChunkLocalNoiseCache::CacheEntry const& xzCacheEntry,
        ::RTree::Hint*                            hint
    ) const;

    MCNAPI ~BlendedMultiNoiseBiomeProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
