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
    ::ll::UntypedStorage<4, 4>   mUnka4dc0e;
    ::ll::UntypedStorage<8, 8>   mUnk1b40db;
    ::ll::UntypedStorage<4, 4>   mUnka18ec5;
    ::ll::UntypedStorage<4, 4>   mUnkf522d2;
    ::ll::UntypedStorage<8, 8>   mUnk593683;
    ::ll::UntypedStorage<4, 12>  mUnk941ac7;
    ::ll::UntypedStorage<8, 24>  mUnkf97e18;
    ::ll::UntypedStorage<8, 160> mUnkcfbd62;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemContext& operator=(ItemContext const&);
    ItemContext(ItemContext const&);
    ItemContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemContext(::ItemContext&&);

    MCNAPI ::ItemStack const& _getItem() const;

    MCNAPI void _setItem(::ItemStack const& item);

    MCNAPI ::Container* _tryGetContainerFromEntity() const;

    MCNAPI ::Container* _tryGetContainerFromItem() const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getDynamicPropertyIds(::std::string const& collection) const;

    MCNAPI ::std::optional<::std::vector<::std::string>> getLore() const;

    MCNAPI ::std::optional<::std::string> getNameTag() const;

    MCNAPI bool isValid() const;

    MCNAPI bool setAmount(int amount);

    MCNAPI ::std::optional<bool> setCanDestroy(::std::vector<::std::string> const& blockIdentifiers);

    MCNAPI ::std::optional<bool> setCanPlaceOn(::std::vector<::std::string> const& blockIdentifiers);

    MCNAPI bool setDynamicProperty(
        ::std::string const&                                                               collection,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue
    );

    MCNAPI bool setKeepOnDeath(bool value);

    MCNAPI bool setLore(::std::optional<::std::vector<::std::string>> const& loreList);

    MCNAPI bool setNameTag(::std::optional<::std::string> nameTag);

    MCNAPI ~ItemContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    _trySetEquippedSlot(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);

    MCNAPI static bool
    setEquipment(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
