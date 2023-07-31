#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstanceProxy {

public:
    // prevent constructor by default
    BlockMaterialInstanceProxy& operator=(BlockMaterialInstanceProxy const&) = delete;
    BlockMaterialInstanceProxy()                                             = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
