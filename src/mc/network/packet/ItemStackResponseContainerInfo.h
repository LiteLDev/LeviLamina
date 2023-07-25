#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseContainerInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSECONTAINERINFO
public:
    ItemStackResponseContainerInfo& operator=(ItemStackResponseContainerInfo const&) = delete;
    ItemStackResponseContainerInfo(ItemStackResponseContainerInfo const&)            = delete;
    ItemStackResponseContainerInfo()                                                 = delete;
#endif

public:
    /**
     * @symbol ??0ItemStackResponseContainerInfo\@\@QEAA\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI ItemStackResponseContainerInfo(enum class ContainerEnumName);
    /**
     * @symbol ??1ItemStackResponseContainerInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseContainerInfo();
};
