#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/v2/ChunkGeneratorStructureState.h"
#include "mc/world/level/levelgen/v2/StructureCache.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureCache; }
// clang-format on

class StructureFeature;

class StructureFeatureRegistry {
public:
    br::worldgen::ChunkGeneratorStructureState     mChunkGeneratorStructureState; // this+0x0
    std::vector<std::unique_ptr<StructureFeature>> mStructureFeatures;            // this+0x30
    br::worldgen::StructureCache                   mStructureCache;               // this+0x48

public:
    // prevent constructor by default
    StructureFeatureRegistry& operator=(StructureFeatureRegistry const&);
    StructureFeatureRegistry(StructureFeatureRegistry const&);

public:
    template <std::derived_from<StructureFeature> T, class... Args>
    T& registerFeature(Args&&... args) {
        auto  ptr = std::make_unique<T>(std::forward<Args>(args)...);
        auto& ref = *ptr;
        mStructureFeatures.push_back(std::move(ptr));
        return ref;
    }

public:
    // NOLINTBEGIN
    MCAPI StructureFeatureRegistry();

    MCAPI bool findNearestStructureFeature(
        class Dimension&                   dimension,
        class IPreliminarySurfaceProvider& surfaceProvider,
        ::StructureFeatureType             feature,
        class BlockPos const&              origin,
        class BlockPos&                    pos,
        class BiomeSource const&           biomeSource,
        bool                               mustBeInNewChunks,
        std::optional<class HashedString>  biomeTag
    );

    MCAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    MCAPI bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    MCAPI class br::worldgen::StructureCache& structureCache();

    MCAPI void tick();

    MCAPI void waitForBlueprints() const;

    MCAPI ~StructureFeatureRegistry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
