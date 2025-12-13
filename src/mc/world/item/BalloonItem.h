#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class Vec3;
namespace mce { class Color; }
// clang-format on

class BalloonItem : public ::ChemistryItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const& instance) const /*override*/;

    virtual bool isDyeable() const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual ~BalloonItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static bool canAttachToBlock(::BlockPos const& blockPos, ::BlockSource const& region);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCAPI ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const& instance) const;

    MCFOLD bool $isDyeable() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
