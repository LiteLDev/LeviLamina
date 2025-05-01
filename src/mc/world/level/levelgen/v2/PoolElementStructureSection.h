#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/StructureSection.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class IRandom;
class Random;
class StructurePoolElement;
namespace SharedTypes::v1_21_50 { struct PoolElementStructureSection; }
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct Rigid; }
// clang-format on

namespace br::worldgen {

class PoolElementStructureSection : public ::br::worldgen::StructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const*>                  mElement;
    ::ll::TypedStorage<4, 4, int>                                            mGroundOffset;
    ::ll::TypedStorage<1, 1, ::Rotation>                                     mRot;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mPosition;
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::JigsawJunction>> mJunctions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void
    appendJunctions(::BoundingBox const& box, ::std::vector<::br::worldgen::JigsawJunction>& junctions) /*override*/;

    // vIndex: 2
    virtual void appendRigid(
        ::br::worldgen::TerrainAdjustment::Type type,
        ::std::vector<::br::worldgen::Rigid>&   rigids
    ) /*override*/;

    // vIndex: 4
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) const /*override*/;

    // vIndex: 3
    virtual bool postProcess(
        ::BlockSource&                    region,
        ::IRandom&                        random,
        ::BlockPos                        structurePos,
        ::BoundingBox const&              chunkBB,
        ::br::worldgen::JigsawReplacement replacement
    ) const /*override*/;

    // vIndex: 5
    virtual void placeEntities(::BlockSource& region, ::BoundingBox const& overlapBB) const /*override*/;

    // vIndex: 0
    virtual ~PoolElementStructureSection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_50::PoolElementStructureSection serialize() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendJunctions(::BoundingBox const& box, ::std::vector<::br::worldgen::JigsawJunction>& junctions);

    MCNAPI void
    $appendRigid(::br::worldgen::TerrainAdjustment::Type type, ::std::vector<::br::worldgen::Rigid>& rigids);

    MCNAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) const;

    MCNAPI bool $postProcess(
        ::BlockSource&                    region,
        ::IRandom&                        random,
        ::BlockPos                        structurePos,
        ::BoundingBox const&              chunkBB,
        ::br::worldgen::JigsawReplacement replacement
    ) const;

    MCNAPI void $placeEntities(::BlockSource& region, ::BoundingBox const& overlapBB) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
