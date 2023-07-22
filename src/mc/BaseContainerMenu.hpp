/**
 * @file  BaseContainerMenu.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?broadcastChanges\@BaseContainerMenu\@\@UEAAXXZ
     */
    MCVAPI void broadcastChanges();
    /**
     * @symbol  ?containerContentChanged\@BaseContainerMenu\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @symbol  ?getContainerId\@BaseContainerMenu\@\@UEBA?AW4ContainerID\@\@XZ
     */
    MCVAPI enum class ContainerID getContainerId() const;
    /**
     * @symbol  ?getContainerType\@BaseContainerMenu\@\@UEBA?AW4ContainerType\@\@XZ
     */
    MCVAPI enum class ContainerType getContainerType() const;
    /**
     * @symbol  ?isResultSlot\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isResultSlot(int);
    /**
     * @symbol  ?isSlotDirty\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isSlotDirty(int);
    /**
     * @symbol  ?setContainerId\@BaseContainerMenu\@\@UEAAXW4ContainerID\@\@\@Z
     */
    MCVAPI void setContainerId(enum class ContainerID);
    /**
     * @symbol  ?setContainerType\@BaseContainerMenu\@\@UEAAXW4ContainerType\@\@\@Z
     */
    MCVAPI void setContainerType(enum class ContainerType);
    /**
     * @symbol  ?setData\@BaseContainerMenu\@\@UEAAXHH\@Z
     */
    MCVAPI void setData(int, int);
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~BaseContainerMenu();
#endif
    /**
     * @symbol  ??0BaseContainerMenu\@\@QEAA\@AEAVPlayer\@\@W4ContainerType\@\@\@Z
     */
    MCAPI BaseContainerMenu(class Player &, enum class ContainerType);

//protected:
    /**
     * @symbol  ?_saveLastSlots\@BaseContainerMenu\@\@IEAAXPEAVContainer\@\@\@Z
     */
    MCAPI void _saveLastSlots(class Container *);

protected:

};