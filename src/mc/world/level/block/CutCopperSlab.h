#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/SlabBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CutCopperSlab : public ::SlabBlock {
public:
    // prevent constructor by default
    CutCopperSlab& operator=(CutCopperSlab const&);
    CutCopperSlab(CutCopperSlab const&);
    CutCopperSlab();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CutCopperSlab@@UEAA@XZ
    virtual ~CutCopperSlab() = default;

    // vIndex: 18, symbol: ?onLightningHit@CutCopperSlab@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@CutCopperSlab@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 148, symbol: ?randomTick@CutCopperSlab@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@CutCopperSlab@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol:
    // ??0CutCopperSlab@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NAEBVHashedString@@W4CopperType@@2@Z
    MCAPI
    CutCopperSlab(std::string const& nameId, int id, bool fullSize, class HashedString const& baseSlab, ::CopperType, class HashedString const&);

    // symbol:
    // ??0CutCopperSlab@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NAEBVHashedString@@W4CopperType@@222@Z
    MCAPI
    CutCopperSlab(std::string const& nameId, int id, bool fullSize, class HashedString const& baseSlab, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
