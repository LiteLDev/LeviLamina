#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TrapDoorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperTrapDoorBlock : public ::TrapDoorBlock {
public:
    // prevent constructor by default
    CopperTrapDoorBlock& operator=(CopperTrapDoorBlock const&);
    CopperTrapDoorBlock(CopperTrapDoorBlock const&);
    CopperTrapDoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CopperTrapDoorBlock@@UEAA@XZ
    virtual ~CopperTrapDoorBlock() = default;

    // vIndex: 18, symbol: ?onLightningHit@CopperTrapDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@CopperTrapDoorBlock@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 148, symbol: ?randomTick@CopperTrapDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 151, symbol: ?use@CopperTrapDoorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // symbol:
    // ??0CopperTrapDoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CopperType@@AEBVHashedString@@@Z
    MCAPI CopperTrapDoorBlock(std::string const&, int, ::CopperType, class HashedString const&);

    // symbol:
    // ??0CopperTrapDoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CopperType@@AEBVHashedString@@22@Z
    MCAPI
    CopperTrapDoorBlock(std::string const&, int, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
