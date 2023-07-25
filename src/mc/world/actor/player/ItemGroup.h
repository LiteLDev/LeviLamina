#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMGROUP
public:
    ItemGroup& operator=(ItemGroup const&) = delete;
    ItemGroup(ItemGroup const&)            = delete;
    ItemGroup()                            = delete;
#endif

public:
    /**
     * @symbol ??0ItemGroup\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI ItemGroup(class ItemInstance const&);
    /**
     * @symbol ?isEmpty\@ItemGroup\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ??1ItemGroup\@\@QEAA\@XZ
     */
    MCAPI ~ItemGroup();
};
