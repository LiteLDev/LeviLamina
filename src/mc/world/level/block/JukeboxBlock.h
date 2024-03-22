#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class JukeboxBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    JukeboxBlock& operator=(JukeboxBlock const&);
    JukeboxBlock(JukeboxBlock const&);
    JukeboxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1JukeboxBlock@@UEAA@XZ
    virtual ~JukeboxBlock() = default;

    // vIndex: 46, symbol: ?isSignalSource@JukeboxBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@JukeboxBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@JukeboxBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@JukeboxBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@JukeboxBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 142, symbol: ?onRemove@JukeboxBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145, symbol: ?onPlace@JukeboxBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 151, symbol: ?use@JukeboxBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0JukeboxBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI JukeboxBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dropRecording@JukeboxBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _dropRecording(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_installCircuit@JukeboxBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
