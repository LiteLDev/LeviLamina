#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/AmethystBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BuddingAmethystBlock : public ::AmethystBlock {
public:
    // prevent constructor by default
    BuddingAmethystBlock& operator=(BuddingAmethystBlock const&);
    BuddingAmethystBlock(BuddingAmethystBlock const&);
    BuddingAmethystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BuddingAmethystBlock@@UEAA@XZ
    virtual ~BuddingAmethystBlock() = default;

    // vIndex: 48, symbol: ?isSilentWhenJumpingOff@BuddingAmethystBlock@@UEBA_NXZ
    virtual bool isSilentWhenJumpingOff() const;

    // vIndex: 95, symbol: ?asItemInstance@BuddingAmethystBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 148, symbol: ?randomTick@BuddingAmethystBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol:
    // ??0BuddingAmethystBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BuddingAmethystBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?canBudGrowAtPos@BuddingAmethystBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool canBudGrowAtPos(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
