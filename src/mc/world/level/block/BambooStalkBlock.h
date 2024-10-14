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
#include "mc/world/level/block/LeafSize.h"
#include "mc/world/level/block/StalkThickness.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BambooStalkBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BambooStalkBlock& operator=(BambooStalkBlock const&);
    BambooStalkBlock(BambooStalkBlock const&);
    BambooStalkBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BambooStalkBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB&) const;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 50
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI BambooStalkBlock(std::string const& nameId, int id);

    MCAPI static int getMaxHeight(class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Block const& _determineNewBlockState(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI ::LeafSize _getLeafSize(class Block const& block) const;

    MCAPI class AABB const&
    _getShape(class BlockPos const& pos, class Block const& block, class AABB& bufferValue) const;

    MCAPI ::StalkThickness _getStalkThickness(class Block const& block) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB&) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayConsumeFertilizer$(class BlockSource&) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class Vec3 randomlyModifyPosition$(class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
