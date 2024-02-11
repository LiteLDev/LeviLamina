#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HayBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    HayBlock& operator=(HayBlock const&);
    HayBlock(HayBlock const&);
    HayBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HayBlock@@UEAA@XZ
    virtual ~HayBlock() = default;

    // vIndex: 96, symbol: ?asItemInstance@HayBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 129, symbol: ?getVariant@HayBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 148, symbol: ?onFallOn@HayBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@M@Z
    virtual void
    onFallOn(class BlockSource& region, class BlockPos const& pos, class Actor& entity, float fallDistance) const;

    // symbol: ??0HayBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI HayBlock(std::string const& nameId, int id);

    // NOLINTEND
};
