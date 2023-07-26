#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstanceProxy {

public:
    // prevent constructor by default
    BlockMaterialInstanceProxy& operator=(BlockMaterialInstanceProxy const&) = delete;
    BlockMaterialInstanceProxy()                                             = delete;

public:
    /**
     * @symbol ??0BlockMaterialInstanceProxy\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockMaterialInstanceProxy(struct BlockMaterialInstanceProxy const&); // NOLINT
    /**
     * @symbol ??1BlockMaterialInstanceProxy\@\@QEAA\@XZ
     */
    MCAPI ~BlockMaterialInstanceProxy(); // NOLINT
    /**
     * @symbol ?bindType\@BlockMaterialInstanceProxy\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};
