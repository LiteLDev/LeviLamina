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

class AbstractCandleBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    AbstractCandleBlock& operator=(AbstractCandleBlock const&);
    AbstractCandleBlock(AbstractCandleBlock const&);
    AbstractCandleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AbstractCandleBlock();

    // vIndex: 20
    virtual bool hasVariableLighting() const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 164
    virtual void
    _iterateCandles(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)> callback)
        const;

    MCVAPI int _getNumCandles(class Block const&) const;

    MCVAPI void _tryLightOnFire(class BlockSource&, class BlockPos const&, class Actor*) const;

    MCAPI AbstractCandleBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _checkForWaterlogging(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    _extinguish(class Actor*, class Block const& block, class BlockSource& region, class BlockPos const& pos) const;

    MCAPI static bool _canBeLit(class Block const& block, class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool _isLit(class Block const& block);

    // NOLINTEND
};
