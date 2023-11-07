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

class ObserverBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ObserverBlock& operator=(ObserverBlock const&);
    ObserverBlock(ObserverBlock const&);
    ObserverBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ObserverBlock@@UEAA@XZ
    virtual ~ObserverBlock() = default;

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 32, symbol: __unk_vfn_32
    virtual void __unk_vfn_32();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

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

    // vIndex: 46, symbol: __unk_vfn_46
    virtual void __unk_vfn_46();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 49, symbol: __unk_vfn_49
    virtual void __unk_vfn_49();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: __unk_vfn_51
    virtual void __unk_vfn_51();

    // vIndex: 53, symbol: ?isSignalSource@ObserverBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 56, symbol: ?isValidAuxValue@ObserverBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int) const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 65, symbol:
    // ?shouldConnectToRedstone@ObserverBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 74, symbol: ?onRedstoneUpdate@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 77, symbol: ?movedByPiston@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void movedByPiston(class BlockSource&, class BlockPos const&) const;

    // vIndex: 80, symbol: ?setupRedstoneComponent@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 100, symbol: ?neighborChanged@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 103, symbol:
    // ?spawnResources@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 142, symbol: ?getVariant@ObserverBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 144, symbol: ?getRenderBlock@ObserverBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 145, symbol: ?getMappedFace@ObserverBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 146, symbol: ?getFaceFlip@ObserverBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar, class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 159, symbol: ?onRemove@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ?allowStateMismatchOnPlacement@ObserverBlock@@UEBA_NAEBVBlock@@0@Z
    MCVAPI bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // symbol: ??0ObserverBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ObserverBlock(std::string const&, int);

    // symbol: ?MAX_TICK_DELAY@ObserverBlock@@2UTick@@B
    MCAPI static struct Tick const MAX_TICK_DELAY;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_installCircuit@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N2@Z
    MCAPI void _installCircuit(class BlockSource&, class BlockPos const&, bool, bool) const;

    // symbol: ?_updateState@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVPulseCapacitor@@_N@Z
    MCAPI void _updateState(class BlockSource&, class BlockPos const&, class PulseCapacitor&, bool) const;

    // NOLINTEND
};
