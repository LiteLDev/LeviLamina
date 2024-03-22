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

class ChorusFlowerBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ChorusFlowerBlock& operator=(ChorusFlowerBlock const&);
    ChorusFlowerBlock(ChorusFlowerBlock const&);
    ChorusFlowerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChorusFlowerBlock@@UEAA@XZ
    virtual ~ChorusFlowerBlock() = default;

    // vIndex: 17, symbol: ?onProjectileHit@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 23, symbol: ?canProvideSupport@ChorusFlowerBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 32, symbol: ?isWaterBlocking@ChorusFlowerBlock@@UEBA_NXZ
    virtual bool isWaterBlocking() const;

    // vIndex: 54, symbol: ?canBeDestroyedByWaterSpread@ChorusFlowerBlock@@UEBA_NXZ
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 56, symbol: ?canContainLiquid@ChorusFlowerBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 85, symbol: ?mayPlace@ChorusFlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 128, symbol: ?getVariant@ChorusFlowerBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 147, symbol: ?tick@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 148, symbol: ?randomTick@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153, symbol: ?canSurvive@ChorusFlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0ChorusFlowerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ChorusFlowerBlock(std::string const& nameId, int id);

    // symbol: ?generatePlant@ChorusFlowerBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@H@Z
    MCAPI static void generatePlant(
        class BlockSource&    region,
        class BlockPos const& target,
        class Random&         random,
        int                   maxHorizontalSpread
    );

    // symbol: ?BRANCH_DIRECTIONS@ChorusFlowerBlock@@2HB
    MCAPI static int const BRANCH_DIRECTIONS;

    // symbol: ?DEAD_AGE@ChorusFlowerBlock@@2GB
    MCAPI static ushort const DEAD_AGE;

    // symbol: ?GROW_RATE@ChorusFlowerBlock@@2HB
    MCAPI static int const GROW_RATE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeDeadFlower@ChorusFlowerBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _placeDeadFlower(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_placeGrownFlower@ChorusFlowerBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI void _placeGrownFlower(class BlockSource& region, class BlockPos const& pos, int newAge) const;

    // symbol: ?_growTreeRecursive@ChorusFlowerBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@1AEAVRandom@@HH@Z
    MCAPI static void _growTreeRecursive(
        class BlockSource&    region,
        class BlockPos const& current,
        class BlockPos const& startPos,
        class Random&         random,
        int                   maxHorizontalSpread,
        int                   depth
    );

    // NOLINTEND
};
