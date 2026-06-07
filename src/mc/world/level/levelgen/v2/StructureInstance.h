#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class HashedString;
class IRandom;
namespace br::worldgen { class StructureSection; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                         mPos;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                                          mChunkPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                      mBox;
    ::ll::TypedStorage<8, 8, ::br::worldgen::Structure const*>                                    mStructure;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::br::worldgen::StructureSection>>> mSections;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::unique_ptr<::br::worldgen::StructureSection>>>>
    begin() const;

    MCFOLD ::BoundingBox const& boundingBox() const;

    MCFOLD ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::unique_ptr<::br::worldgen::StructureSection>>>>
    end() const;

    MCAPI bool intersects(::BoundingBox box) const;

    MCAPI bool isReference(::ChunkPos pos) const;

    MCFOLD bool isValid() const;

    MCAPI void placeEntities(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    MCAPI bool postProcess(::BlockSource& region, ::IRandom& random, ::BoundingBox const& chunkBB) const;

    MCFOLD ::br::worldgen::Structure const& structure() const;

    MCAPI ::br::worldgen::TerrainAdjustment::Type terrainAdaptation() const;

    MCAPI ::HashedString type() const;
    // NOLINTEND
};

} // namespace br::worldgen
