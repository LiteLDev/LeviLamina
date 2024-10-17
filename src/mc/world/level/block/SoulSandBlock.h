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
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        class AABB& outAABB,
        class Block const&,
        class IConstBlockSource const&,
        class BlockPos const& pos
    ) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI SoulSandBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion version) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI bool getCollisionShapeForCamera$(
        class AABB& outAABB,
        class Block const&,
        class IConstBlockSource const&,
        class BlockPos const& pos
    ) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI static class AABB& BLOCK_AABB();

    MCAPI static class BaseGameVersion const& SOUL_SAND_BREAKS_FALLING_BLOCK_VERSION();

    // NOLINTEND
};
