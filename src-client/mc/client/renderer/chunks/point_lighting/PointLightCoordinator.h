#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"
#include "mc/client/renderer/chunks/point_lighting/LightLODResourceManager.h"
#include "mc/client/renderer/chunks/point_lighting/PointLightTieredScoresPolicies.h"
#include "mc/client/renderer/chunks/point_lighting/TieredLightScores.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct BlockQueueEntry;
struct Bounds;
struct RuntimeLocalLightingConfig;
namespace PointLighting { struct ICandidacyHeuristic; }
namespace PointLighting { struct ManagedPointLight; }
namespace dragon::framerenderer { struct PointLightLODingParameters; }
namespace mce { struct AnalyticalLight; }
namespace mce { struct PointLightParameters; }
// clang-format on

namespace PointLighting {

class PointLightCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::LightContainer<::PointLighting::ManagedPointLight>>                   mLightContainer;
    ::ll::TypedStorage<1, 1, bool const>                                                              mLightLODsEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PointLighting::ICandidacyHeuristic>>> mLightHeuristics;
    ::ll::TypedStorage<4, 4, int> mFramesSinceLastUpdate;
    ::ll::TypedStorage<8, 56, ::PointLighting::TieredLightScores<::PointLighting::PointLightTieredScoresPolicies>>
                                                                                   mTieredScores;
    ::ll::TypedStorage<1, 1, bool>                                                 mRefreshLightScores;
    ::ll::TypedStorage<8, 48, ::PointLighting::LightLODResourceManager>            mLODResourceManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>> mLightingConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightCoordinator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PointLightCoordinator(bool lightLODsEnabled, ::std::weak_ptr<::RuntimeLocalLightingConfig const> lightingConfig);

    MCAPI void _advanceTransition(::BlockPos const& blockPos, ::PointLighting::ManagedPointLight& pointLight);

    MCAPI void _advanceTransitions();

    MCAPI ::std::unordered_map<::BlockPos, float> _computeCurrentLightScores() const;

    MCAPI ::std::optional<::mce::PointLightParameters>
    _createPointLightFromBlock(::Block const& block, ::BlockPos const& blockPos) const;

    MCAPI void _releaseAllResources(::BlockPos const& blockPos, ::PointLighting::ManagedPointLight& pointLight);

    MCAPI void applyBlockQueue(::std::vector<::BlockQueueEntry> const& queue);

    MCAPI void clear();

    MCAPI ::std::vector<::mce::AnalyticalLight> getAnalyticalLights() const;

    MCAPI void onBlockChanged(::BlockPos const& blockPos, ::Block const& block, ::Block const& oldBlock);

    MCAPI void update(
        ::std::optional<::Bounds> const&                           viewBounds,
        bool                                                       pointLightsEnabled,
        ::dragon::framerenderer::PointLightLODingParameters const& lodParams
    );

    MCAPI ~PointLightCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isPointLightCandidate(::Block const& block, ::RuntimeLocalLightingConfig const& lightConfig);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool lightLODsEnabled, ::std::weak_ptr<::RuntimeLocalLightingConfig const> lightingConfig);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PointLighting
