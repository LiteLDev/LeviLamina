#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/versionless/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
namespace br::worldgen { class StructureSection; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<8, 8, ::ChunkPos> mChunkPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBox;
    ::ll::TypedStorage<8, 8, ::br::worldgen::Structure const*> mStructure;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::br::worldgen::StructureSection>>> mSections;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void placeEntities(::BlockSource& region, ::BoundingBox const& chunkBB) const;
    // NOLINTEND

};

}
