#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class Mob;
class Vec3;
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
    MCAPI ::ItemStack const& _getItem() const;

    MCAPI void _setItem(::ItemStack const& item);

    MCAPI ::Container* _tryGetContainerFromEntity() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getDynamicPropertyIds(::std::string const& collection) const;

    MCAPI ::std::optional<::std::vector<::std::string>> getLore() const;

    MCAPI ::std::optional<::std::string> getNameTag() const;

    MCAPI bool isValid() const;

    MCAPI bool setAmount(int amount);

    MCAPI ::std::optional<bool> setCanDestroy(::std::vector<::std::string> const& blockIdentifiers);

    MCAPI ::std::optional<bool> setCanPlaceOn(::std::vector<::std::string> const& blockIdentifiers);

    MCAPI bool setDynamicProperty(
        ::std::string const&                                                               collection,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCAPI bool setKeepOnDeath(bool value);

    MCAPI bool setLore(::std::optional<::std::vector<::std::string>> const& loreList);

    MCAPI bool setNameTag(::std::optional<::std::string> nameTag);

    MCAPI ~ItemContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _trySetEquippedSlot(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);

    MCAPI static bool
    setEquipment(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
