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

class MudBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MudBlock& operator=(MudBlock const&);
    MudBlock(MudBlock const&);
    MudBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MudBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        class AABB& outAABB,
        class Block const&,
        class IConstBlockSource const&,
        class BlockPos const& pos
    ) const;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI MudBlock(std::string const& nameId, int id);

    MCAPI static class AABB BLOCK_AABB;

    // NOLINTEND
};
