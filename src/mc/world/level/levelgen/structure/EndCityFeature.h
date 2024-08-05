#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class EndCityFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    EndCityFeature& operator=(EndCityFeature const&);
    EndCityFeature(EndCityFeature const&);
    EndCityFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndCityFeature() = default;

    // vIndex: 2
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const&,
        class Random&         random,
        class ChunkPos const& pos,
        uint                  levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& pos, class IPreliminarySurfaceProvider const&);

    MCAPI EndCityFeature(class Dimension& dimension, uint& seed);

    // NOLINTEND
};
