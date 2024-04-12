#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/containers/ContainerType.h"

class ContainerComponent {
public:
    // prevent constructor by default
    ContainerComponent& operator=(ContainerComponent const&);
    ContainerComponent(ContainerComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ?containerClosed@ContainerComponent@@UEAAXAEAVPlayer@@@Z
    MCVAPI void containerClosed(class Player&);

    // symbol: ?containerContentChanged@ContainerComponent@@UEAAXH@Z
    MCVAPI void containerContentChanged(int iSlot);

    // symbol: ??1ContainerComponent@@UEAA@XZ
    MCVAPI ~ContainerComponent();

    // symbol: ??0ContainerComponent@@QEAA@XZ
    MCAPI ContainerComponent();

    // symbol: ??0ContainerComponent@@QEAA@$$QEAV0@@Z
    MCAPI ContainerComponent(class ContainerComponent&& other);

    // symbol: ?_getRawContainerPtr@ContainerComponent@@QEAAPEAVFillingContainer@@XZ
    MCAPI class FillingContainer* _getRawContainerPtr();

    // symbol: ?addAdditionalSaveData@ContainerComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?addItem@ContainerComponent@@QEAA_NAEAVItemActor@@@Z
    MCAPI bool addItem(class ItemActor& entity);

    // symbol: ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@@Z
    MCAPI bool addItem(class ItemStack& item);

    // symbol: ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@HH@Z
    MCAPI bool addItem(class ItemStack& item, int face, int itemCount);

    // symbol: ?canBeSiphonedFrom@ContainerComponent@@QEBA_NXZ
    MCAPI bool canBeSiphonedFrom() const;

    // symbol: ?canOpenContainer@ContainerComponent@@QEBA_NAEBVActor@@AEAVPlayer@@@Z
    MCAPI bool canOpenContainer(class Actor const& containerActor, class Player& player) const;

    // symbol: ?countItemsOfType@ContainerComponent@@QEBAHAEBVItemStack@@@Z
    MCAPI int countItemsOfType(class ItemStack const& item) const;

    // symbol: ?dropContents@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
    MCAPI void dropContents(class BlockSource& region, class Vec3 const& pos, bool randomizeDrop);

    // symbol: ?dropSlotContent@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_NH@Z
    MCAPI void dropSlotContent(class BlockSource&, class Vec3 const&, bool, int);

    // symbol: ?findFirstSlotForItem@ContainerComponent@@QEBAHAEBVItemStack@@@Z
    MCAPI int findFirstSlotForItem(class ItemStack const& item) const;

    // symbol: ?getContainerSize@ContainerComponent@@QEBAHXZ
    MCAPI int getContainerSize() const;

    // symbol: ?getEmptySlotsCount@ContainerComponent@@QEBAHXZ
    MCAPI int getEmptySlotsCount() const;

    // symbol: ?getItem@ContainerComponent@@QEBAAEBVItemStack@@H@Z
    MCAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getSlots@ContainerComponent@@QEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    MCAPI std::vector<class ItemStack const*> const getSlots() const;

    // symbol: ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemActor@@@Z
    MCAPI bool hasRoomForItem(class ItemActor const& entity);

    // symbol: ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemStack@@@Z
    MCAPI bool hasRoomForItem(class ItemStack const& item);

    // symbol: ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // symbol: ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@AEBUContainerDescription@@@Z
    MCAPI void initFromDefinition(class Actor& actor, struct ContainerDescription const& desc);

    // symbol: ?isEmpty@ContainerComponent@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isPrivate@ContainerComponent@@QEBA_NXZ
    MCAPI bool isPrivate() const;

    // symbol: ?openContainer@ContainerComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
    MCAPI bool openContainer(class Actor& containerActor, class Player& player);

    // symbol: ??4ContainerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ContainerComponent& operator=(class ContainerComponent&& other);

    // symbol: ?readAdditionalSaveData@ContainerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& actor, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?rebuildContainer@ContainerComponent@@QEAAXAEAVActor@@W4ContainerType@@H_NH2@Z
    MCAPI void rebuildContainer(
        class Actor&    owner,
        ::ContainerType type,
        int             size,
        bool            canBesiphonedFrom,
        int             slotsPerStrength,
        bool            isPrivate
    );

    // symbol: ?removeItem@ContainerComponent@@QEAAXHH@Z
    MCAPI void removeItem(int slot, int count);

    // symbol: ?removeItemsOfType@ContainerComponent@@QEAAXAEBVItemStack@@H@Z
    MCAPI void removeItemsOfType(class ItemStack const& item, int count);

    // symbol: ?serverInitItemStackIds@ContainerComponent@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol:
    // ?setCustomName@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCustomName(std::string const& name);

    // symbol: ?setItem@ContainerComponent@@QEAA_NHAEBVItemStack@@@Z
    MCAPI bool setItem(int slot, class ItemStack const& item);

    // symbol:
    // ?setLootTable@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI void setLootTable(std::string const& lootTable, int lootTableSeed);

    // symbol: ?unpackLootTable@ContainerComponent@@QEAAXAEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void unpackLootTable(class Level& level, DimensionType dimensionId);

    // NOLINTEND
};
