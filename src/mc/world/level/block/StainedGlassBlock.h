#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
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

class StainedGlassBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    StainedGlassBlock& operator=(StainedGlassBlock const&);
    StainedGlassBlock(StainedGlassBlock const&);
    StainedGlassBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StainedGlassBlock@@UEAA@XZ
    virtual ~StainedGlassBlock() = default;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@StainedGlassBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 25, symbol: ?canConnect@StainedGlassBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@StainedGlassBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // symbol: ??0StainedGlassBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N1@Z
    MCAPI StainedGlassBlock(std::string const&, int, bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION@StainedGlassBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
