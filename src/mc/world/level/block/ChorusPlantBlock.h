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

class ChorusPlantBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ChorusPlantBlock& operator=(ChorusPlantBlock const&);
    ChorusPlantBlock(ChorusPlantBlock const&);
    ChorusPlantBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChorusPlantBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const&,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI ChorusPlantBlock(std::string const& nameId, int id);

    MCAPI static bool canGrowChorus(class Block const& block);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class AABB const&
    _getShape(class IConstBlockSource const& region, class BlockPos const& pos, class AABB& bufferValue) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar, ::BlockSupportType) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const& getOutline$(
        class Block const&,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    MCAPI static float const& PLANT_ITEM_DIMENSION();

    // NOLINTEND
};
