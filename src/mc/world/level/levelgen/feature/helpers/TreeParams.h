#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

namespace TreeHelper {

struct TreeParams {

public:
    // prevent constructor by default
    TreeParams& operator=(TreeParams const&) = delete;
    TreeParams(TreeParams const&)            = delete;
    TreeParams()                             = delete;

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_placeBaseBlockCircle\@TreeParams\@TreeHelper\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _placeBaseBlockCircle(class IBlockWorldGenAPI&, class BlockPos const&) const;
    // NOLINTEND
};

}; // namespace TreeHelper
