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

class DiodeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DiodeBlock& operator=(DiodeBlock const&);
    DiodeBlock(DiodeBlock const&);
    DiodeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DiodeBlock@@UEAA@XZ
    virtual ~DiodeBlock();

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

    // vIndex: 46, symbol: ?isSignalSource@DiodeBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 53, symbol: ?getDirectSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 65, symbol: ?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 85, symbol: ?mayPlace@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 129, symbol: ?getVariant@DiodeBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const&) const;

    // vIndex: 130, symbol: ?canSpawnOn@DiodeBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;

    // vIndex: 168, symbol: ?getSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getSignal(class BlockSource&, class BlockPos const&, int) const;

    // vIndex: 169, symbol: ?isLocked@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isLocked(class BlockSource&, class BlockPos const&) const;

    // vIndex: 170, symbol: ?isSameDiode@DiodeBlock@@UEBA_NAEBVBlock@@@Z
    virtual bool isSameDiode(class Block const&) const;

    // vIndex: 171, symbol: ?shouldPrioritize@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool shouldPrioritize(class BlockSource&, class BlockPos const&) const;

    // vIndex: 172, symbol: ?isOn@DiodeBlock@@MEBA_NXZ
    virtual bool isOn() const;

    // vIndex: 173, symbol: ?shouldTurnOn@DiodeBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool shouldTurnOn(class BlockSource&, class BlockPos const&) const;

    // vIndex: 174, symbol: ?getInputSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getInputSignal(class BlockSource&, class BlockPos const&) const;

    // vIndex: 175, symbol: ?isAlternateInput@DiodeBlock@@MEBA_NAEBVBlock@@@Z
    virtual bool isAlternateInput(class Block const&) const;

    // vIndex: 176, symbol: ?getAlternateSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getAlternateSignal(class BlockSource&, class BlockPos const&) const;

    // vIndex: 177, symbol: ?getOutputSignal@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getOutputSignal(class Block const&) const;

    // vIndex: 178, symbol: ?getTurnOffDelay@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOffDelay(class Block const&) const;

    // vIndex: 179, symbol: ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOnDelay(class Block const&) const = 0;

    // vIndex: 180, symbol: ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOnBlock(class Block const*) const = 0;

    // vIndex: 181, symbol: ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOffBlock(class Block const*) const = 0;

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
