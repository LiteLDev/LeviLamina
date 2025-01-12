#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/world/item/ItemLockMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Container;
class ItemStack;
class ItemStackBase;
class Mob;
class Vec3;
class WeakEntityRef;
struct ItemTag;
// clang-format on

class ItemContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka4dc0e;
    ::ll::UntypedStorage<8, 8>  mUnk1b40db;
    ::ll::UntypedStorage<4, 4>  mUnka18ec5;
    ::ll::UntypedStorage<4, 4>  mUnkf522d2;
    ::ll::UntypedStorage<8, 8>  mUnk593683;
    ::ll::UntypedStorage<4, 12> mUnk941ac7;
    ::ll::UntypedStorage<8, 24> mUnkf97e18;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemContext& operator=(ItemContext const&);
    ItemContext(ItemContext const&);
    ItemContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemContext(::WeakEntityRef const& entityRef, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot);

    MCAPI ItemContext(::WeakEntityRef const& entityRef, int slot);

    MCAPI ItemContext(::BlockSource& region, ::BlockPos const& containerPos, int slot);

    MCAPI ::ItemStack const& _getItem() const;

    MCAPI ::Container* _tryGetContainerFromEntity() const;

    MCAPI bool clearAllDynamicProperties(::std::string const& collection);

    MCAPI ::std::optional<int> getAmount() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getCanDestroy() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getCanPlaceOn() const;

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::std::string const& collection, ::std::string const& key) const;

    MCAPI ::std::optional<::std::vector<::std::string>> getDynamicPropertyIds(::std::string const& collection) const;

    MCAPI ::std::optional<uint64> getDynamicPropertyTotalByteCount(::std::string const& collection) const;

    MCAPI ::std::optional<::std::string> getId() const;

    MCAPI ::std::optional<::ItemStack> getItem() const;

    MCAPI ::std::optional<bool> getKeepOnDeath() const;

    MCAPI ::std::optional<::ItemLockMode> getLockMode() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getLore() const;

    MCAPI ::std::optional<int> getMaxAmount() const;

    MCAPI ::std::optional<::std::string> getNameTag() const;

    MCAPI ::std::optional<::std::vector<::ItemTag>> getTags() const;

    MCAPI ::std::optional<bool> hasItem() const;

    MCAPI ::std::optional<bool> hasTag(::ItemTag const& tag) const;

    MCAPI ::std::optional<bool> isStackable() const;

    MCAPI ::std::optional<bool> isStackableWith(::ItemStackBase const& other) const;

    MCAPI bool isValid() const;

    MCAPI bool setAmount(int amount);

    MCAPI ::std::optional<bool> setCanDestroy(::std::vector<::std::string> const& blockIdentifiers);

    MCAPI ::std::optional<bool> setCanPlaceOn(::std::vector<::std::string> const& blockIdentifiers);

    MCAPI bool setDynamicProperty(
        ::std::string const&                                                               collection,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCAPI bool setItem(::ItemStack const& stack);

    MCAPI bool setKeepOnDeath(bool value);

    MCAPI bool setLockMode(::ItemLockMode lockMode);

    MCAPI bool setLore(::std::optional<::std::vector<::std::string>> const& loreList);

    MCAPI bool setNameTag(::std::optional<::std::string> nameTag);

    MCAPI ~ItemContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    setEquipment(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakEntityRef const& entityRef, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot);

    MCAPI void* $ctor(::WeakEntityRef const& entityRef, int slot);

    MCAPI void* $ctor(::BlockSource& region, ::BlockPos const& containerPos, int slot);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
