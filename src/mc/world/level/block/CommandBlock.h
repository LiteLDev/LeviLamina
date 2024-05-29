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

    // vIndex: 65, symbol: ?onRedstoneUpdate@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@CommandBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 97, symbol: ?getPlacementBlock@CommandBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@CommandBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@CommandBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 113, symbol: ?canInstatick@CommandBlock@@UEBA_NXZ
    virtual bool canInstatick() const;

    // vIndex: 128, symbol: ?getVariant@CommandBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@CommandBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@CommandBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@CommandBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@CommandBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol:
    // ??0CommandBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CommandBlockMode@@@Z
    MCAPI CommandBlock(std::string const& nameId, int id, ::CommandBlockMode mode);

    // symbol: ?execute@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void execute(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?getMode@CommandBlock@@QEBA?AW4CommandBlockMode@@XZ
    MCAPI ::CommandBlockMode getMode() const;

    // symbol: ?updateBlock@CommandBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@W4CommandBlockMode@@_N@Z
    MCAPI void
    updateBlock(class BlockSource& region, class BlockPos const& pos, ::CommandBlockMode newMode, bool conditional)
        const;

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

    // private:
    // NOLINTBEGIN
    // symbol: ?mCBModeMap@CommandBlock@@0PAHA
    MCAPI static int mCBModeMap[];

    // NOLINTEND
};
