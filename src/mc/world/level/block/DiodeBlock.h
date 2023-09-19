#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DiodeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DiodeBlock& operator=(DiodeBlock const&);
    DiodeBlock(DiodeBlock const&);
    DiodeBlock();

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

    // vIndex: 53, symbol: ?isSignalSource@DiodeBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 61, symbol: ?getDirectSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 75, symbol: ?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 84, symbol: __unk_vfn_84
    virtual void __unk_vfn_84();

    // vIndex: 94, symbol: ?mayPlace@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: ?getPlacementBlock@DiodeBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 124, symbol: __unk_vfn_124
    virtual void __unk_vfn_124();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 128, symbol: __unk_vfn_128
    virtual void __unk_vfn_128();

    // vIndex: 131, symbol: __unk_vfn_131
    virtual void __unk_vfn_131();

    // vIndex: 143, symbol: ?getVariant@DiodeBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 144, symbol: ?canSpawnOn@DiodeBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 153, symbol: __unk_vfn_153
    virtual void __unk_vfn_153();

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

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 175, symbol: ?canSurvive@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 183, symbol: __unk_vfn_183
    virtual void __unk_vfn_183();

    // vIndex: 192, symbol: ?getSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getSignal(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 193, symbol: ?isLocked@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isLocked(class BlockSource&, class BlockPos const&) const;

    // vIndex: 194, symbol: ?isSameDiode@DiodeBlock@@UEBA_NAEBVBlock@@@Z
    virtual bool isSameDiode(class Block const&) const;

    // vIndex: 195, symbol: ?shouldPrioritize@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool shouldPrioritize(class BlockSource&, class BlockPos const&) const;

    // vIndex: 196, symbol: ?isOn@DiodeBlock@@MEBA_NXZ
    virtual bool isOn() const;

    // vIndex: 197, symbol: ?shouldTurnOn@DiodeBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool shouldTurnOn(class BlockSource&, class BlockPos const&) const;

    // vIndex: 198, symbol: ?getInputSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getInputSignal(class BlockSource&, class BlockPos const&) const;

    // vIndex: 199, symbol: ?isAlternateInput@DiodeBlock@@MEBA_NAEBVBlock@@@Z
    virtual bool isAlternateInput(class Block const&) const;

    // vIndex: 200, symbol: ?getAlternateSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getAlternateSignal(class BlockSource&, class BlockPos const&) const;

    // vIndex: 201, symbol: ?getOutputSignal@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getOutputSignal(class Block const&) const;

    // vIndex: 202, symbol: ?getTurnOffDelay@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOffDelay(class Block const&) const;

    // vIndex: 203, symbol: ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOnDelay(class Block const&) const = 0;

    // vIndex: 204, symbol: ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOnBlock(class Block const*) const = 0;

    // vIndex: 205, symbol: ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOffBlock(class Block const*) const = 0;

    // symbol: ??1DiodeBlock@@UEAA@XZ
    MCVAPI ~DiodeBlock();

    // symbol: ??0DiodeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI DiodeBlock(std::string const&, int, bool);

    // symbol: ?isDiode@DiodeBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDiode(class Block const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?getAlternateSignalAt@DiodeBlock@@IEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI int getAlternateSignalAt(class BlockSource&, class BlockPos const&, int) const;

    // NOLINTEND
};
