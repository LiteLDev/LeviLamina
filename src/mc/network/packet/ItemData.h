#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemData {

public:
    // prevent constructor by default
    ItemData& operator=(ItemData const&) = delete;
    ItemData(ItemData const&)            = delete;
    ItemData()                           = delete;

public:
    /**
     * @symbol ??1ItemData\@\@QEAA\@XZ
     */
    MCAPI ~ItemData(); // NOLINT
};
