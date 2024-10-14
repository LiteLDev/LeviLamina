#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BushBlock.h"
#include "mc/world/level/block/SaplingType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SaplingBlock : public ::BushBlock {
public:
    // prevent constructor by default
    SaplingBlock& operator=(SaplingBlock const&);
    SaplingBlock(SaplingBlock const&);
    SaplingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaplingBlock();

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 82
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 155
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 156
    virtual ::BlockRenderLayer
    getRenderLayer(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    MCAPI SaplingBlock(std::string const& nameId, int id);

    MCAPI class SaplingBlock& setSaplingType(::SaplingType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool
    advanceTree(class BlockSource& region, class BlockPos const& pos, class Random& random, class Actor*) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class WeakRef<class IFeature> _generateJungleTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    MCAPI class WeakRef<class IFeature> _generateOakTree(
        class FeatureRegistry const& registry,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class Random&                random,
        bool                         useRandom
    ) const;

    MCAPI class WeakRef<class IFeature> _generateRedwoodTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    MCAPI class WeakRef<class IFeature> _generateRoofTree(
        int&                         ox,
        int&                         oz,
        bool&                        multiblock,
        class BlockPos const&        pos,
        class BlockSource&           region,
        class FeatureRegistry const& registry
    ) const;

    MCAPI bool
    _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random, bool useRandom) const;

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

    MCAPI bool
    canBeFertilized$(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI ::BlockRenderLayer getRenderLayer$() const;

    MCAPI ::BlockRenderLayer
    getRenderLayer$(class Block const& block, class BlockSource&, class BlockPos const& pos) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
