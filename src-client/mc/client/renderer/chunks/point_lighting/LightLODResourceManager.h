#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"
#include "mc/client/renderer/chunks/point_lighting/LightingTier.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool allTierResourcesAcquired(::BlockPos const& blockPos, ::PointLighting::LightingTier tier) const;

    MCAPI bool canReserve(::BlockPos const& blockPos, ::PointLighting::LightingTier tier) const;
    // NOLINTEND
};

} // namespace PointLighting
