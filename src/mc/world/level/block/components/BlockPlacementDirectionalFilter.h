#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementDirectionalFilter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPLACEMENTDIRECTIONALFILTER
public:
    BlockPlacementDirectionalFilter& operator=(BlockPlacementDirectionalFilter const&) = delete;
    BlockPlacementDirectionalFilter(BlockPlacementDirectionalFilter const&)            = delete;
    BlockPlacementDirectionalFilter()                                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?fromStringVector\@BlockPlacementDirectionalFilter\@\@SAXAEAU1\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static void fromStringVector(struct BlockPlacementDirectionalFilter&, std::vector<std::string>);
};
