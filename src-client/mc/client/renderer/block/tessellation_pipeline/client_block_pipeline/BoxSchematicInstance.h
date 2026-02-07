#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

namespace ClientBlockPipeline {

class BoxSchematicInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>        mLocalToGridTransform;
    ::ll::TypedStorage<4, 4, ::std::bitset<6>> mFaceMask;
    ::ll::TypedStorage<1, 1, bool>             mApplyTopRotationBugfix;
    ::ll::TypedStorage<1, 1, bool>             mFacesHaveCull;
    ::ll::TypedStorage<1, 1, uchar>            mCullAgainst;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
