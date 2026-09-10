#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

namespace PointLighting::UpdatePhases {

class ScoreApply {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>> mCurrentScores;
    // NOLINTEND
};

} // namespace PointLighting::UpdatePhases
