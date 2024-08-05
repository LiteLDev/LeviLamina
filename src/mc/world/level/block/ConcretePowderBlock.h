#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ConcretePowderBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    ConcretePowderBlock& operator=(ConcretePowderBlock const&);
    ConcretePowderBlock(ConcretePowderBlock const&);
    ConcretePowderBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConcretePowderBlock() = default;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 108
    virtual bool shouldStopFalling(class Actor& entity) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    MCAPI ConcretePowderBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryTouchWater(class BlockSource&, class BlockPos const&, std::optional<class HashedString>) const;

    // NOLINTEND
};
