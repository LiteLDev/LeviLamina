#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
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

class ChalkboardItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const
        /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    virtual bool _calculatePlacePos(::ItemStackBase const&, ::Actor const& entity, uchar& face, ::BlockPos& pos) const
        /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static bool canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& hitPos, uchar face);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const*) const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCNAPI bool $_calculatePlacePos(::ItemStackBase const&, ::Actor const& entity, uchar& face, ::BlockPos& pos) const;

    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
