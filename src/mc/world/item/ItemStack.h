#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPalette;
class CompoundTag;
class InteractionResult;
class Item;
class ItemInstance;
class Level;
class Mob;
class NetworkItemStackDescriptor;
class Player;
class RecipeIngredient;
class Vec3;
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetIdTag;
struct ItemStackNetIdVariant;
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
    virtual void reinit(::BlockLegacy const& block, int count) /*override*/;

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

    MCAPI explicit ItemStack(::RecipeIngredient const& ingredient);

    MCAPI ItemStack(::ItemStack const& rhs);

    MCAPI explicit ItemStack(::ItemInstance const& rhs);

    MCAPI ItemStack(::BlockLegacy const& block, int count = 1);

    MCAPI ItemStack(::Block const& block, int count = 1, ::CompoundTag const* _userData = nullptr);

    MCAPI ItemStack(::Item const& item, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI ItemStack(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI void _assignNetIdVariant(::ItemStack const& fromItem) const;

    MCAPI void clientInitLegacyRequestId(::ItemStackLegacyRequestId const& legacyClientRequestId);

    MCAPI ::ItemStack clone() const;

    MCAPI float getDestroySpeed(::Block const& block) const;

    MCFOLD ::ItemStackNetIdVariant const& getItemStackNetIdVariant() const;

    MCAPI int getMaxUseDuration() const;

    MCAPI ::ItemStack getStrippedNetworkItem() const;

    MCAPI bool hasItemStackNetId() const;

    MCAPI bool inventoryTick(::Level& level, ::Actor& owner, int slot, bool selected);

    MCAPI bool matchesAndNetIdVariantMatches(::ItemStack const& other) const;

    MCAPI bool matchesNetIdVariant(::ItemStack const& other) const;

    MCAPI ::ItemStack& operator=(::ItemStack const& rhs);

    MCAPI void playSoundIncrementally(::Mob& mob) const;

    MCAPI void releaseUsing(::Player* player, int durationLeft);

    MCAPI bool sameItemAndAuxAndBlockData(::ItemStack const& otherItemStack) const;

    MCAPI void serverInitNetId();

    MCAPI ::ItemStackNetId const* tryGetItemStackNetId() const;

    MCAPI ::ItemStack& use(::Player& player);

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

    MCAPI ::ItemUseMethod useTimeDepleted(::Level* level, ::Player* player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ItemStack
    fromDescriptor(::NetworkItemStackDescriptor const& descriptor, ::BlockPalette& blockPalette, bool isClientSide);

    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag);

    MCAPI static ::ItemStack fromTag(::CompoundTag const& tag, ::Level& level);
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

    MCAPI void* $ctor(::RecipeIngredient const& ingredient);

    MCAPI void* $ctor(::ItemStack const& rhs);

    MCAPI void* $ctor(::ItemInstance const& rhs);

    MCAPI void* $ctor(::BlockLegacy const& block, int count);

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
    MCAPI void $reinit(::BlockLegacy const& block, int count);

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
