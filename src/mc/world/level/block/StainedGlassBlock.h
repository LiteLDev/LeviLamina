#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    virtual bool getCollisionShapeForCamera(
        class AABB&                    outAABB,
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos
    ) const;

    // vIndex: 25
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    MCAPI StainedGlassBlock(std::string const& nameId, int id, bool doesDrops, bool doesNotCollideWithCamera);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, bool doesDrops, bool doesNotCollideWithCamera);

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI bool canConnect$(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    MCAPI bool getCollisionShapeForCamera$(
        class AABB&                    outAABB,
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos
    ) const;

    MCAPI static class BaseGameVersion const& STAINED_GLASS_DOESNT_BREAK_FALLING_BLOCK_VERSION();

    // NOLINTEND
};
