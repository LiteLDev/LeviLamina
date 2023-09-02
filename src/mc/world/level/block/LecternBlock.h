#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LecternBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    LecternBlock& operator=(LecternBlock const&) = delete;
    LecternBlock(LecternBlock const&)            = delete;
    LecternBlock()                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 25, symbol: ?canProvideSupport@LecternBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

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

    // vIndex: 53, symbol: ?isSignalSource@LecternBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 64, symbol: ?canContainLiquid@LecternBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 66, symbol: ?shouldConnectToRedstone@LecternBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 71, symbol: ?checkIsPathable@LecternBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 81, symbol: ?setupRedstoneComponent@LecternBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 103, symbol: ?playerWillDestroy@LecternBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool playerWillDestroy(class Player&, class BlockPos const&, class Block const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: ?getPlacementBlock@LecternBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 111, symbol: ?attack@LecternBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player*, class BlockPos const&) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 126, symbol: ?getComparatorSignal@LecternBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 165, symbol: ?onPlace@LecternBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: ?tick@LecternBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 171, symbol: __unk_vfn_171
    virtual void __unk_vfn_171();

    // vIndex: 173, symbol: ?use@LecternBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // symbol: ?hasComparatorSignal@LecternBlock@@UEBA_NXZ
    MCVAPI bool hasComparatorSignal() const;

    // symbol: ?isInteractiveBlock@LecternBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0LecternBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI LecternBlock(std::string const&, int);

    // symbol: ?emitRedstonePulse@LecternBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void emitRedstonePulse(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dropBook@LecternBlock@@AEBA_NAEAVPlayer@@AEBVBlockPos@@@Z
    MCAPI bool _dropBook(class Player&, class BlockPos const&) const;

    // NOLINTEND
};
