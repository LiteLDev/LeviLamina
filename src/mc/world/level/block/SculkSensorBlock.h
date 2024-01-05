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

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 23, symbol: ?canProvideSupport@SculkSensorBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 46, symbol: ?isSignalSource@SculkSensorBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@SculkSensorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@SculkSensorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar) const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 134, symbol:
    // ?animateTickBedrockLegacy@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 137, symbol: ?getLightEmission@SculkSensorBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 146, symbol: ?onStandOn@SculkSensorBlock@@UEBAXAEAVEntityContext@@AEBVBlockPos@@@Z
    virtual void onStandOn(class EntityContext& entityContext, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?onPlace@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@SculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 161, symbol: ?getEmissiveBrightness@SculkSensorBlock@@UEBA?AUBrightness@@AEBVBlock@@@Z
    virtual struct Brightness getEmissiveBrightness(class Block const& block) const;

    // vIndex: 164, symbol: ?getResourceItem@SculkSensorBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 165, symbol: ?getResourceCount@SculkSensorBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;

    // vIndex: 166, symbol: ?getSilkTouchItemInstance@SculkSensorBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // symbol: ?canBeSilkTouched@SculkSensorBlock@@UEBA_NXZ
    MCVAPI bool canBeSilkTouched() const;

    // symbol: ?hasComparatorSignal@SculkSensorBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ??0SculkSensorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SculkSensorBlock(std::string const& nameId, int);

    // symbol:
    // ??0SculkSensorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BlockActorType@@H@Z
    MCAPI SculkSensorBlock(std::string const& nameId, int, ::BlockActorType type, int);

    // symbol: ?isActive@SculkSensorBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isActive(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?isOnCooldown@SculkSensorBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isOnCooldown(class BlockSource& region, class BlockPos const& pos);

    // symbol: ?setActivePhase@SculkSensorBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@HH@Z
    MCAPI static void setActivePhase(class BlockSource&, class BlockPos const&, class Actor*, int, int);

    // NOLINTEND
};
