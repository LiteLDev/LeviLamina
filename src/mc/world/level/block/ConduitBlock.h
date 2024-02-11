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

class ConduitBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ConduitBlock& operator=(ConduitBlock const&);
    ConduitBlock(ConduitBlock const&);
    ConduitBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ConduitBlock@@UEAA@XZ
    virtual ~ConduitBlock() = default;

    // vIndex: 56, symbol: ?canContainLiquid@ConduitBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 84, symbol: ?mayPlace@ConduitBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    // symbol: ??0ConduitBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ConduitBlock(std::string const& nameId, int id);

    // NOLINTEND
};
