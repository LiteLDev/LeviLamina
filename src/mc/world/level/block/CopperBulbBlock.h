#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
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

class CopperBulbBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CopperBulbBlock& operator=(CopperBulbBlock const&);
    CopperBulbBlock(CopperBulbBlock const&);
    CopperBulbBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CopperBulbBlock@@UEAA@XZ
    virtual ~CopperBulbBlock() = default;

    // vIndex: 18, symbol: ?onLightningHit@CopperBulbBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@CopperBulbBlock@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@CopperBulbBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@CopperBulbBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@CopperBulbBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@CopperBulbBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@CopperBulbBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 136, symbol: ?getLightEmission@CopperBulbBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 145, symbol: ?onPlace@CopperBulbBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 147, symbol: ?tick@CopperBulbBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 148, symbol: ?randomTick@CopperBulbBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 151, symbol: ?use@CopperBulbBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // symbol:
    // ??0CopperBulbBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HUBrightness@@W4CopperType@@AEBVHashedString@@@Z
    MCAPI CopperBulbBlock(std::string const&, int, struct Brightness, ::CopperType, class HashedString const&);

    // symbol:
    // ??0CopperBulbBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HUBrightness@@W4CopperType@@AEBVHashedString@@33@Z
    MCAPI
    CopperBulbBlock(std::string const&, int, struct Brightness, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
