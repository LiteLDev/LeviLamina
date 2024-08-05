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

class SoulSandBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SoulSandBlock& operator=(SoulSandBlock const&);
    SoulSandBlock(SoulSandBlock const&);
    SoulSandBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SoulSandBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI SoulSandBlock(std::string const& nameId, int id);

    MCAPI static class AABB BLOCK_AABB;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BaseGameVersion const SOUL_SAND_BREAKS_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
