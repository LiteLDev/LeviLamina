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

class LodestoneBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    LodestoneBlock& operator=(LodestoneBlock const&);
    LodestoneBlock(LodestoneBlock const&);
    LodestoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LodestoneBlock@@UEAA@XZ
    virtual ~LodestoneBlock() = default;

    // symbol:
    // ??0LodestoneBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI LodestoneBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?getBlockActor@LodestoneBlock@@SAPEAVLodestoneBlockActor@@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static class LodestoneBlockActor* getBlockActor(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
