#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockPartVisibilityDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPARTVISIBILITYDESCRIPTION
public:
    BlockPartVisibilityDescription& operator=(BlockPartVisibilityDescription const&) = delete;
    BlockPartVisibilityDescription(BlockPartVisibilityDescription const&)            = delete;
    BlockPartVisibilityDescription()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?NameID\@BlockPartVisibilityDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
};
