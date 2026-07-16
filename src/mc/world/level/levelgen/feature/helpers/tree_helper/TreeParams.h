#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

namespace TreeHelper {

struct TreeParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                               mNumBaseClusters;
    ::ll::TypedStorage<4, 4, int>                               mClusterRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mValidBaseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBaseMayReplace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayGrowOn;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayGrowThrough;
    // NOLINTEND
};

} // namespace TreeHelper
