#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstanceProxy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCEPROXY
public:
    BlockMaterialInstanceProxy& operator=(BlockMaterialInstanceProxy const&) = delete;
    BlockMaterialInstanceProxy()                                             = delete;
#endif

public:
    /**
     * @symbol ??0BlockMaterialInstanceProxy\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockMaterialInstanceProxy(struct BlockMaterialInstanceProxy const&);
    /**
     * @symbol ??1BlockMaterialInstanceProxy\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstanceProxy();
    /**
     * @symbol ?bindType\@BlockMaterialInstanceProxy\@\@SAXXZ
     */
    MCAPI static void bindType();
};
