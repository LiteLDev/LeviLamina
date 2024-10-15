#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CauldronLiquidType.h"
#include "mc/world/level/block/LevelEvent.h"
#include "mc/world/level/material/MaterialType.h"

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
    clip(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 7
    virtual bool
    addCollisionShapes(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const&,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 60
    virtual void
    handlePrecipitation(class BlockSource& region, class BlockPos const& pos, float downfallAmount, float temperature)
        const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const& block, uchar) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 157
    virtual int getExtraRenderLayers() const;

    // vIndex: 158
    virtual struct Brightness getLight(class Block const& block) const;

    MCAPI CauldronBlock(std::string const& nameId, int id);

    MCAPI void
    setLiquidLevel(class BlockSource& region, class BlockPos const& pos, int liquidLevel, ::CauldronLiquidType type)
        const;

    MCAPI static bool
    canReceiveStalactiteDrip(class BlockSource& region, class BlockPos const& pos, ::MaterialType liquidType);

    MCAPI static int clampLiquidLevel(int fillLevel);

    MCAPI static void
    spawnPotionParticles(class Level& level, class Vec3 const& pos, class Random&, int color, int count);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _checkForStalactiteDrip(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _explodeCauldronContents(class BlockSource& region, class BlockPos const& pos, ushort) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void addAABBs$(
        class Block const&,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    MCAPI bool
    addCollisionShapes$(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class AABB const* intersectTestBox, std::vector<class AABB>& inoutBoxes, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI class HitResult
    clip$(class Block const& block, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getComparatorSignal$(class BlockSource&, class BlockPos const&, class Block const& block, uchar) const;

    MCAPI int getExtraRenderLayers$() const;

    MCAPI struct Brightness getLight$(class Block const& block) const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI void
    handlePrecipitation$(class BlockSource& region, class BlockPos const& pos, float downfallAmount, float temperature)
        const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI static int const& BASE_WATER_PIXEL();

    MCAPI static class BaseGameVersion const& CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    MCAPI static int const& FILL_LEVEL_PER_DRIP();

    MCAPI static int const& PIXEL_PER_LEVEL();

    // NOLINTEND
};
