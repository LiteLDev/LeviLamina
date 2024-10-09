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

class TurtleEggBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    TurtleEggBlock& operator=(TurtleEggBlock const&);
    TurtleEggBlock(TurtleEggBlock const&);
    TurtleEggBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TurtleEggBlock() = default;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 65
    virtual void
    transformOnFall(class BlockSource& region, class BlockPos const& pos, class Actor* actor, float fallDistance) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource&, class BlockPos const& pos, class Actor& entity) const;

    MCAPI TurtleEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Block const&
    _decreaseEggs(class BlockSource& region, class BlockPos const& pos, uint count, bool brokenWithSilkTouch);

    MCAPI static void _destroyEgg(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor&          actor,
        int                   randomness,
        bool                  brokenWithSilkTouch
    );

    // NOLINTEND
};
