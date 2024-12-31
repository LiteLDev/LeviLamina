#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/StructureSection.h"
#include "mc/world/level/levelgen/v2/terrain_adjustment/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class Random;
namespace br::worldgen { struct JigsawJunction; }
namespace br::worldgen { struct Rigid; }
// clang-format on

namespace br::worldgen {

class PoolElementStructureSection : public ::br::worldgen::StructureSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk532ba1;
    ::ll::UntypedStorage<4, 4>  mUnk4a3dcf;
    ::ll::UntypedStorage<1, 1>  mUnk9707be;
    ::ll::UntypedStorage<4, 12> mUnkcf1f7c;
    ::ll::UntypedStorage<8, 24> mUnk7630f3;
    // NOLINTEND

public:
    // prevent constructor by default
    PoolElementStructureSection& operator=(PoolElementStructureSection const&);
    PoolElementStructureSection(PoolElementStructureSection const&);
    PoolElementStructureSection();

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
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
