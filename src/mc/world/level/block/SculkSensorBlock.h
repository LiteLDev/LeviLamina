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

class SculkSensorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkSensorBlock& operator=(SculkSensorBlock const&);
    SculkSensorBlock(SculkSensorBlock const&);
    SculkSensorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkSensorBlock@@UEAA@XZ
    virtual ~SculkSensorBlock() = default;

    // vIndex: 19, symbol:
    // ?liquidCanFlowIntoFromDirection@SculkSensorBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool
    liquidCanFlowIntoFromDirection(uchar flowIntoFacing, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    // vIndex: 23, symbol: ?canProvideSupport@SculkSensorBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 46, symbol: ?isSignalSource@SculkSensorBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@SculkSensorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@SculkSensorBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@SculkSensorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar) const;

    // vIndex: 133, symbol:
    // ?animateTickBedrockLegacy@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 136, symbol: ?getLightEmission@SculkSensorBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 144, symbol: ?onStandOn@SculkSensorBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entityContext, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 158, symbol: ?getEmissiveBrightness@SculkSensorBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getEmissiveBrightness(class Block const& block) const;

    // symbol: ??0SculkSensorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SculkSensorBlock(std::string const& nameId, int id);

    // symbol:
    // ??0SculkSensorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BlockActorType@@H@Z
    MCAPI SculkSensorBlock(std::string const& nameId, int id, ::BlockActorType type, int);

    // symbol: ?isActive@SculkSensorBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isActive(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?isOnCooldown@SculkSensorBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isOnCooldown(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?setActivePhase@SculkSensorBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@HH@Z
    MCAPI static void setActivePhase(class BlockSource&, class BlockPos const&, class Actor*, int, int);

    // NOLINTEND
};
