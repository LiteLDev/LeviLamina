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

class FrostedIceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FrostedIceBlock& operator=(FrostedIceBlock const&);
    FrostedIceBlock(FrostedIceBlock const&);
    FrostedIceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FrostedIceBlock() = default;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI FrostedIceBlock(std::string const& nameId, int id, bool packed);

    MCAPI void
    _slightlyMelt(class BlockSource& region, class BlockPos const& pos, class Random& random, bool propagate) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const MAX_AGE;

    MCAPI static int const MIN_NEIGHBORS;

    // NOLINTEND
};
