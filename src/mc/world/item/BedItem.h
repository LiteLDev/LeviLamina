#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
// clang-format on

class BedItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    virtual bool isValidAuxValue(int value) const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    virtual bool
    _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const
        /*override*/;

    virtual ~BedItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InteractionResult
    _tryUseOn(::ItemStackBase& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCFOLD bool $isValidAuxValue(int value) const;

    MCFOLD ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
