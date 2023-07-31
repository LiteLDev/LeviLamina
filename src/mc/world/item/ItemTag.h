#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemTag {

public:
    // prevent constructor by default
    ItemTag& operator=(ItemTag const&) = delete;
    ItemTag(ItemTag const&)            = delete;
    ItemTag()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ItemTag\@\@QEAA\@XZ
     */
    MCAPI ~ItemTag();
    // NOLINTEND
};
