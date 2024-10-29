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
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CommandBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CommandBlock& operator=(CommandBlock const&);
    CommandBlock(CommandBlock const&);
    CommandBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandBlock() = default;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 114
    virtual bool canInstatick() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI CommandBlock(std::string const& nameId, int id, ::CommandBlockMode mode);

    MCAPI void execute(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI ::CommandBlockMode getMode() const;

    MCAPI void
    updateBlock(class BlockSource& region, class BlockPos const& pos, ::CommandBlockMode newMode, bool conditional)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _execute(class BlockSource& region, class CommandBlockActor& entity, class BlockPos const& pos, bool commandSet)
        const;

    MCAPI void _executeChain(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool _executeChainBlock(
        class BlockSource&       region,
        class BlockPos const&    pos,
        class CommandBlockActor& blockActor,
        bool                     fromTickQueue
    ) const;

    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos, bool bLoading) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, ::CommandBlockMode mode);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canInstatick$() const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const& getPlacementBlock$(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI static auto mCBModeMap() -> int (&)[];

    // NOLINTEND
};
