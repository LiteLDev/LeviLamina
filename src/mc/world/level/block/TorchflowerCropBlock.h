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

class TorchflowerCropBlock : public ::CropBlock {
public:
    // prevent constructor by default
    TorchflowerCropBlock& operator=(TorchflowerCropBlock const&);
    TorchflowerCropBlock(TorchflowerCropBlock const&);
    TorchflowerCropBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TorchflowerCropBlock() = default;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType fType) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 164
    virtual class Block const& setGrowth(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    baseBlock,
        ushort                newGrowth,
        int                   updateFlags
    ) const;

    // vIndex: 165
    virtual class ItemInstance const getBaseSeed() const;

    MCAPI TorchflowerCropBlock(std::string const& nameId, int id);

    // NOLINTEND
};
