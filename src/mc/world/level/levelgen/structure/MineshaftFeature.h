#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class MineshaftFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    MineshaftFeature& operator=(MineshaftFeature const&);
    MineshaftFeature(MineshaftFeature const&);
    MineshaftFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftFeature() = default;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    // NOLINTEND
};
