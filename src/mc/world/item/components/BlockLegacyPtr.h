#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockLegacyPtr {

public:
    // prevent constructor by default
    BlockLegacyPtr& operator=(BlockLegacyPtr const&) = delete;
    BlockLegacyPtr(BlockLegacyPtr const&)            = delete;
    BlockLegacyPtr()                                 = delete;

public:
    /**
     * @symbol
     * ?toString\@BlockLegacyPtr\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
};
