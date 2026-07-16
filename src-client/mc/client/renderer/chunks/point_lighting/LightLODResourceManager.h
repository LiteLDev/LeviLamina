#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { struct AnalyticLightResources; }
namespace PointLighting { struct BakedLightResources; }
// clang-format on

namespace PointLighting {

class LightLODResourceManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<
            ::std::shared_ptr<::PointLighting::ILightLODResourceProvider<::PointLighting::BakedLightResources>>>>
        mBakedLightResourceProviders;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<
            ::std::shared_ptr<::PointLighting::ILightLODResourceProvider<::PointLighting::AnalyticLightResources>>>>
        mAnalyticLightResourceProviders;
    // NOLINTEND
};

} // namespace PointLighting
