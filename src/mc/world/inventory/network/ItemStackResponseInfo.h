#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {

public:
    // prevent constructor by default
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&) = delete;
    ItemStackResponseInfo(ItemStackResponseInfo const&)            = delete;

public:
    /**
     * @symbol ??0ItemStackResponseInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ItemStackResponseInfo(struct ItemStackResponseInfo&&); // NOLINT
    /**
     * @symbol ??0ItemStackResponseInfo\@\@QEAA\@XZ
     */
    MCAPI ItemStackResponseInfo(); // NOLINT
    /**
     * @symbol ??1ItemStackResponseInfo\@\@QEAA\@XZ
     */
    MCAPI ~ItemStackResponseInfo(); // NOLINT
};
