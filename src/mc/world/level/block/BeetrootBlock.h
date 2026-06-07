#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/CropBlock.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
// clang-format on

class BeetrootBlock : public ::CropBlock {
public:
    // prevent constructor by default
    BeetrootBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance const getBaseSeed() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeetrootBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance const $getBaseSeed() const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const& pos, ::BlockPos const& bufferValue, ::AABB&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
