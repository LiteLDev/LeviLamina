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
    // vIndex: 0
    virtual ~StainedGlassBlock() = default;

    // vIndex: 6
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    MCAPI StainedGlassBlock(std::string const&, int, bool, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
