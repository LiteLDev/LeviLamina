#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/DoorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperDoorBlock : public ::DoorBlock {
public:
    // prevent constructor by default
    CopperDoorBlock& operator=(CopperDoorBlock const&);
    CopperDoorBlock(CopperDoorBlock const&);
    CopperDoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CopperDoorBlock@@UEAA@XZ
    virtual ~CopperDoorBlock() = default;

    // vIndex: 18, symbol: ?onLightningHit@CopperDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;

    // vIndex: 26, symbol: ?tryGetCopperBehavior@CopperDoorBlock@@UEBAPEBVCopperBehavior@@XZ
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 148, symbol: ?randomTick@CopperDoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 151, symbol: ?use@CopperDoorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // symbol:
    // ??0CopperDoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4DoorType@DoorBlock@@W4CopperType@@AEBVHashedString@@@Z
    MCAPI CopperDoorBlock(std::string const&, int, ::DoorBlock::DoorType, ::CopperType, class HashedString const&);

    // symbol:
    // ??0CopperDoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4DoorType@DoorBlock@@W4CopperType@@AEBVHashedString@@33@Z
    MCAPI
    CopperDoorBlock(std::string const&, int, ::DoorBlock::DoorType, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
