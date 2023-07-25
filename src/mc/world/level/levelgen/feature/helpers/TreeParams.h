#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TreeHelper {

struct TreeParams {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TREEHELPER_TREEPARAMS
public:
    TreeParams& operator=(TreeParams const&) = delete;
    TreeParams(TreeParams const&)            = delete;
    TreeParams()                             = delete;
#endif

public:
    // private:
    /**
     * @symbol ?_placeBaseBlockCircle\@TreeParams\@TreeHelper\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _placeBaseBlockCircle(class IBlockWorldGenAPI&, class BlockPos const&) const;
};

}; // namespace TreeHelper
