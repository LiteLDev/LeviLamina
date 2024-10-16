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
#include "mc/world/level/block/FlowerBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class WitherRoseBlock : public ::FlowerBlock {
public:
    // prevent constructor by default
    WitherRoseBlock& operator=(WitherRoseBlock const&);
    WitherRoseBlock(WitherRoseBlock const&);
    WitherRoseBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WitherRoseBlock() = default;

    // vIndex: 80
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor* actor) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const&, class Actor& entity) const;

    MCAPI WitherRoseBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool canSpawnOn$(class Actor* actor) const;

    MCAPI void entityInside$(class BlockSource& region, class BlockPos const&, class Actor& entity) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool mayPlaceOn$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool onFertilized$(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // NOLINTEND
};
