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
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CherrySaplingBlock : public ::BushBlock {
public:
    // prevent constructor by default
    CherrySaplingBlock& operator=(CherrySaplingBlock const&);
    CherrySaplingBlock(CherrySaplingBlock const&);
    CherrySaplingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CherrySaplingBlock() = default;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 155
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 156
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    MCAPI CherrySaplingBlock(std::string const& nameId, int id);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool
    advanceTree(class BlockSource& region, class BlockPos const& pos, class Random& random, class Actor*) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _growTree(class BlockSource& region, class BlockPos const& pos, class Random& random, bool useRandom) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI ::BlockRenderLayer getRenderLayer$() const;

    MCAPI ::BlockRenderLayer getRenderLayer$(class Block const&, class BlockSource&, class BlockPos const&) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor* actor, ::FertilizerType fType)
        const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
