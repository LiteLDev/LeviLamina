#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class TorchflowerCropBlock : public ::CropBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance const getBaseSeed() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    virtual ::Block const& setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual ~TorchflowerCropBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance const $getBaseSeed() const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCAPI ::Block const& $setGrowth(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Block const&    baseBlock,
        ushort            newGrowth,
        int               updateFlags
    ) const;

    MCAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
