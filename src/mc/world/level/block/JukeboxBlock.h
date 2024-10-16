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

class JukeboxBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    JukeboxBlock& operator=(JukeboxBlock const&);
    JukeboxBlock(JukeboxBlock const&);
    JukeboxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JukeboxBlock() = default;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI JukeboxBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _dropRecording(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _installCircuit(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const&, uchar) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isSignalSource$() const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
