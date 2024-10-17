#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FlowerPotBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    FlowerPotBlock& operator=(FlowerPotBlock const&);
    FlowerPotBlock(FlowerPotBlock const&);
    FlowerPotBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlowerPotBlock() = default;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI FlowerPotBlock(std::string const& nameId, int id);

    MCAPI static bool isValidResource(class Block const& plant);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryPlaceFlower(class Player& player, class BlockPos const& blockPos) const;

    MCAPI bool _tryTakeFlower(class Player& player, class BlockPos const& blockPos) const;

    MCAPI void _updateFlowerPotEntity(
        class BlockSource&         region,
        class BlockPos const&      blockPos,
        class FlowerPotBlockActor* flowerPotEntity,
        class Block const*         flowerBlock,
        class Actor&               sourceActor
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const* blockActor) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool isValidAuxValue$(int value) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class Block const*
    playerWillDestroy$(class Player& player, class BlockPos const& pos, class Block const& block) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
