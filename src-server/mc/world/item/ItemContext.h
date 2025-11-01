#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/item/ItemContextType.h"
#include "mc/world/item/ItemLockMode.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Container;
class Mob;
class Vec3;
struct ItemTag;
// clang-format on

class ItemContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemContextType> mItemContextType;
    ::ll::TypedStorage<8, 8, ::Container*> mContainer;
    ::ll::TypedStorage<4, 4, int> mSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<8, 8, ::BlockSource*> mBlockSource;
    ::ll::TypedStorage<4, 12, ::BlockPos> mBlockPos;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    ::ll::TypedStorage<8, 160, ::std::optional<::ItemStack>> mItemStackContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemContext& operator=(ItemContext const&);
    ItemContext(ItemContext const&);
    ItemContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemContext(::ItemContext&&);

    MCAPI ::ItemStack const& _getItem() const;

    MCAPI void _setItem(::ItemStack const& item);

    MCAPI ::Container* _tryGetChestContainer() const;

    MCAPI ::Container* _tryGetContainerFromEntity() const;

    MCAPI ::Container* _tryGetContainerFromItem() const;

    MCAPI bool clearAllDynamicProperties(::std::string const& collection);

    MCAPI ::std::optional<int> getAmount() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getCanDestroy() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getCanPlaceOn() const;

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> getDynamicProperty(::std::string const& collection, ::std::string const& key) const;

    MCAPI ::std::optional<::std::vector<::std::string>> getDynamicPropertyIds(::std::string const& collection) const;

    MCAPI ::std::optional<uint64> getDynamicPropertyTotalByteCount(::std::string const& collection) const;

    MCAPI ::std::optional<::std::string> getId() const;

    MCAPI ::std::optional<::ItemStack> getItem() const;

    MCAPI ::std::optional<::std::vector<::std::string>> getLore() const;

    MCAPI ::std::optional<::std::string> getNameTag() const;

    MCAPI ::std::optional<::std::vector<::ItemTag>> getTags() const;

    MCAPI ::std::optional<bool> hasTag(::ItemTag const& tag) const;

    MCAPI ::std::optional<bool> isStackable() const;

    MCAPI bool setAmount(int amount);

    MCAPI ::std::optional<bool> setCanDestroy(::std::vector<::std::string> const& blockIdentifiers);

    MCAPI ::std::optional<bool> setCanPlaceOn(::std::vector<::std::string> const& blockIdentifiers);

    MCAPI bool setDynamicProperty(::std::string const& collection, ::std::string const& key, ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& optionalValue);

    MCAPI bool setKeepOnDeath(bool value);

    MCAPI bool setLockMode(::ItemLockMode lockMode);

    MCAPI bool setLore(::std::optional<::std::vector<::std::string>> const& loreList);

    MCAPI bool setNameTag(::std::optional<::std::string> nameTag);

    MCAPI ~ItemContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool setEquipment(::ItemStack const& item, ::SharedTypes::Legacy::EquipmentSlot equipmentSlot, ::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
