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

class SeaPickleBlock : public ::BushBlock {
public:
    // prevent constructor by default
    SeaPickleBlock& operator=(SeaPickleBlock const&);
    SeaPickleBlock(SeaPickleBlock const&);
    SeaPickleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SeaPickleBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 20
    virtual bool hasVariableLighting() const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 121
    virtual int getColor(class Block const&) const;

    // vIndex: 122
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI SeaPickleBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI std::string buildDescriptionId$(class Block const&) const;

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar, ::BlockSupportType) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void checkAlive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getColor$(class Block const&) const;

    MCAPI int getColor$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI bool hasVariableLighting$() const;

    MCAPI bool mayConsumeFertilizer$(class BlockSource&) const;

    MCAPI bool mayPlaceOn$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
