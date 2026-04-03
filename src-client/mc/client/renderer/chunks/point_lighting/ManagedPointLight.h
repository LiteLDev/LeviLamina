#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/BakedLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/TransitioningLightState.h"
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"

namespace PointLighting {

struct ManagedPointLight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::mce::PointLightParameters> mLightParameters;
    ::ll::TypedStorage<
        4,
        12,
        ::std::variant<::PointLighting::BakedLightResources, ::PointLighting::AnalyticLightResources>>
                                                                                         mResources;
    ::ll::TypedStorage<4, 24, ::std::optional<::PointLighting::TransitioningLightState>> mTransitionState;
    // NOLINTEND
};

} // namespace PointLighting
