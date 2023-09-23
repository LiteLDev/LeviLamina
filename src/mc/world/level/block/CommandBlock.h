#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/server/commands/CommandBlockMode.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CommandBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CommandBlock& operator=(CommandBlock const&);
    CommandBlock(CommandBlock const&);
    CommandBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 74, symbol: ?onRedstoneUpdate@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 80, symbol: ?setupRedstoneComponent@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 100, symbol: ?neighborChanged@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 104, symbol: ?asItemInstance@CommandBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 107, symbol: ?getPlacementBlock@CommandBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: ?getComparatorSignal@CommandBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 142, symbol: ?getVariant@CommandBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 145, symbol: ?getMappedFace@CommandBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@CommandBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ?canInstatick@CommandBlock@@UEBA_NXZ
    MCVAPI bool canInstatick() const;

    // symbol: ?hasComparatorSignal@CommandBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isInteractiveBlock@CommandBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol:
    // ??0CommandBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CommandBlockMode@@@Z
    MCAPI CommandBlock(std::string const&, int, ::CommandBlockMode);

    // symbol: ?execute@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void execute(class BlockSource&, class BlockPos const&) const;

    // symbol: ?getMode@CommandBlock@@QEBA?AW4CommandBlockMode@@XZ
    MCAPI ::CommandBlockMode getMode() const;

    // symbol: ?updateBlock@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@W4CommandBlockMode@@_N@Z
    MCAPI void updateBlock(class BlockSource&, class BlockPos const&, ::CommandBlockMode, bool) const;

    // symbol: ?_getCommandBlockActor@CommandBlock@@SAPEAVCommandBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class CommandBlockActor* _getCommandBlockActor(class BlockSource&, class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_execute@CommandBlock@@AEBAXAEAVBlockSource@@AEAVCommandBlockActor@@AEBVBlockPos@@_N@Z
    MCAPI void _execute(class BlockSource&, class CommandBlockActor&, class BlockPos const&, bool) const;

    // symbol: ?_executeChain@CommandBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _executeChain(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_executeChainBlock@CommandBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVCommandBlockActor@@_N@Z
    MCAPI bool _executeChainBlock(class BlockSource&, class BlockPos const&, class CommandBlockActor&, bool) const;

    // symbol: ?_installCircuit@CommandBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _installCircuit(class BlockSource&, class BlockPos const&, bool) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mCBModeMap@CommandBlock@@0PAHA
    MCAPI static int mCBModeMap[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mCBModeMap() { return mCBModeMap; }

    // NOLINTEND
};
