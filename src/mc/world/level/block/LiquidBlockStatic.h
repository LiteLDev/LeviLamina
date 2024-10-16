#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/LiquidBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LiquidBlockStatic : public ::LiquidBlock {
public:
    // prevent constructor by default
    LiquidBlockStatic& operator=(LiquidBlockStatic const&);
    LiquidBlockStatic(LiquidBlockStatic const&);
    LiquidBlockStatic();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LiquidBlockStatic() = default;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    MCAPI LiquidBlockStatic(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setDynamic(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void entityInside$(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
