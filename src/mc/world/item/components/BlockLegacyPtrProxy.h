#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLegacyPtrProxy {

public:
    // prevent constructor by default
    BlockLegacyPtrProxy& operator=(BlockLegacyPtrProxy const&) = delete;
    BlockLegacyPtrProxy(BlockLegacyPtrProxy const&)            = delete;
    BlockLegacyPtrProxy()                                      = delete;

public:
    /**
     * @symbol
     * ?setter\@BlockLegacyPtrProxy\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setter(std::string const&); // NOLINT
    /**
     * @symbol ?toBlockLegacyPtr\@BlockLegacyPtrProxy\@\@SAXAEAVBlockLegacyPtr\@\@AEBU1\@\@Z
     */
    MCAPI static void toBlockLegacyPtr(class BlockLegacyPtr&, struct BlockLegacyPtrProxy const&); // NOLINT
    /**
     * @symbol
     * ?toString\@BlockLegacyPtrProxy\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBU1\@\@Z
     */
    MCAPI static std::string toString(struct BlockLegacyPtrProxy const&); // NOLINT
};
