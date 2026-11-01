#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/world/item/ItemContextType.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class ItemStackBase;
class Mob;
class Vec3;
struct ItemTag;
// clang-format on

class ItemContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemContextType>                    mItemContextType;
    ::ll::TypedStorage<8, 8, ::Container*>                         mContainer;
    ::ll::TypedStorage<4, 4, int>                                  mSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                       mBlockSource;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                     mEntityRef;
    ::ll::TypedStorage<8, 160, ::std::optional<::ItemStack>>       mItemStackContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemContext(ItemContext const&);
    ItemContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemContext(::ItemStack const& item, int slot);

    MCNAPI ItemContext(::BlockSource& region, ::BlockPos const& containerPos, int slot);

    MCNAPI void _setItem(::ItemStack const& item);

    MCNAPI ::Container* _tryGetContainerFromEntity() const;

    MCNAPI ::Container* _tryGetContainerFromItem() const;

    MCNAPI bool clearAllDynamicProperties(::std::string const& collection);

    MCNAPI ::std::optional<int> getAmount() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getCanDestroy() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getCanPlaceOn() const;

    MCNAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::std::string const& collection, ::std::string const& key) const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getDynamicPropertyIds(::std::string const& collection) const;

    MCNAPI ::std::optional<uint64> getDynamicPropertyTotalByteCount(::std::string const& collection) const;

    MCNAPI ::std::optional<::std::string> getId() const;

    MCNAPI ::std::optional<::ItemStack> getItem() const;

    MCNAPI ::std::optional<bool> getKeepOnDeath() const;

    MCNAPI ::std::optional<::ItemLockMode> getLockMode() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getLore() const;

    MCNAPI ::std::optional<int> getMaxAmount() const;

    MCNAPI ::std::optional<::std::string> getNameTag() const;

    MCNAPI ::std::optional<::std::vector<::ItemTag>> getTags() const;

    MCNAPI ::std::optional<bool> hasItem() const;

    MCNAPI ::std::optional<bool> hasTag(::ItemTag const& tag) const;

    MCNAPI ::std::optional<bool> isStackable() const;

    MCNAPI ::std::optional<bool> isStackableWith(::ItemStackBase const& other) const;

    MCNAPI bool isValid() const;

    MCNAPI ::ItemContext& operator=(::ItemContext const&);

    MCNAPI bool setAmount(int amount);

    MCNAPI ::std::optional<bool> setCanDestroy(::std::vector<::std::string> const& blockIdentifiers);

    MCNAPI ::std::optional<bool> setCanPlaceOn(::std::vector<::std::string> const& blockIdentifiers);

    MCNAPI bool setDynamicProperty(
        ::std::string const&                                                               collection,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCNAPI bool setKeepOnDeath(bool value);

    MCNAPI bool setLockMode(::ItemLockMode lockMode);

    MCNAPI bool setLore(::std::optional<::std::vector<::std::string>> const& loreList);

    MCNAPI bool setNameTag(::std::optional<::std::string> nameTag);

    MCNAPI ~ItemContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    setEquipment(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStack const& item, int slot);

    MCNAPI void* $ctor(::BlockSource& region, ::BlockPos const& containerPos, int slot);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
