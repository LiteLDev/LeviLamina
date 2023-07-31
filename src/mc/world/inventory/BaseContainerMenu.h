#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseContainerMenu {

public:
    // prevent constructor by default
    BaseContainerMenu& operator=(BaseContainerMenu const&) = delete;
    BaseContainerMenu(BaseContainerMenu const&)            = delete;
    BaseContainerMenu()                                    = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
    /**
     * @symbol ?broadcastChanges\@BaseContainerMenu\@\@UEAAXXZ
     */
    MCVAPI void broadcastChanges();
    /**
     * @symbol ?containerContentChanged\@BaseContainerMenu\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @symbol ?getContainerId\@BaseContainerMenu\@\@UEBA?AW4ContainerID\@\@XZ
     */
    MCVAPI enum class ContainerID getContainerId() const;
    /**
     * @symbol ?getContainerType\@BaseContainerMenu\@\@UEBA?AW4ContainerType\@\@XZ
     */
    MCVAPI enum class ContainerType getContainerType() const;
    /**
     * @symbol ?isResultSlot\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isResultSlot(int);
    /**
     * @symbol ?isSlotDirty\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isSlotDirty(int);
    /**
     * @symbol ?setContainerId\@BaseContainerMenu\@\@UEAAXW4ContainerID\@\@\@Z
     */
    MCVAPI void setContainerId(enum class ContainerID);
    /**
     * @symbol ?setContainerType\@BaseContainerMenu\@\@UEAAXW4ContainerType\@\@\@Z
     */
    MCVAPI void setContainerType(enum class ContainerType);
    /**
     * @symbol ?setData\@BaseContainerMenu\@\@UEAAXHH\@Z
     */
    MCVAPI void setData(int, int);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseContainerMenu();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_saveLastSlots\@BaseContainerMenu\@\@IEAAXPEAVContainer\@\@\@Z
     */
    MCAPI void _saveLastSlots(class Container*);
    // NOLINTEND
};
