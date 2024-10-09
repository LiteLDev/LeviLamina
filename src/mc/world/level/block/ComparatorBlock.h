#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ComparatorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    ComparatorBlock& operator=(ComparatorBlock const&);
    ComparatorBlock(ComparatorBlock const&);
    ComparatorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComparatorBlock() = default;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 54
    virtual int getDirectSignal(class BlockSource& region, class BlockPos const& pos, int dir) const;

    // vIndex: 59
    virtual bool
    shouldConnectToRedstone(class BlockSource& region, class BlockPos const& pos, ::Direction::Type direction) const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 76
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const* medium) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 105
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI ComparatorBlock(std::string const& nameId, int id, bool on);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos, bool loading) const;

    MCAPI void _refreshOutputState(class BlockSource& region, class BlockPos const& pos, int strength) const;

    // NOLINTEND
};
