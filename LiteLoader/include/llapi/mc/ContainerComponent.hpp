/**
 * @file  MC/ContainerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerComponent.
 *
 */
class ContainerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCOMPONENT
public:
    class ContainerComponent& operator=(class ContainerComponent const &) = delete;
    ContainerComponent(class ContainerComponent const &) = delete;
#endif

public:
    /**
     * @hash   -824732856
     * @vftbl  0
     * @symbol ?containerContentChanged@ContainerComponent@@UEAAXH@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @hash   1319816168
     * @symbol ??0ContainerComponent@@QEAA@XZ
     */
    MCAPI ContainerComponent();
    /**
     * @hash   1387113505
     * @symbol ??0ContainerComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI ContainerComponent(class ContainerComponent &&);
    /**
     * @hash   949264185
     * @symbol ?_getRawContainerPtr@ContainerComponent@@QEAAPEAVFillingContainer@@XZ
     */
    MCAPI class FillingContainer * _getRawContainerPtr();
    /**
     * @hash   356800344
     * @symbol ?addAdditionalSaveData@ContainerComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -1050831026
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVBlockSource@@AEAVItemStack@@HH@Z
     */
    MCAPI bool addItem(class BlockSource &, class ItemStack &, int, int);
    /**
     * @hash   339937589
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemActor@@@Z
     */
    MCAPI bool addItem(class ItemActor &);
    /**
     * @hash   1600458079
     * @symbol ?addItem@ContainerComponent@@QEAA_NAEAVItemStack@@@Z
     */
    MCAPI bool addItem(class ItemStack &);
    /**
     * @hash   104441754
     * @symbol ?canBeSiphonedFrom@ContainerComponent@@QEBA_NXZ
     */
    MCAPI bool canBeSiphonedFrom() const;
    /**
     * @hash   -1090596020
     * @symbol ?canOpenContainer@ContainerComponent@@QEBA_NAEBVActor@@AEAVPlayer@@@Z
     */
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;
    /**
     * @hash   262191713
     * @symbol ?countItemsOfType@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     */
    MCAPI int countItemsOfType(class ItemStack const &) const;
    /**
     * @hash   79524904
     * @symbol ?dropContents@ContainerComponent@@QEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     */
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   -1968341743
     * @symbol ?findFirstSlotForItem@ContainerComponent@@QEBAHAEBVItemStack@@@Z
     */
    MCAPI int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @hash   51687704
     * @symbol ?getContainerSize@ContainerComponent@@QEBAHXZ
     */
    MCAPI int getContainerSize() const;
    /**
     * @hash   1300031347
     * @symbol ?getItem@ContainerComponent@@QEBAAEBVItemStack@@H@Z
     */
    MCAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -578015006
     * @symbol ?getSlots@ContainerComponent@@QEBA?BV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @hash   432197517
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemActor@@@Z
     */
    MCAPI bool hasRoomForItem(class ItemActor const &);
    /**
     * @hash   -278773433
     * @symbol ?hasRoomForItem@ContainerComponent@@QEAA_NAEBVItemStack@@@Z
     */
    MCAPI bool hasRoomForItem(class ItemStack const &);
    /**
     * @hash   2060321018
     * @symbol ?initFromDefinition@ContainerComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1617880338
     * @symbol ?isEmpty@ContainerComponent@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -822241846
     * @symbol ?isPrivate@ContainerComponent@@QEBA_NXZ
     */
    MCAPI bool isPrivate() const;
    /**
     * @hash   2056379322
     * @symbol ?openContainer@ContainerComponent@@QEAA_NAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI bool openContainer(class Actor &, class Player &);
    /**
     * @hash   -1683763692
     * @symbol ??4ContainerComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);
    /**
     * @hash   -2096173262
     * @symbol ?readAdditionalSaveData@ContainerComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1928812726
     * @symbol ?rebuildContainer@ContainerComponent@@QEAAXAEAVActor@@W4ContainerType@@H_NH2@Z
     */
    MCAPI void rebuildContainer(class Actor &, enum ContainerType, int, bool, int, bool);
    /**
     * @hash   -1205048579
     * @symbol ?removeItem@ContainerComponent@@QEAAXHH@Z
     */
    MCAPI void removeItem(int, int);
    /**
     * @hash   -312320837
     * @symbol ?removeItemsOfType@ContainerComponent@@QEAAXAEBVItemStack@@H@Z
     */
    MCAPI void removeItemsOfType(class ItemStack const &, int);
    /**
     * @hash   1997751768
     * @symbol ?serverInitItemStackIds@ContainerComponent@@QEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   -1700184690
     * @symbol ?setCustomName@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @hash   1226344938
     * @symbol ?setItem@ContainerComponent@@QEAA_NHAEBVItemStack@@@Z
     */
    MCAPI bool setItem(int, class ItemStack const &);
    /**
     * @hash   600223303
     * @symbol ?setLootTable@ContainerComponent@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @hash   -758438441
     * @symbol ?unpackLootTable@ContainerComponent@@QEAAXAEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void unpackLootTable(class Level &, class AutomaticID<class Dimension, int>);

};