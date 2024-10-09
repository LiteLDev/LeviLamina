#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MangrovePropaguleBlock : public ::BushBlock {
public:
    // prevent constructor by default
    MangrovePropaguleBlock& operator=(MangrovePropaguleBlock const&);
    MangrovePropaguleBlock(MangrovePropaguleBlock const&);
    MangrovePropaguleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MangrovePropaguleBlock() = default;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool onFertilized(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          actor,
        ::FertilizerType      fertilizerType
    ) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI MangrovePropaguleBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool _isFullyGrown(class Block const& block) const;

    MCAPI bool _isHanging(class Block const& block) const;

    // NOLINTEND
};
