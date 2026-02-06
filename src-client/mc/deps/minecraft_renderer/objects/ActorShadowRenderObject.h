#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorShadowRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsItem;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mPos;
    ::ll::TypedStorage<4, 4, float>        mRadius;
    // NOLINTEND
};
