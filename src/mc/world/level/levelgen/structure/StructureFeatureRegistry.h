#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/ChunkGeneratorStructureState.h"
#include "mc/world/level/levelgen/v2/StructureCache.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class StructureFeature;
// clang-format on

class StructureFeatureRegistry {
public:
    // StructureFeatureRegistry inner types define
    using StructureFeatureContainer = ::std::vector<::std::unique_ptr<::StructureFeature>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::br::worldgen::ChunkGeneratorStructureState>         mGeneratorState;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructureFeature>>> mStructureFeatures;
    ::ll::TypedStorage<8, 136, ::br::worldgen::StructureCache>                      mStructureCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool findNearestStructureFeature(
        ::Dimension&                    dimension,
        ::IPreliminarySurfaceProvider&  surfaceProvider,
        ::HashedString                  feature,
        ::BlockPos const&               origin,
        ::BlockPos&                     pos,
        ::BiomeSource const&            biomeSource,
        bool                            mustBeInNewChunks,
        ::std::optional<::HashedString> biomeTag
    );

    MCAPI ::HashedString findStructureFeatureTypeAt(::BlockPos const& pos);

    MCAPI ::StructureFeature* getStructureFeatureOfType(::HashedString type) const;

    MCAPI bool isStructureFeatureTypeAt(::BlockPos const& pos, ::HashedString type) const;

    MCAPI ~StructureFeatureRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
