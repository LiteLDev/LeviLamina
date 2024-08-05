#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/AmethystBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BuddingAmethystBlock : public ::AmethystBlock {
public:
    // prevent constructor by default
    BuddingAmethystBlock& operator=(BuddingAmethystBlock const&);
    BuddingAmethystBlock(BuddingAmethystBlock const&);
    BuddingAmethystBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BuddingAmethystBlock() = default;

    // vIndex: 49
    virtual bool isSilentWhenJumpingOff() const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI BuddingAmethystBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI static bool canBudGrowAtPos(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
