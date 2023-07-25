#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemTag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMTAG
public:
    ItemTag& operator=(ItemTag const&) = delete;
    ItemTag(ItemTag const&)            = delete;
    ItemTag()                          = delete;
#endif

public:
    /**
     * @symbol ??1ItemTag\@\@QEAA\@XZ
     */
    MCAPI ~ItemTag();
};
