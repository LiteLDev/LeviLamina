#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
class IPreliminarySurfaceProvider;
class StructureFeature;
namespace br::worldgen { class StructureCache; }
namespace br::worldgen { struct ChunkGeneratorStructureState; }
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
    MCAPI StructureFeatureRegistry();

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

    MCFOLD ::br::worldgen::StructureCache& structureCache();

    MCAPI void tick();

    MCAPI void waitForBlueprints() const;

    MCAPI ~StructureFeatureRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
