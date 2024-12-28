#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class ChunkPos;
class HashedString;
class IRandom;
class Random;
namespace br::worldgen { class StructureSection; }
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk31ad38;
    ::ll::UntypedStorage<8, 8>  mUnkaa2005;
    ::ll::UntypedStorage<4, 24> mUnka4b9be;
    ::ll::UntypedStorage<8, 8>  mUnka63029;
    ::ll::UntypedStorage<8, 24> mUnk674b4d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureInstance& operator=(StructureInstance const&);
    StructureInstance(StructureInstance const&);
    StructureInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureInstance(
        ::br::worldgen::Structure const*                                     structure,
        ::BlockPos                                                           pos,
        ::ChunkPos                                                           chunkPos,
        ::BoundingBox                                                        box,
        ::std::vector<::std::unique_ptr<::br::worldgen::StructureSection>>&& sections
    );

    MCAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::unique_ptr<::br::worldgen::StructureSection>>>>
    begin() const;

    MCAPI ::BoundingBox const& boundingBox() const;

    MCAPI bool contains(::BlockPos pos) const;

    MCAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::std::unique_ptr<::br::worldgen::StructureSection>>>>
    end() const;

    MCAPI bool intersects(::BoundingBox box) const;

    MCAPI bool isReference(::ChunkPos pos) const;

    MCAPI bool isValid() const;

    MCAPI void placeEntities(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    MCAPI bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) const;

    MCAPI bool postProcess(::BlockSource& region, ::IRandom& random, ::BoundingBox const& chunkBB) const;

    MCAPI ::br::worldgen::Structure const& structure() const;

    MCAPI ::br::worldgen::TerrainAdjustment::Type terrainAdaptation() const;

    MCAPI ::HashedString type() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::br::worldgen::Structure const*                                     structure,
        ::BlockPos                                                           pos,
        ::ChunkPos                                                           chunkPos,
        ::BoundingBox                                                        box,
        ::std::vector<::std::unique_ptr<::br::worldgen::StructureSection>>&& sections
    );
    // NOLINTEND
};

} // namespace br::worldgen
