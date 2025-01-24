#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
class HashedString;
namespace br::worldgen { class StructureSetRegistry; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

struct ChunkGeneratorStructureState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                                                                 mLevelSeed;
    ::ll::TypedStorage<8, 8, int64>                                                                 mRingsSeed;
    ::ll::TypedStorage<8, 8, uint64>                                                                mMaxStructureCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::br::worldgen::StructureSet const>>> mPossibleStructures;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkGeneratorStructureState& operator=(ChunkGeneratorStructureState const&);
    ChunkGeneratorStructureState(ChunkGeneratorStructureState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> findNearestStructureFeature(
        ::Dimension&         dimension,
        ::HashedString       feature,
        ::BlockPos const&    origin,
        ::BiomeSource const& biomeSource,
        bool                 mustBeInNewChunks
    ) const;

    MCAPI ::br::worldgen::ChunkGeneratorStructureState& operator=(::br::worldgen::ChunkGeneratorStructureState&&);

    MCAPI ~ChunkGeneratorStructureState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::ChunkGeneratorStructureState createFlat(
        int64                                                                levelSeed,
        ::BiomeSource const&                                                 biomeSource,
        ::std::vector<::std::shared_ptr<::br::worldgen::StructureSet const>> structureOverrides
    );

    MCAPI static ::br::worldgen::ChunkGeneratorStructureState createNormal(
        int64                                       levelSeed,
        ::BiomeSource const&                        biomeSource,
        ::br::worldgen::StructureSetRegistry const& allStructures
    );

    MCAPI static ::br::worldgen::ChunkGeneratorStructureState createVoid(int64 levelSeed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
