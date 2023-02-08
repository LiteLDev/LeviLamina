/**
 * @file  BaseContainerMenu.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -651356278
     * @symbol  ?broadcastChanges\@BaseContainerMenu\@\@UEAAXXZ
     */
    MCVAPI void broadcastChanges();
    /**
     * @hash   864038779
     * @symbol  ?containerContentChanged\@BaseContainerMenu\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @hash   1636522705
     * @symbol  ?getContainerId\@BaseContainerMenu\@\@UEBA?AW4ContainerID\@\@XZ
     */
    MCVAPI enum class ContainerID getContainerId() const;
    /**
     * @hash   83310737
     * @symbol  ?getContainerType\@BaseContainerMenu\@\@UEBA?AW4ContainerType\@\@XZ
     */
    MCVAPI enum class ContainerType getContainerType() const;
    /**
     * @hash   -2071922112
     * @symbol  ?isResultSlot\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isResultSlot(int);
    /**
     * @hash   -533762405
     * @symbol  ?isSlotDirty\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isSlotDirty(int);
    /**
     * @hash   1026576732
     * @symbol  ?setContainerId\@BaseContainerMenu\@\@UEAAXW4ContainerID\@\@\@Z
     */
    MCVAPI void setContainerId(enum class ContainerID);
    /**
     * @hash   1988584142
     * @symbol  ?setContainerType\@BaseContainerMenu\@\@UEAAXW4ContainerType\@\@\@Z
     */
    MCVAPI void setContainerType(enum class ContainerType);
    /**
     * @hash   -1754584348
     * @symbol  ?setData\@BaseContainerMenu\@\@UEAAXHH\@Z
     */
    MCVAPI void setData(int, int);
    /**
     * @hash   -360194984
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~BaseContainerMenu();
#endif
    /**
     * @hash   485582461
     * @symbol  ??0BaseContainerMenu\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@\@Z
     */
    MCAPI BaseContainerMenu(class Player &, enum class ContainerType);

//protected:
    /**
     * @hash   1164928864
     * @symbol  ?_saveLastSlots\@BaseContainerMenu\@\@IEAAXPEAVContainer\@\@\@Z
     */
    MCAPI void _saveLastSlots(class Container *);

protected:

};