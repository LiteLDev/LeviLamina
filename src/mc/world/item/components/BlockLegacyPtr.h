#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockLegacyPtr {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACYPTR
public:
    BlockLegacyPtr& operator=(BlockLegacyPtr const&) = delete;
    BlockLegacyPtr(BlockLegacyPtr const&)            = delete;
    BlockLegacyPtr()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?toString\@BlockLegacyPtr\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
};
