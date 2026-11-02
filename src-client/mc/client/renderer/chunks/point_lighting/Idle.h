#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/culling/FrustumCuller.h"

namespace PointLighting::UpdatePhases {

struct Idle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>      mCameraPos;
    ::ll::TypedStorage<4, 12, ::glm::vec3>      mCameraForward;
    ::ll::TypedStorage<4, 204, ::FrustumCuller> mFrustumCuller;
    // NOLINTEND
};

} // namespace PointLighting::UpdatePhases
