#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemGroup {

public:
    // prevent constructor by default
    ItemGroup& operator=(ItemGroup const&) = delete;
    ItemGroup(ItemGroup const&)            = delete;
    ItemGroup()                            = delete;

public:
    /**
     * @symbol ??0ItemGroup\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI ItemGroup(class ItemInstance const&); // NOLINT
    /**
     * @symbol ?isEmpty\@ItemGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ??1ItemGroup\@\@QEAA\@XZ
     */
    MCAPI ~ItemGroup(); // NOLINT
};
