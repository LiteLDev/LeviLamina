#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RedstoneTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    RedstoneTorchBlock& operator=(RedstoneTorchBlock const&);
    RedstoneTorchBlock(RedstoneTorchBlock const&);
    RedstoneTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RedstoneTorchBlock() = default;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

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

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const&);

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual int getTickDelay();

    MCAPI RedstoneTorchBlock(std::string const& nameId, int id, bool on);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _installCircuit(class BlockSource& source, class BlockPos const& pos) const;

    // NOLINTEND
};
