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

class WaterlilyBlock : public ::BushBlock {
public:
    // prevent constructor by default
    WaterlilyBlock& operator=(WaterlilyBlock const&);
    WaterlilyBlock(WaterlilyBlock const&);
    WaterlilyBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WaterlilyBlock() = default;

    // vIndex: 5
    virtual class AABB getCollisionShape(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 121
    virtual int getColor(class Block const&) const;

    // vIndex: 123
    virtual int getColorAtPos(class BlockSource&, class BlockPos const&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI WaterlilyBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB getCollisionShape$(
        class Block const&                                         block,
        class IConstBlockSource const&                             region,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI int getColor$(class Block const&) const;

    MCAPI int getColorAtPos$(class BlockSource&, class BlockPos const&) const;

    MCAPI class AABB const& getOutline$(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlaceOn$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
