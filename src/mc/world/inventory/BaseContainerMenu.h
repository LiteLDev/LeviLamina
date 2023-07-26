#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BaseContainerMenu {

public:
    // prevent constructor by default
    BaseContainerMenu& operator=(BaseContainerMenu const&) = delete;
    BaseContainerMenu(BaseContainerMenu const&)            = delete;
    BaseContainerMenu()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
    /**
     * @symbol ?broadcastChanges\@BaseContainerMenu\@\@UEAAXXZ
     */
    MCVAPI void broadcastChanges(); // NOLINT
    /**
     * @symbol ?containerContentChanged\@BaseContainerMenu\@\@UEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int); // NOLINT
    /**
     * @symbol ?getContainerId\@BaseContainerMenu\@\@UEBA?AW4ContainerID\@\@XZ
     */
    MCVAPI enum class ContainerID getContainerId() const; // NOLINT
    /**
     * @symbol ?getContainerType\@BaseContainerMenu\@\@UEBA?AW4ContainerType\@\@XZ
     */
    MCVAPI enum class ContainerType getContainerType() const; // NOLINT
    /**
     * @symbol ?isResultSlot\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isResultSlot(int); // NOLINT
    /**
     * @symbol ?isSlotDirty\@BaseContainerMenu\@\@UEAA_NH\@Z
     */
    MCVAPI bool isSlotDirty(int); // NOLINT
    /**
     * @symbol ?setContainerId\@BaseContainerMenu\@\@UEAAXW4ContainerID\@\@\@Z
     */
    MCVAPI void setContainerId(enum class ContainerID); // NOLINT
    /**
     * @symbol ?setContainerType\@BaseContainerMenu\@\@UEAAXW4ContainerType\@\@\@Z
     */
    MCVAPI void setContainerType(enum class ContainerType); // NOLINT
    /**
     * @symbol ?setData\@BaseContainerMenu\@\@UEAAXHH\@Z
     */
    MCVAPI void setData(int, int); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseContainerMenu(); // NOLINT
#endif

    // protected:
    /**
     * @symbol ?_saveLastSlots\@BaseContainerMenu\@\@IEAAXPEAVContainer\@\@\@Z
     */
    MCAPI void _saveLastSlots(class Container*); // NOLINT

protected:
};
