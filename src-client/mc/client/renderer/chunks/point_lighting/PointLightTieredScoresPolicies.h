#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"

// auto generated forward declare list
// clang-format off
namespace PointLighting { class LightLODResourceManager; }
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

namespace PointLighting {

struct PointLightTieredScoresPolicies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LightContainer<::PointLighting::ManagedPointLight>&> mLightContainer;
    ::ll::TypedStorage<8, 8, ::PointLighting::LightLODResourceManager&>             mLODResourceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightTieredScoresPolicies& operator=(PointLightTieredScoresPolicies const&);
    PointLightTieredScoresPolicies(PointLightTieredScoresPolicies const&);
    PointLightTieredScoresPolicies();
};

} // namespace PointLighting
