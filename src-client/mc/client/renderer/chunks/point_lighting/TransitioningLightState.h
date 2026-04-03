#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"

namespace PointLighting {

struct TransitioningLightState {
public:
    // TransitioningLightState inner types define
    enum class Phase : uchar {
        Acquiring     = 0,
        Acquired      = 1,
        Transitioning = 2,
        Finalize      = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PointLighting::TransitioningLightState::Phase> mPhase;
    ::ll::TypedStorage<4, 4, float>                                           mCurrentBlendFactor;
    ::ll::TypedStorage<
        4,
        12,
        ::std::variant<::PointLighting::BakedLightResources, ::PointLighting::AnalyticLightResources>>
        mResources;
    // NOLINTEND
};

} // namespace PointLighting
