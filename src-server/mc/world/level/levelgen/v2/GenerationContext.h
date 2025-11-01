#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/v2/WorldGenRandom.h"

// auto generated forward declare list
// clang-format off
class JigsawStructureRegistry;
namespace br::worldgen { class ChunkAccessor; }
// clang-format on

namespace br::worldgen {

struct GenerationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::JigsawStructureRegistry const&> mPools;
    ::ll::TypedStorage<8, 104, ::br::worldgen::WorldGenRandom> mRandom;
    ::ll::TypedStorage<8, 8, int64> mLevelSeed;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mChunkPos;
    ::ll::TypedStorage<8, 8, ::br::worldgen::ChunkAccessor&> mChunkAccessor;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerationContext& operator=(GenerationContext const&);
    GenerationContext(GenerationContext const&);
    GenerationContext();

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

}
