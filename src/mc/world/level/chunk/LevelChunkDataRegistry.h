#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/chunk/ChunkEntity.h"
#include "mc/world/level/chunk/StorageTypeHelper.h"

// auto generated forward declare list
// clang-format off
namespace br { struct ChunkBoundingBox; }
namespace br { struct DynamicSpawnArea; }
namespace br { struct FullStructureBoundingBox; }
namespace br { struct StaticSpawnArea; }
namespace br { struct StructureKey; }
namespace br { struct StructureType; }
namespace br::worldgen { struct StructureSpawnOverride; }
// clang-format on

namespace br {

class LevelChunkDataRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>  mUnk558de2;
    ::ll::UntypedStorage<8, 680> mUnk6e8c47;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkDataRegistry& operator=(LevelChunkDataRegistry const&);
    LevelChunkDataRegistry(LevelChunkDataRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelChunkDataRegistry();

    MCAPI ::br::ChunkEntity create();

    MCAPI ::br::LevelChunkDataRegistry& operator=(::br::LevelChunkDataRegistry&& other);

    MCAPI ~LevelChunkDataRegistry();
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

} // namespace br
