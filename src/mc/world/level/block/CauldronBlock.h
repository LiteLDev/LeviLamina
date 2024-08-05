#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CauldronLiquidType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/ShapeType.h"
#include "mc/events/LevelEvent.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CauldronBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CauldronBlock& operator=(CauldronBlock const&);
    CauldronBlock(CauldronBlock const&);
    CauldronBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CauldronBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const&, class Vec3 const&, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool addCollisionShapes(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class AABB const*                                          intersectTestBox,
        std::vector<class AABB>&                                   inoutBoxes,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB const*              intersectTestBox,
        std::vector<class AABB>&       inoutBoxes
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 60
    virtual void
    handlePrecipitation(class BlockSource& region, class BlockPos const& pos, float downfallAmount, float temperature)
        const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 157
    virtual int getExtraRenderLayers() const;

    // vIndex: 158
    virtual struct Brightness getLight(class Block const& block) const;

    MCAPI CauldronBlock(std::string const& nameId, int id);

    MCAPI void
    setLiquidLevel(class BlockSource& region, class BlockPos const& pos, int, ::CauldronLiquidType type) const;

    MCAPI static bool
    canReceiveStalactiteDrip(class BlockSource& region, class BlockPos const& pos, ::MaterialType liquidType);

    MCAPI static int clampLiquidLevel(int);

    MCAPI static void
    spawnPotionParticles(class Level& level, class Vec3 const& pos, class Random& random, int color, int count);

    MCAPI static int const FILL_LEVEL_PER_DRIP;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkForStalactiteDrip(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _explodeCauldronContents(class BlockSource& region, class BlockPos const& pos, ushort data) const;

    MCAPI bool const _mayUpdateLiquidLevel(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _sendCauldronUsedEventToClient(
        class Player const&                          player,
        short                                        itemId,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    ) const;

    MCAPI void _spawnCauldronEvent(class BlockSource& region, class BlockPos const& pos, ::LevelEvent levelEvent) const;

    MCAPI bool _useDyeableComponent(
        class ItemStack&          itemInstance,
        class Player&             player,
        class BlockPos const&     pos,
        class CauldronBlockActor& blockEntity,
        class BlockSource&        region,
        int                       fillLevel,
        bool                      isEmpty,
        bool                      isWater,
        bool                      isCleanWater
    ) const;

    MCAPI void
    _useInventory(class Player& player, class ItemStack& current, class ItemStack& replaceWith, int useCount) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const BASE_WATER_PIXEL;

    MCAPI static class BaseGameVersion const CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    MCAPI static int const PIXEL_PER_LEVEL;

    // NOLINTEND
};
