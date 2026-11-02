#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/culling/FrustumCuller.h"
#include "mc/world/level/BlockPos.h"

namespace PointLighting::UpdatePhases {

struct ScoreCompute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec3>                             mCameraPos;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                             mCameraForward;
    ::ll::TypedStorage<4, 204, ::FrustumCuller>                        mFrustumCuller;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>> mCurrentScores;
    // NOLINTEND
};

} // namespace PointLighting::UpdatePhases
