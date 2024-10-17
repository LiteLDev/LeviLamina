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

class RootedDirtBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RootedDirtBlock& operator=(RootedDirtBlock const&);
    RootedDirtBlock(RootedDirtBlock const&);
    RootedDirtBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RootedDirtBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 89
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI RootedDirtBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canBeFertilized$(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI bool canBeOriginalSurface$() const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    MCAPI bool
    tryToTill$(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
