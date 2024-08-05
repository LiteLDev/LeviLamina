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
namespace BlockEvents { struct BlockFallOnEvent; }
namespace mce { class Color; }
// clang-format on

class PowderSnowBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    PowderSnowBlock& operator=(PowderSnowBlock const&);
    PowderSnowBlock(PowderSnowBlock const&);
    PowderSnowBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PowderSnowBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 55
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 117
    virtual bool causesFreezeEffect() const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    MCAPI PowderSnowBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent&) const;

    MCAPI static bool canWalkOnTop(class GetCollisionShapeInterface const& actor);

    MCAPI static void clearFire(class BlockSource& region, class BlockPos const& pos, class Block const& block);

    MCAPI static void spawnPowderSnowParticles(class Level& level, class BlockPos const& pos);

    // NOLINTEND
};
