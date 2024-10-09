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

class FarmBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FarmBlock& operator=(FarmBlock const&);
    FarmBlock(FarmBlock const&);
    FarmBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FarmBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 65
    virtual void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* actor, float fallDistance) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI FarmBlock(std::string const& nameId, int id);

    MCAPI static class AABB BLOCK_AABB;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _becomeDirt(class BlockSource& region, class BlockPos const& pos, class Actor* entitySource) const;

    // NOLINTEND
};
