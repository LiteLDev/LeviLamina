#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPalette;
class CompoundTag;
class ILevel;
class InteractionResult;
class Item;
class NetworkItemStackDescriptor;
class Vec3;
struct Brightness;
struct ItemUsedOnEventContext;
// clang-format on

class ItemStack : public ::ItemStackBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStack();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reinit(::Block const& block, int count) /*override*/;

    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;

    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;

    virtual void setNull(::std::optional<::std::string> reason) /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual ::std::string toDebugString() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ItemStack();
#endif

    MCAPI ItemStack(::ItemStack const& rhs);

    MCAPI ::ItemStack clone() const;

    MCAPI float getDestroySpeed(::Block const& block) const;

#ifdef LL_PLAT_C
    MCAPI ::Brightness getLightEmission() const;
#endif

    MCAPI ::ItemStack getStrippedNetworkItem() const;

    MCAPI bool matchesNetIdVariant(::ItemStack const& other) const;

    MCAPI ::ItemStack& operator=(::ItemStack const& rhs);

    MCAPI bool sameItemAndAuxAndBlockData(::ItemStack const& otherItemStack) const;

    MCAPI void serverInitNetId();

    MCAPI void useAsFuel();

    MCAPI ::InteractionResult useOn(
        ::Actor&                 entity,
        int                      x,
        int                      y,
        int                      z,
        uchar                    face,
        ::Vec3 const&            clickPos,
        ::ItemUsedOnEventContext itemUsedOnEventContext
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::ItemStack
    fromDescriptor(::NetworkItemStackDescriptor const& descriptor, ::BlockPalette& blockPalette, bool isClientSide);
#endif

    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag);

    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag, ::ILevel& level);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ItemStack const& EMPTY_ITEM();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor();
#endif

    MCAPI void* $ctor(::ItemStack const& rhs);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reinit(::Block const& block, int count);

    MCAPI void $reinit(::Item const& item, int count, int auxValue);

    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);

    MCAPI void $setNull(::std::optional<::std::string> reason);

    MCAPI ::std::string $toString() const;

    MCAPI ::std::string $toDebugString() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
