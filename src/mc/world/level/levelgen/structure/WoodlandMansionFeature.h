#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class WoodlandMansionFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    WoodlandMansionFeature& operator=(WoodlandMansionFeature const&);
    WoodlandMansionFeature(WoodlandMansionFeature const&);
    WoodlandMansionFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WoodlandMansionFeature() = default;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    MCAPI explicit WoodlandMansionFeature(uint seed);

    // NOLINTEND
};
