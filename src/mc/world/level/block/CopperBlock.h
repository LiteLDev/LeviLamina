#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
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

class CopperBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CopperBlock& operator=(CopperBlock const&);
    CopperBlock(CopperBlock const&);
    CopperBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CopperBlock@@UEAA@XZ
    virtual ~CopperBlock();

    // vIndex: 18, symbol: ?onLightningHit@CopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@CopperBlock@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 148, symbol: ?randomTick@CopperBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 151, symbol: ?use@CopperBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol:
    // ??0CopperBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CopperType@@AEBVHashedString@@_N@Z
    MCAPI CopperBlock(std::string const&, int, ::CopperType, class HashedString const&, bool);

    // symbol:
    // ??0CopperBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CopperType@@AEBVHashedString@@22_N@Z
    MCAPI CopperBlock(
        std::string const&,
        int,
        ::CopperType,
        class HashedString const&,
        class HashedString const&,
        class HashedString const&,
        bool
    );

    // NOLINTEND
};
