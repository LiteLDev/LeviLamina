#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKRESPONSEINFO
public:
    ItemStackResponseInfo& operator=(ItemStackResponseInfo const&) = delete;
    ItemStackResponseInfo(ItemStackResponseInfo const&)            = delete;
#endif

public:
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
};
