#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockActorType.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FurnaceBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    FurnaceBlock& operator=(FurnaceBlock const&);
    FurnaceBlock(FurnaceBlock const&);
    FurnaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FurnaceBlock@@UEAA@XZ
    virtual ~FurnaceBlock();

    // vIndex: 30, symbol: ?isContainerBlock@FurnaceBlock@@UEBA_NXZ
    virtual bool isContainerBlock() const;

    // vIndex: 31, symbol: ?isCraftingBlock@FurnaceBlock@@UEBA_NXZ
    virtual bool isCraftingBlock() const;

    // vIndex: 95, symbol: ?asItemInstance@FurnaceBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@FurnaceBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@FurnaceBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 131, symbol: ?getMappedFace@FurnaceBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@FurnaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 142, symbol: ?onRemove@FurnaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@FurnaceBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@FurnaceBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0FurnaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI FurnaceBlock(std::string const& nameId, int id, bool lit);

    // symbol: ?setLit@FurnaceBlock@@SAX_NAEAVBlockSource@@AEBVBlockPos@@W4BlockActorType@@AEBVBlock@@4@Z
    MCAPI static void setLit(
        bool                  lit,
        class BlockSource&    region,
        class BlockPos const& pos,
        ::BlockActorType      blockActorType,
        class Block const&    unlitFurnace,
        class Block const&    litFurnace
    );

    // NOLINTEND
};
