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

class TurtleEggBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TurtleEggBlock& operator=(TurtleEggBlock const&);
    TurtleEggBlock(TurtleEggBlock const&);
    TurtleEggBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TurtleEggBlock@@UEAA@XZ
    virtual ~TurtleEggBlock() = default;

    // vIndex: 23, symbol: ?canProvideSupport@TurtleEggBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@TurtleEggBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@TurtleEggBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@TurtleEggBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 64, symbol: ?transformOnFall@TurtleEggBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z
    virtual void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* actor, float fallDistance) const;

    // vIndex: 84, symbol: ?mayPlace@TurtleEggBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 94, symbol: ?playerWillDestroy@TurtleEggBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@TurtleEggBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 145, symbol: ?onPlace@TurtleEggBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@TurtleEggBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@TurtleEggBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 162, symbol: ?entityInside@TurtleEggBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource&, class BlockPos const& pos, class Actor& entity) const;

    // symbol: ??0TurtleEggBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI TurtleEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_decreaseEggs@TurtleEggBlock@@CAAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@I_N@Z
    MCAPI static class Block const&
    _decreaseEggs(class BlockSource& region, class BlockPos const& pos, uint count, bool brokenWithSilkTouch);

    // symbol: ?_destroyEgg@TurtleEggBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@H_N@Z
    MCAPI static void _destroyEgg(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor&          actor,
        int                   randomness,
        bool                  brokenWithSilkTouch
    );

    // NOLINTEND
};
