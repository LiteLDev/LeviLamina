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

class CoralBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CoralBlock& operator=(CoralBlock const&);
    CoralBlock(CoralBlock const&);
    CoralBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CoralBlock() = default;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI CoralBlock(std::string const& nameId, int id);

    MCAPI static int const DEAD_CORAL_BIT;

    MCAPI static int const DEAD_CORAL_OFFSET;

    // NOLINTEND
};
