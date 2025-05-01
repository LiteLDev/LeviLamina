#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Vec3;
struct Brightness;
struct ResolvedItemIconInfo;
// clang-format on

class BlockItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 87
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 112
    virtual ::Brightness getLightEmission(int data) const /*override*/;

    // vIndex: 47
    virtual bool isDestructive(int auxValue) const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const
        /*override*/;

    // vIndex: 0
    virtual ~BlockItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockItem(::std::string const& name, int id, ::HashedString const& blockName);

    MCNAPI void _displayHeightLimitErrorMessages(::Actor& actor, int y, bool displayClientSideOnly) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name, int id, ::HashedString const& blockName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;

    MCNAPI ::Brightness $getLightEmission(int data) const;

    MCNAPI bool $isDestructive(int auxValue) const;

    MCNAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
