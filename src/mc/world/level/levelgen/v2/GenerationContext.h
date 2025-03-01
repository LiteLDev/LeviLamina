#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class JigsawStructureRegistry;
namespace br::worldgen { class ChunkAccessor; }
namespace br::worldgen { struct WorldGenRandom; }
// clang-format on

namespace br::worldgen {

struct GenerationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&> mPools;
    ::ll::TypedStorage<8, 72, ::br::worldgen::WorldGenRandom>  mRandom;
    ::ll::TypedStorage<8, 8, int64>                            mLevelSeed;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                       mChunkPos;
    ::ll::TypedStorage<8, 8, ::br::worldgen::ChunkAccessor&>   mChunkAccessor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GenerationContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
