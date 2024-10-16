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
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ChestBlock : public ::ActorBlock {
public:
    // ChestBlock inner types define
    enum class ChestType {};

public:
    // prevent constructor by default
    ChestBlock& operator=(ChestBlock const&);
    ChestBlock(ChestBlock const&);
    ChestBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestBlock();

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 64
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    // vIndex: 67
    virtual void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to) const;

    // vIndex: 68
    virtual bool detachesOnPistonMove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 94
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI ChestBlock(std::string const& nameId, int id, ::ChestBlock::ChestType type, ::MaterialType materialType);

    MCAPI void updateSignalStrength(class BlockSource& region, class BlockPos const& pos, int strength) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::ChestBlock::ChestType type, ::MaterialType materialType);

    MCAPI void dtor$();

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion) const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI bool detachesOnPistonMove$(class BlockSource&, class BlockPos const&) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI bool
    getSecondPart$(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI class BlockLegacy& init$();

    MCAPI bool isContainerBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool isSignalSource$() const;

    MCAPI void onMove$(class BlockSource& region, class BlockPos const& from, class BlockPos const& to) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
