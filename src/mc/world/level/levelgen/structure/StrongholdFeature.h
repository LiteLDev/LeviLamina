#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class StrongholdFeature : public ::StructureFeature {
public:
    // StrongholdFeature inner types declare
    // clang-format off
    struct StrongholdResult;
    // clang-format on

    // StrongholdFeature inner types define
    struct StrongholdResult {
    public:
        // prevent constructor by default
        StrongholdResult& operator=(StrongholdResult const&);
        StrongholdResult(StrongholdResult const&);
        StrongholdResult();
    };

public:
    // prevent constructor by default
    StrongholdFeature& operator=(StrongholdFeature const&);
    StrongholdFeature(StrongholdFeature const&);
    StrongholdFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StrongholdFeature() = default;

    // vIndex: 3
    virtual bool
    getNearestGeneratedFeature(class Dimension& dimension, class BiomeSource const& biomeSource, class BlockPos const& origin, class BlockPos& pos, class IPreliminarySurfaceProvider const& preliminarySurfaceLevel, bool mustBeInNewChunks, std::optional<class HashedString> const&);

    // vIndex: 5
    virtual bool isFeatureChunk(
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    pos,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class Dimension const&                   dimension
    );

    // vIndex: 6
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const&, class Random& random, class ChunkPos const& cp, class IPreliminarySurfaceProvider const&);

    MCAPI StrongholdFeature(class VillageFeature* villages, uint seed);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void generatePositions(
        class Random&                            random,
        class BiomeSource const&                 biomeSource,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class Dimension const&                   dimension
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct StrongholdFeature::StrongholdResult const
    _generateStronghold(uint levelSeed, class ChunkPos const& cp);

    MCAPI bool _getNearestStronghold(
        class Dimension const& dimension,
        uint                   levelSeed,
        class BlockPos const&  origin,
        class BlockPos&        pos,
        bool                   mustBeInNewChunks
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class StructureStart>
    createStructureStart$(class Dimension& generator, class BiomeSource const&, class Random& random, class ChunkPos const& cp, class IPreliminarySurfaceProvider const&);

    MCAPI bool
    getNearestGeneratedFeature$(class Dimension& dimension, class BiomeSource const& biomeSource, class BlockPos const& origin, class BlockPos& pos, class IPreliminarySurfaceProvider const& preliminarySurfaceLevel, bool mustBeInNewChunks, std::optional<class HashedString> const&);

    MCAPI bool isFeatureChunk$(
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    pos,
        uint                                     levelSeed,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel,
        class Dimension const&                   dimension
    );

    MCAPI static class BlockPos const& START_OFFSET();

    // NOLINTEND
};
