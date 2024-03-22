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

    // vIndex: 46, symbol: ?isSignalSource@ObserverBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 49, symbol: ?isValidAuxValue@ObserverBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@ObserverBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 68, symbol: ?movedByPiston@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 128, symbol: ?getVariant@ObserverBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 130, symbol: ?getRenderBlock@ObserverBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 131, symbol: ?getMappedFace@ObserverBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@ObserverBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 142, symbol: ?onRemove@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@ObserverBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152, symbol: ?allowStateMismatchOnPlacement@ObserverBlock@@UEBA_NAEBVBlock@@0@Z
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    // symbol: ??0ObserverBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ObserverBlock(std::string const& nameId, int id);

    // symbol: ?MAX_TICK_DELAY@ObserverBlock@@2UTick@@B
    MCAPI static struct Tick const MAX_TICK_DELAY;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_installCircuit@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N2@Z
    MCAPI void
    _installCircuit(class BlockSource& region, class BlockPos const& pos, bool calledFromLoad, bool turnOn) const;

    // symbol: ?_updateState@ObserverBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVPulseCapacitor@@_N@Z
    MCAPI void
    _updateState(class BlockSource& region, class BlockPos const& pos, class PulseCapacitor& component, bool turnOn)
        const;

    // NOLINTEND
};
