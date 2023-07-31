#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {

public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&) = delete;
    ItemStackResponseInfo(ItemStackResponseInfo const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ItemStackResponseInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackResponseInfo(struct ItemStackResponseInfo&&);
    /**
     * @symbol ??0ItemStackResponseInfo\@\@QEAA\@XZ
     */
    MCAPI ItemStackResponseInfo();
    /**
     * @symbol ??1ItemStackResponseInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseInfo();
    // NOLINTEND
};
