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

class CoralBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CoralBlock& operator=(CoralBlock const&);
    CoralBlock(CoralBlock const&);
    CoralBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CoralBlock@@UEAA@XZ
    virtual ~CoralBlock() = default;

    // vIndex: 87, symbol: ?mayPlaceOn@CoralBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93, symbol: ?neighborChanged@CoralBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 146, symbol: ?onPlace@CoralBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?tick@CoralBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0CoralBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CoralBlock(std::string const& nameId, int id);

    // symbol: ?DEAD_CORAL_BIT@CoralBlock@@2HB
    MCAPI static int const DEAD_CORAL_BIT;

    // symbol: ?DEAD_CORAL_OFFSET@CoralBlock@@2HB
    MCAPI static int const DEAD_CORAL_OFFSET;

    // NOLINTEND
};
