#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseContainerInfo {

public:
    // prevent constructor by default
    ItemStackResponseContainerInfo& operator=(ItemStackResponseContainerInfo const&) = delete;
    ItemStackResponseContainerInfo(ItemStackResponseContainerInfo const&)            = delete;
    ItemStackResponseContainerInfo()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ItemStackResponseContainerInfo\@\@QEAA\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI ItemStackResponseContainerInfo(enum class ContainerEnumName);
    /**
     * @symbol ??1ItemStackResponseContainerInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseContainerInfo();
    // NOLINTEND
};
