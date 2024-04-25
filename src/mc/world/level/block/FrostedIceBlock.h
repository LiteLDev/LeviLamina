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

class FrostedIceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FrostedIceBlock& operator=(FrostedIceBlock const&);
    FrostedIceBlock(FrostedIceBlock const&);
    FrostedIceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FrostedIceBlock@@UEAA@XZ
    virtual ~FrostedIceBlock() = default;

    // vIndex: 89, symbol: ?breaksFallingBlocks@FrostedIceBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 94, symbol: ?playerWillDestroy@FrostedIceBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol: ?asItemInstance@FrostedIceBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 145, symbol: ?onPlace@FrostedIceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@FrostedIceBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0FrostedIceBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI FrostedIceBlock(std::string const& nameId, int id, bool packed);

    // symbol: ?_slightlyMelt@FrostedIceBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@_N@Z
    MCAPI void
    _slightlyMelt(class BlockSource& region, class BlockPos const& pos, class Random& random, bool propagate) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?MAX_AGE@FrostedIceBlock@@0HB
    MCAPI static int const MAX_AGE;

    // symbol: ?MIN_NEIGHBORS@FrostedIceBlock@@0HB
    MCAPI static int const MIN_NEIGHBORS;

    // NOLINTEND
};
