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

class ChorusFlowerBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ChorusFlowerBlock& operator=(ChorusFlowerBlock const&);
    ChorusFlowerBlock(ChorusFlowerBlock const&);
    ChorusFlowerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChorusFlowerBlock() = default;

    // vIndex: 17
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 55
    virtual bool canBeDestroyedByWaterSpread() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI ChorusFlowerBlock(std::string const& nameId, int id);

    MCAPI static void generatePlant(
        class BlockSource&    region,
        class BlockPos const& target,
        class Random&         random,
        int                   maxHorizontalSpread
    );

    MCAPI static int const BRANCH_DIRECTIONS;

    MCAPI static ushort const DEAD_AGE;

    MCAPI static int const GROW_RATE;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _placeDeadFlower(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _placeGrownFlower(class BlockSource& region, class BlockPos const& pos, int newAge) const;

    MCAPI static void _growTreeRecursive(
        class BlockSource&    region,
        class BlockPos const& current,
        class BlockPos const& startPos,
        class Random&         random,
        int                   maxHorizontalSpread,
        int                   depth
    );

    // NOLINTEND
};
