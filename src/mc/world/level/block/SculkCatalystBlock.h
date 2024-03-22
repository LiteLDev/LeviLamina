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

class SculkCatalystBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkCatalystBlock& operator=(SculkCatalystBlock const&);
    SculkCatalystBlock(SculkCatalystBlock const&);
    SculkCatalystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SculkCatalystBlock@@UEAA@XZ
    virtual ~SculkCatalystBlock() = default;

    // vIndex: 128, symbol: ?getVariant@SculkCatalystBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 147, symbol: ?tick@SculkCatalystBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol:
    // ??0SculkCatalystBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI SculkCatalystBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?bloom@SculkCatalystBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAVRandom@@@Z
    MCAPI static void
    bloom(class BlockSource& region, class BlockPos const& pos, class Block const& block, class Random&);

    // NOLINTEND
};
