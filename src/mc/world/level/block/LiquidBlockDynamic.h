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

class LiquidBlockDynamic : public ::LiquidBlock {
public:
    // prevent constructor by default
    LiquidBlockDynamic& operator=(LiquidBlockDynamic const&);
    LiquidBlockDynamic(LiquidBlockDynamic const&);
    LiquidBlockDynamic();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LiquidBlockDynamic() = default;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    MCAPI LiquidBlockDynamic(std::string const& nameId, int id, class Material const& material);

    MCAPI std::array<bool, 4> getSpread(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldBecomeStatic(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canSpreadTo(
        class BlockSource&    region,
        class BlockPos const& pos,
        class BlockPos const& flowFromPos,
        uchar                 flowFromDirection
    ) const;

    MCAPI int _getSlopeDistance(class BlockSource& region, class BlockPos const& pos, int pass, int from) const;

    MCAPI bool _isWaterBlocking(
        class BlockSource&    region,
        class BlockPos const& pos,
        class BlockPos const& flowFromPos,
        uchar                 flowFromDirection
    ) const;

    MCAPI void _setStatic(class BlockSource& region, class BlockPos const& pos, bool usingExtraData) const;

    MCAPI bool
    _tick(class BlockSource& region, class BlockPos const& pos, class Random& random, bool onlyDetectStatic) const;

    MCAPI void _trySpreadTo(
        class BlockSource&    region,
        class BlockPos const& pos,
        int                   neighbor,
        class BlockPos const& flowFromPos,
        uchar                 flowFromDirection
    ) const;

    // NOLINTEND
};
