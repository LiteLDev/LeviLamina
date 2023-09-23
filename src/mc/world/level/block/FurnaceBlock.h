#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
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

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 104, symbol: ?asItemInstance@FurnaceBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 106, symbol: __unk_vfn_106
    virtual void __unk_vfn_106();

    // vIndex: 122, symbol: __unk_vfn_122
    virtual void __unk_vfn_122();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: ?getComparatorSignal@FurnaceBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 127, symbol: __unk_vfn_127
    virtual void __unk_vfn_127();

    // vIndex: 130, symbol: __unk_vfn_130
    virtual void __unk_vfn_130();

    // vIndex: 145, symbol: ?getMappedFace@FurnaceBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 147, symbol: ?animateTickBedrockLegacy@FurnaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 159, symbol: ?onRemove@FurnaceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@FurnaceBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 185, symbol: ?getResourceItem@FurnaceBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 187, symbol: ?getSilkTouchItemInstance@FurnaceBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;

    // symbol: ?hasComparatorSignal@FurnaceBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isContainerBlock@FurnaceBlock@@UEBA_NXZ
    MCVAPI bool isContainerBlock() const;

    // symbol: ?isCraftingBlock@FurnaceBlock@@UEBA_NXZ
    MCVAPI bool isCraftingBlock() const;

    // symbol: ?isInteractiveBlock@FurnaceBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0FurnaceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI FurnaceBlock(std::string const&, int, bool);

    // symbol: ?setLit@FurnaceBlock@@SAX_NAEAVBlockSource@@AEBVBlockPos@@W4BlockActorType@@AEBVBlock@@4@Z
    MCAPI static void
    setLit(bool, class BlockSource&, class BlockPos const&, ::BlockActorType, class Block const&, class Block const&);

    // NOLINTEND
};
