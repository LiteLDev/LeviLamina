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
struct ItemUsedOnEventContext;
// clang-format on

class ItemStack : public ::ItemStackBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant> mNetIdVariant;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reinit(::Block const& block, int count) /*override*/;

    // vIndex: 3
    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;

    // vIndex: 1
    virtual void reinit(::std::string_view const name, int count, int auxValue) /*override*/;

    // vIndex: 4
    virtual void setNull(::std::optional<::std::string> reason) /*override*/;

    // vIndex: 5
    virtual ::std::string toString() const /*override*/;

    // vIndex: 6
    virtual ::std::string toDebugString() const /*override*/;

    // vIndex: 0
    virtual ~ItemStack() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStack();

    MCAPI ItemStack(::ItemStack const& rhs);

    MCAPI ItemStack(::Block const& block, int count, ::CompoundTag const* _userData);

    MCAPI ItemStack(::Item const& item, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI ItemStack(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI int getMaxUseDuration() const;

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
    MCAPI static ::ItemStack
    fromDescriptor(::NetworkItemStackDescriptor const& descriptor, ::BlockPalette& blockPalette, bool isClientSide);

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
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ItemStack const& rhs);

    MCAPI void* $ctor(::Block const& block, int count, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::std::string_view name, int count, int auxValue, ::CompoundTag const* _userData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
