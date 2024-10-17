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
#include "mc/world/level/block/SaplingBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BambooSaplingBlock : public ::SaplingBlock {
public:
    // prevent constructor by default
    BambooSaplingBlock& operator=(BambooSaplingBlock const&);
    BambooSaplingBlock(BambooSaplingBlock const&);
    BambooSaplingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BambooSaplingBlock() = default;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 50
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BambooSaplingBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _grow(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class Vec3 randomlyModifyPosition$(class BlockPos const& pos) const;

    // NOLINTEND
};
