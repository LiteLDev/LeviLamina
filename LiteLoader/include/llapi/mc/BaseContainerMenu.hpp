/**
 * @file  BaseContainerMenu.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseContainerMenu.
 *
 */
class BaseContainerMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECONTAINERMENU
public:
    class BaseContainerMenu& operator=(class BaseContainerMenu const &) = delete;
    BaseContainerMenu(class BaseContainerMenu const &) = delete;
    BaseContainerMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
    /**
     * @hash   -1412226854
     * @symbol ?broadcastChanges@BaseContainerMenu@@UEAAXXZ
     */
    MCVAPI void broadcastChanges();
    /**
     * @hash   772151803
     * @symbol ?containerContentChanged@BaseContainerMenu@@UEAAXH@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @hash   -1806322047
     * @symbol ?getContainerId@BaseContainerMenu@@UEBA?AW4ContainerID@@XZ
     */
    MCVAPI enum ContainerID getContainerId() const;
    /**
     * @hash   935433281
     * @symbol ?getContainerType@BaseContainerMenu@@UEBA?AW4ContainerType@@XZ
     */
    MCVAPI enum ContainerType getContainerType() const;
    /**
     * @hash   2122424640
     * @symbol ?isResultSlot@BaseContainerMenu@@UEAA_NH@Z
     */
    MCVAPI bool isResultSlot(int);
    /**
     * @hash   -634382949
     * @symbol ?isSlotDirty@BaseContainerMenu@@UEAA_NH@Z
     */
    MCVAPI bool isSlotDirty(int);
    /**
     * @hash   1701367868
     * @symbol ?setContainerId@BaseContainerMenu@@UEAAXW4ContainerID@@@Z
     */
    MCVAPI void setContainerId(enum ContainerID);
    /**
     * @hash   -1631592018
     * @symbol ?setContainerType@BaseContainerMenu@@UEAAXW4ContainerType@@@Z
     */
    MCVAPI void setContainerType(enum ContainerType);
    /**
     * @hash   -1846471324
     * @symbol ?setData@BaseContainerMenu@@UEAAXHH@Z
     */
    MCVAPI void setData(int, int);
    /**
     * @hash   -1121050184
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseContainerMenu();
#endif
    /**
     * @hash   -275272739
     * @symbol ??0BaseContainerMenu@@QEAA@AEAVPlayer@@W4ContainerType@@@Z
     */
    MCAPI BaseContainerMenu(class Player &, enum ContainerType);

//protected:
    /**
     * @hash   404073664
     * @symbol ?_saveLastSlots@BaseContainerMenu@@IEAAXPEAVContainer@@@Z
     */
    MCAPI void _saveLastSlots(class Container *);

protected:

};