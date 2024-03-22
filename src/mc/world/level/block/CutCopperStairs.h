#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/StairBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CutCopperStairs : public ::StairBlock {
public:
    // prevent constructor by default
    CutCopperStairs& operator=(CutCopperStairs const&);
    CutCopperStairs(CutCopperStairs const&);
    CutCopperStairs();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CutCopperStairs@@UEAA@XZ
    virtual ~CutCopperStairs() = default;

    // vIndex: 18, symbol: ?onLightningHit@CutCopperStairs@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@CutCopperStairs@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 148, symbol: ?randomTick@CutCopperStairs@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@CutCopperStairs@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol:
    // ??0CutCopperStairs@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@W4CopperType@@AEBVHashedString@@@Z
    MCAPI
    CutCopperStairs(std::string const& nameId, int id, class BlockLegacy const& base, ::CopperType, class HashedString const&);

    // symbol:
    // ??0CutCopperStairs@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVBlockLegacy@@W4CopperType@@AEBVHashedString@@33@Z
    MCAPI
    CutCopperStairs(std::string const& nameId, int id, class BlockLegacy const& base, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
