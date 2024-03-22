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

    // vIndex: 46, symbol: ?isSignalSource@DiodeBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 53, symbol: ?getDirectSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 85, symbol: ?mayPlace@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 128, symbol: ?getVariant@DiodeBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 129, symbol: ?canSpawnOn@DiodeBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 153, symbol: ?canSurvive@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getSignal@DiodeBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    virtual int getSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 164, symbol: ?isLocked@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool isLocked(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 165, symbol: ?isSameDiode@DiodeBlock@@UEBA_NAEBVBlock@@@Z
    virtual bool isSameDiode(class Block const& block) const;

    // vIndex: 166, symbol: ?shouldPrioritize@DiodeBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool shouldPrioritize(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167, symbol: ?isOn@DiodeBlock@@MEBA_NXZ
    virtual bool isOn() const;

    // vIndex: 168, symbol: ?shouldTurnOn@DiodeBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool shouldTurnOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 169, symbol: ?getInputSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170, symbol: ?isAlternateInput@DiodeBlock@@MEBA_NAEBVBlock@@@Z
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 171, symbol: ?getAlternateSignal@DiodeBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getAlternateSignal(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 172, symbol: ?getOutputSignal@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getOutputSignal(class Block const& block) const;

    // vIndex: 173, symbol: ?getTurnOffDelay@DiodeBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOffDelay(class Block const& block) const;

    // vIndex: 174, symbol: ?getTurnOnDelay@RepeaterBlock@@MEBAHAEBVBlock@@@Z
    virtual int getTurnOnDelay(class Block const& block) const = 0;

    // vIndex: 175, symbol: ?getOnBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOnBlock(class Block const* block) const = 0;

    // vIndex: 176, symbol: ?getOffBlock@RepeaterBlock@@MEBAPEBVBlock@@PEBV2@@Z
    virtual class Block const* getOffBlock(class Block const* block) const = 0;

    // symbol: ??0DiodeBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI DiodeBlock(std::string const& nameId, int id, bool on);

    // symbol: ?isDiode@DiodeBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDiode(class Block const& block);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?getAlternateSignalAt@DiodeBlock@@IEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
    MCAPI int getAlternateSignalAt(class BlockSource& region, class BlockPos const& pos, int facing) const;

    // NOLINTEND
};
