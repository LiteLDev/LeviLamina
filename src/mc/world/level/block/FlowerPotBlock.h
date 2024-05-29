#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    // vIndex: 0, symbol: __gen_??1FlowerPotBlock@@UEAA@XZ
    virtual ~FlowerPotBlock() = default;

    // vIndex: 49, symbol: ?isValidAuxValue@FlowerPotBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@FlowerPotBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@FlowerPotBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 84, symbol: ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar) const;

    // vIndex: 85, symbol: ?mayPlace@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 94, symbol: ?playerWillDestroy@FlowerPotBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol: ?asItemInstance@FlowerPotBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 142, symbol: ?onRemove@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@FlowerPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@FlowerPotBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@FlowerPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 153, symbol: ?canSurvive@FlowerPotBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0FlowerPotBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI FlowerPotBlock(std::string const& nameId, int id);

    // symbol: ?isSupportedBlock@FlowerPotBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isSupportedBlock(class Block const& block);

    // symbol: ?isValidResource@FlowerPotBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isValidResource(class Block const& plant);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_tryPlaceFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI bool _tryPlaceFlower(class Player& player, class BlockPos const& blockPos) const;

    // symbol: ?_tryTakeFlower@FlowerPotBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI bool _tryTakeFlower(class Player& player, class BlockPos const& blockPos) const;

    // symbol:
    // ?_updateFlowerPotEntity@FlowerPotBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVFlowerPotBlockActor@@PEBVBlock@@AEAVActor@@@Z
    MCAPI void _updateFlowerPotEntity(
        class BlockSource&         region,
        class BlockPos const&      blockPos,
        class FlowerPotBlockActor* flowerPotEntity,
        class Block const*         flowerBlock,
        class Actor&               sourceActor
    ) const;

    // NOLINTEND
};
