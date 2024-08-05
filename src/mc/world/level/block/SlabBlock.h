#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SlabBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SlabBlock& operator=(SlabBlock const&);
    SlabBlock(SlabBlock const&);
    SlabBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SlabBlock();

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 14
    virtual bool
    isObstructingChests(class BlockSource& region, class BlockPos const& pos, class Block const& thisBlock) const;

    // vIndex: 19
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    // vIndex: 39
    virtual bool isSlabBlock() const;

    // vIndex: 40
    virtual bool isDoubleSlabBlock() const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 73
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 107
    virtual class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

    MCAPI SlabBlock(
        std::string const&        nameId,
        int                       id,
        bool                      _fullsize,
        class Material const&     mat,
        class HashedString const& baseSlab
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
