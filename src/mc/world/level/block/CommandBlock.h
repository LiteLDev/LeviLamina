#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/server/commands/CommandBlockMode.h"
#include "mc/world/Direction.h"
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
    // vIndex: 0, symbol: __gen_??1CommandBlock@@UEAA@XZ
    virtual ~CommandBlock() = default;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

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

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 65, symbol: ?onRedstoneUpdate@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 71, symbol: ?setupRedstoneComponent@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 92, symbol: ?neighborChanged@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96, symbol: ?asItemInstance@CommandBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 98, symbol: ?getPlacementBlock@CommandBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 112, symbol: ?getComparatorSignal@CommandBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@CommandBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132, symbol: ?getMappedFace@CommandBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 147, symbol: ?onPlace@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@CommandBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // symbol: ?canInstatick@CommandBlock@@UEBA_NXZ
    MCVAPI bool canInstatick() const;

    // symbol: ?hasComparatorSignal@CommandBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isInteractiveBlock@CommandBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol:
    // ??0CommandBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CommandBlockMode@@@Z
    MCAPI CommandBlock(std::string const& nameId, int, ::CommandBlockMode mode);

    // symbol: ?execute@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void execute(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?getMode@CommandBlock@@QEBA?AW4CommandBlockMode@@XZ
    MCAPI ::CommandBlockMode getMode() const;

    // symbol: ?updateBlock@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@W4CommandBlockMode@@_N@Z
    MCAPI void
    updateBlock(class BlockSource& region, class BlockPos const& pos, ::CommandBlockMode newMode, bool conditional)
        const;

    // symbol: ?_getCommandBlockActor@CommandBlock@@SAPEAVCommandBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class CommandBlockActor* _getCommandBlockActor(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_execute@CommandBlock@@AEBAXAEAVBlockSource@@AEAVCommandBlockActor@@AEBVBlockPos@@_N@Z
    MCAPI void
    _execute(class BlockSource& region, class CommandBlockActor& entity, class BlockPos const& pos, bool commandSet)
        const;

    // symbol: ?_executeChain@CommandBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _executeChain(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_executeChainBlock@CommandBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVCommandBlockActor@@_N@Z
    MCAPI bool _executeChainBlock(
        class BlockSource&       region,
        class BlockPos const&    pos,
        class CommandBlockActor& blockActor,
        bool                     fromTickQueue
    ) const;

    // symbol: ?_installCircuit@CommandBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos, bool bLoading) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mCBModeMap@CommandBlock@@0PAHA
    MCAPI static int mCBModeMap[];

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mCBModeMap() { return mCBModeMap; }

    // NOLINTEND
};
