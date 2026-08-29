#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/shared/FinalRenderingData.h"

struct DDRv2FinalRenderingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 288, ::FinalRenderingData>        mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>> mPreviousBoneList;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>> mPreviousActorTransformList;
    // NOLINTEND
};
