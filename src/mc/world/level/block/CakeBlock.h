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

class CakeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CakeBlock& operator=(CakeBlock const&);
    CakeBlock(CakeBlock const&);
    CakeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CakeBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI CakeBlock(std::string const& nameId, int id);

    MCAPI static void removeCakeSlice(
        class Player&         player,
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const*    cakeBlock
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    checkIsPathable$(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
