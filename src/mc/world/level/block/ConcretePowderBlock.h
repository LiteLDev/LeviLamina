#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ConcretePowderBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    ConcretePowderBlock& operator=(ConcretePowderBlock const&);
    ConcretePowderBlock(ConcretePowderBlock const&);
    ConcretePowderBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ConcretePowderBlock@@UEAA@XZ
    virtual ~ConcretePowderBlock() = default;

    // vIndex: 92, symbol: ?neighborChanged@ConcretePowderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@ConcretePowderBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 107, symbol: ?shouldStopFalling@ConcretePowderBlock@@UEBA_NAEAVActor@@@Z
    virtual bool shouldStopFalling(class Actor& entity) const;

    // vIndex: 145, symbol: ?onPlace@ConcretePowderBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getDustColor@ConcretePowderBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164, symbol:
    // ?getDustParticleName@ConcretePowderBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string getDustParticleName(class Block const&) const;

    // symbol: ??0ConcretePowderBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ConcretePowderBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryTouchWater@ConcretePowderBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@V?$optional@VHashedString@@@std@@@Z
    MCAPI bool _tryTouchWater(class BlockSource&, class BlockPos const&, std::optional<class HashedString>) const;

    // NOLINTEND
};
