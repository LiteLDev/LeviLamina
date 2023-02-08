/**
 * @file  ContainerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1677654952
     * @vftbl  0
     * @symbol  ?containerContentChanged\@ContainerComponent\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @hash   467017080
     * @symbol  ??0ContainerComponent\@\@QEAA\@XZ
     */
    MCAPI ContainerComponent();
    /**
     * @hash   534299041
     * @symbol  ??0ContainerComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ContainerComponent(class ContainerComponent &&);
    /**
     * @hash   1045886969
     * @symbol  ?_getRawContainerPtr\@ContainerComponent\@\@QEAAPEAVFillingContainer\@\@XZ
     */
    MCAPI class FillingContainer * _getRawContainerPtr();
    /**
     * @hash   -496644536
     * @symbol  ?addAdditionalSaveData\@ContainerComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -513645675
     * @symbol  ?addItem\@ContainerComponent\@\@QEAA_NAEAVItemActor\@\@\@Z
     */
    MCAPI bool addItem(class ItemActor &);
    /**
     * @hash   746828687
     * @symbol  ?addItem\@ContainerComponent\@\@QEAA_NAEAVItemStack\@\@\@Z
     */
    MCAPI bool addItem(class ItemStack &);
    /**
     * @hash   710944335
     * @symbol  ?addItem\@ContainerComponent\@\@QEAA_NAEAVItemStack\@\@HH\@Z
     */
    MCAPI bool addItem(class ItemStack &, int, int);
    /**
     * @hash   388374970
     * @symbol  ?canBeSiphonedFrom\@ContainerComponent\@\@QEBA_NXZ
     */
    MCAPI bool canBeSiphonedFrom() const;
    /**
     * @hash   -1943533492
     * @symbol  ?canOpenContainer\@ContainerComponent\@\@QEBA_NAEBVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool canOpenContainer(class Actor const &, class Player &) const;
    /**
     * @hash   -590730383
     * @symbol  ?countItemsOfType\@ContainerComponent\@\@QEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int countItemsOfType(class ItemStack const &) const;
    /**
     * @hash   -773366440
     * @symbol  ?dropContents\@ContainerComponent\@\@QEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   1473749585
     * @symbol  ?findFirstSlotForItem\@ContainerComponent\@\@QEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int findFirstSlotForItem(class ItemStack const &) const;
    /**
     * @hash   -801172888
     * @symbol  ?getContainerSize\@ContainerComponent\@\@QEBAHXZ
     */
    MCAPI int getContainerSize() const;
    /**
     * @hash   -1673251933
     * @symbol  ?getItem\@ContainerComponent\@\@QEBAAEBVItemStack\@\@H\@Z
     */
    MCAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -1430875598
     * @symbol  ?getSlots\@ContainerComponent\@\@QEBA?BV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ItemStack const *> const getSlots() const;
    /**
     * @hash   -420647699
     * @symbol  ?hasRoomForItem\@ContainerComponent\@\@QEAA_NAEBVItemActor\@\@\@Z
     */
    MCAPI bool hasRoomForItem(class ItemActor const &);
    /**
     * @hash   -1131618649
     * @symbol  ?hasRoomForItem\@ContainerComponent\@\@QEAA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool hasRoomForItem(class ItemStack const &);
    /**
     * @hash   1207491178
     * @symbol  ?initFromDefinition\@ContainerComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1824180238
     * @symbol  ?isEmpty\@ContainerComponent\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -538477766
     * @symbol  ?isPrivate\@ContainerComponent\@\@QEBA_NXZ
     */
    MCAPI bool isPrivate() const;
    /**
     * @hash   1203472602
     * @symbol  ?openContainer\@ContainerComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool openContainer(class Actor &, class Player &);
    /**
     * @hash   1758389140
     * @symbol  ??4ContainerComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ContainerComponent & operator=(class ContainerComponent &&);
    /**
     * @hash   1345979570
     * @symbol  ?readAdditionalSaveData\@ContainerComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1513355482
     * @symbol  ?rebuildContainer\@ContainerComponent\@\@QEAAXAEAVActor\@\@W4ContainerType\@\@H_NH2\@Z
     */
    MCAPI void rebuildContainer(class Actor &, enum class ContainerType, int, bool, int, bool);
    /**
     * @hash   -2057801539
     * @symbol  ?removeItem\@ContainerComponent\@\@QEAAXHH\@Z
     */
    MCAPI void removeItem(int, int);
    /**
     * @hash   -1165058421
     * @symbol  ?removeItemsOfType\@ContainerComponent\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void removeItemsOfType(class ItemStack const &, int);
    /**
     * @hash   1145060312
     * @symbol  ?serverInitItemStackIds\@ContainerComponent\@\@QEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1742106526
     * @symbol  ?setCustomName\@ContainerComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @hash   373684234
     * @symbol  ?setItem\@ContainerComponent\@\@QEAA_NHAEBVItemStack\@\@\@Z
     */
    MCAPI bool setItem(int, class ItemStack const &);
    /**
     * @hash   -252422025
     * @symbol  ?setLootTable\@ContainerComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI void setLootTable(std::string const &, int);
    /**
     * @hash   -1611083769
     * @symbol  ?unpackLootTable\@ContainerComponent\@\@QEAAXAEAVLevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void unpackLootTable(class Level &, class AutomaticID<class Dimension, int>);

};