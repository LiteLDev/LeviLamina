#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/ContainerType.h"

class ContainerComponent {
public:
    // prevent constructor by default
    ContainerComponent& operator=(ContainerComponent const&);
    ContainerComponent(ContainerComponent const&);

public:
    // NOLINTBEGIN
    MCVAPI void containerClosed(class Player& player);

    MCVAPI void containerContentChanged(int iSlot);

    MCVAPI ~ContainerComponent();

    MCAPI ContainerComponent();

    MCAPI ContainerComponent(class ContainerComponent&& other);

    MCAPI class FillingContainer* _getRawContainerPtr();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool addItem(class ItemActor& entity);

    MCAPI bool addItem(class ItemStack& item);

    MCAPI bool addItem(class ItemStack& item, int face, int itemCount);

    MCAPI bool canBeSiphonedFrom() const;

    MCAPI bool canOpenContainer(class Actor const& containerActor, class Player& player) const;

    MCAPI int countItemsOfType(class ItemStack const& item) const;

    MCAPI void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    MCAPI void dropSlotContent(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop, int slot);

    MCAPI int findFirstSlotForItem(class ItemStack const& item) const;

    MCAPI int getContainerSize() const;

    MCAPI int getEmptySlotsCount() const;

    MCAPI class ItemStack const& getItem(int slot) const;

    MCAPI std::vector<class ItemStack const*> const getSlots() const;

    MCAPI bool hasRoomForItem(class ItemActor const& entity);

    MCAPI bool hasRoomForItem(class ItemStack const& item);

    MCAPI void initFromDefinition(class Actor& actor);

    MCAPI void initFromDefinition(class Actor& actor, struct ContainerDescription const& desc);

    MCAPI bool isEmpty() const;

    MCAPI bool isPrivate() const;

    MCAPI bool openContainer(class Actor& containerActor, class Player& player);

    MCAPI class ContainerComponent& operator=(class ContainerComponent&& other);

    MCAPI void readAdditionalSaveData(class Actor& actor, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void
    rebuildContainer(class Actor& owner, ::ContainerType type, int size, bool canBesiphonedFrom, int, bool isPrivate);

    MCAPI void removeItem(int slot, int count);

    MCAPI void removeItemsOfType(class ItemStack const& item, int count);

    MCAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setCustomName(std::string const& name);

    MCAPI bool setItem(int slot, class ItemStack const& item);

    MCAPI void setLootTable(std::string const& lootTable, int lootTableSeed);

    MCAPI void unpackLootTable(class Level& level, DimensionType dimensionId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForContainerCloseListener();

    MCAPI static void** vftableForContainerContentChangeListener();

    MCAPI void* ctor$(class ContainerComponent&& other);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void containerClosed$(class Player& player);

    MCAPI void containerContentChanged$(int iSlot);

    // NOLINTEND
};
