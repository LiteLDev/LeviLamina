#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/LiquidBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
};
