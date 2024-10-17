#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    virtual class AABB getCollisionShape(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 25
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 55
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 117
    virtual bool causesFreezeEffect() const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    MCAPI PowderSnowBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void onFallOn(struct BlockEvents::BlockFallOnEvent& eventData) const;

    MCAPI static bool canWalkOnTop(class GetCollisionShapeInterface const& actor);

    MCAPI static void clearFire(class BlockSource& region, class BlockPos const& pos, class Block const& block);

    MCAPI static void spawnPowderSnowParticles(class Level& level, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const&);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion) const;

    MCAPI bool canBeDestroyedByWaterSpread$() const;

    MCAPI bool canConnect$(class Block const&, uchar, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar, ::BlockSupportType) const;

    MCAPI bool causesFreezeEffect$() const;

    MCAPI class AABB getCollisionShape$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI bool isWaterBlocking$() const;

    // NOLINTEND
};
