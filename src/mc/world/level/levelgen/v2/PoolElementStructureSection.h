#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
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
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                 mLiquidSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    appendJunctions(::BoundingBox const& box, ::std::vector<::br::worldgen::JigsawJunction>& junctions) /*override*/;

    virtual void appendRigid(
        ::br::worldgen::TerrainAdjustment::Type type,
        ::std::vector<::br::worldgen::Rigid>&   rigids
    ) /*override*/;

    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) const /*override*/;

    virtual bool postProcess(
        ::BlockSource&                    region,
        ::IRandom&                        random,
        ::BlockPos                        structurePos,
        ::BoundingBox const&              chunkBB,
        ::br::worldgen::JigsawReplacement replacement
    ) const /*override*/;

    virtual void placeEntities(::BlockSource& region, ::BoundingBox const& overlapBB) const /*override*/;

    virtual ~PoolElementStructureSection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_50::PoolElementStructureSection serialize() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendJunctions(::BoundingBox const& box, ::std::vector<::br::worldgen::JigsawJunction>& junctions);

    MCAPI void $appendRigid(::br::worldgen::TerrainAdjustment::Type type, ::std::vector<::br::worldgen::Rigid>& rigids);

    MCAPI bool $postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) const;

    MCAPI bool $postProcess(
        ::BlockSource&                    region,
        ::IRandom&                        random,
        ::BlockPos                        structurePos,
        ::BoundingBox const&              chunkBB,
        ::br::worldgen::JigsawReplacement replacement
    ) const;

    MCAPI void $placeEntities(::BlockSource& region, ::BoundingBox const& overlapBB) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
