#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CropBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 80
    virtual bool onFertilized(class BlockSource&, class BlockPos const&, class Actor*, ::FertilizerType) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 164
    virtual class Block const& setGrowth(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    baseBlock,
        ushort,
        int updateFlags
    ) const;

    // vIndex: 165
    virtual class ItemInstance const getBaseSeed() const;

    MCAPI TorchflowerCropBlock(std::string const& nameId, int id);

    // NOLINTEND
};
