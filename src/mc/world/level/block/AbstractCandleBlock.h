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
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

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

    MCAPI void _extinguish(
        class Actor*          extinguisher,
        class Block const&    block,
        class BlockSource&    region,
        class BlockPos const& pos
    ) const;

    MCAPI static bool _canBeLit(class Block const& block, class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool _isLit(class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI int _getNumCandles$(class Block const&) const;

    MCAPI void
    _iterateCandles$(class Block const&, class BlockPos const&, std::function<void(class Vec3 const&, int)> callback)
        const;

    MCAPI void _onHitByActivatingAttack$(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI void _tryLightOnFire$(class BlockSource&, class BlockPos const&, class Actor*) const;

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI void entityInside$(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI bool hasVariableLighting$() const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
