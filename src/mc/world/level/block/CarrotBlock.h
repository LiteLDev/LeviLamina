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
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CarrotBlock : public ::CropBlock {
public:
    // prevent constructor by default
    CarrotBlock& operator=(CarrotBlock const&);
    CarrotBlock(CarrotBlock const&);
    CarrotBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CarrotBlock() = default;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 155
    virtual ::BlockRenderLayer getRenderLayer() const;

    // vIndex: 156
    virtual ::BlockRenderLayer getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;

    // vIndex: 165
    virtual class ItemInstance const getBaseSeed() const;

    MCAPI CarrotBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance const getBaseSeed$() const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI ::BlockRenderLayer getRenderLayer$() const;

    MCAPI ::BlockRenderLayer getRenderLayer$(class Block const&, class BlockSource&, class BlockPos const&) const;

    MCAPI int getVariant$(class Block const& block) const;

    // NOLINTEND
};
