#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMDATA
public:
    ItemData& operator=(ItemData const&) = delete;
    ItemData(ItemData const&)            = delete;
    ItemData()                           = delete;
#endif

public:
    /**
     * @symbol ??1ItemData\@\@QEAA\@XZ
     */
    MCAPI ~ItemData();
};
