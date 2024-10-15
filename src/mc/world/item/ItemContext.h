#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/world/item/ItemLockMode.h"

class ItemContext {
public:
    // prevent constructor by default
    ItemContext& operator=(ItemContext const&);
    ItemContext(ItemContext const&);
    ItemContext();

public:
    // NOLINTBEGIN
    MCAPI ItemContext(class WeakEntityRef const& entityRef, ::Puv::Legacy::EquipmentSlot equipmentSlot);

    MCAPI ItemContext(class WeakEntityRef const& entityRef, int slot);

    MCAPI ItemContext(class BlockSource& region, class BlockPos const& containerPos, int slot);

    MCAPI bool clearAllDynamicProperties(std::string const& collection);

    MCAPI std::optional<int> getAmount() const;

    MCAPI std::optional<std::vector<std::string>> getCanDestroy() const;

    MCAPI std::optional<std::vector<std::string>> getCanPlaceOn() const;

    MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
          getDynamicProperty(std::string const& collection, std::string const& key) const;

    MCAPI std::optional<std::vector<std::string>> getDynamicPropertyIds(std::string const& collection) const;

    MCAPI std::optional<uint64> getDynamicPropertyTotalByteCount(std::string const& collection) const;

    MCAPI std::optional<std::string> getId() const;

    MCAPI std::optional<class ItemStack> getItem() const;

    MCAPI std::optional<bool> getKeepOnDeath() const;

    MCAPI std::optional<::ItemLockMode> getLockMode() const;

    MCAPI std::optional<std::vector<std::string>> getLore() const;

    MCAPI std::optional<int> getMaxAmount() const;

    MCAPI std::optional<std::string> getNameTag() const;

    MCAPI std::optional<std::vector<struct ItemTag>> getTags() const;

    MCAPI std::optional<bool> hasItem() const;

    MCAPI std::optional<bool> hasTag(struct ItemTag const& tag) const;

    MCAPI std::optional<bool> isStackable() const;

    MCAPI std::optional<bool> isStackableWith(class ItemStackBase const& other) const;

    MCAPI bool isValid() const;

    MCAPI bool setAmount(int amount);

    MCAPI std::optional<bool> setCanDestroy(std::vector<std::string> const& blockIdentifiers);

    MCAPI std::optional<bool> setCanPlaceOn(std::vector<std::string> const& blockIdentifiers);

    MCAPI bool setDynamicProperty(
        std::string const&                                                               collection,
        std::string const&                                                               key,
        std::optional<std::variant<double, float, bool, std::string, class Vec3>> const& optionalValue
    );

    MCAPI bool setItem(class ItemStack const& stack);

    MCAPI bool setKeepOnDeath(bool value);

    MCAPI bool setLockMode(::ItemLockMode lockMode);

    MCAPI bool setLore(std::optional<std::vector<std::string>> const& loreList);

    MCAPI bool setNameTag(std::optional<std::string> nameTag);

    MCAPI ~ItemContext();

    MCAPI static bool
    setEquipment(class ItemStack const& item, ::Puv::Legacy::EquipmentSlot equipmentSlot, class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class ItemStack const& _getItem() const;

    MCAPI void _setItem(class ItemStack const& item);

    MCAPI class Container* _tryGetChestContainer() const;

    MCAPI class Container* _tryGetContainerFromEntity() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockSource& region, class BlockPos const& containerPos, int slot);

    MCAPI void* ctor$(class WeakEntityRef const& entityRef, ::Puv::Legacy::EquipmentSlot equipmentSlot);

    MCAPI void* ctor$(class WeakEntityRef const& entityRef, int slot);

    MCAPI void dtor$();

    // NOLINTEND
};
