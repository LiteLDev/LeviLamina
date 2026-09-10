#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"
#include "mc/client/renderer/chunks/point_lighting/ClearHeuristics.h"
#include "mc/client/renderer/chunks/point_lighting/Idle.h"
#include "mc/client/renderer/chunks/point_lighting/LightLODResourceManager.h"
#include "mc/client/renderer/chunks/point_lighting/PointLightTieredScoresPolicies.h"
#include "mc/client/renderer/chunks/point_lighting/ScoreApply.h"
#include "mc/client/renderer/chunks/point_lighting/ScoreCompute.h"
#include "mc/client/renderer/chunks/point_lighting/TierReconcile.h"
#include "mc/client/renderer/chunks/point_lighting/TieredLightScores.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class RuntimeLocalLightingConfig;
struct BlockQueueEntry;
struct Bounds;
namespace PointLighting { struct ICandidacyHeuristic; }
namespace PointLighting { struct ManagedPointLight; }
namespace mce { struct AnalyticalLight; }
namespace mce { struct PointLightParameters; }
namespace mce::framebuilder { struct PointLightParameters; }
// clang-format on

namespace PointLighting {

class PointLightCoordinator {
public:
    // PointLightCoordinator inner types define
    using UpdatePhase = ::std::variant<
        ::PointLighting::UpdatePhases::Idle,
        ::PointLighting::UpdatePhases::ScoreCompute,
        ::PointLighting::UpdatePhases::ScoreApply,
        ::PointLighting::UpdatePhases::TierReconcile,
        ::PointLighting::UpdatePhases::ClearHeuristics>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::LightContainer<::PointLighting::ManagedPointLight>>                   mLightContainer;
    ::ll::TypedStorage<1, 1, bool const>                                                              mLightLODsEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::PointLighting::ICandidacyHeuristic>>> mLightHeuristics;
    ::ll::TypedStorage<4, 4, int> mFramesSinceLastUpdate;
    ::ll::TypedStorage<8, 568, ::PointLighting::TieredLightScores<::PointLighting::PointLightTieredScoresPolicies>>
                                                                                   mTieredScores;
    ::ll::TypedStorage<1, 1, bool>                                                 mRefreshLightScores;
    ::ll::TypedStorage<8, 48, ::PointLighting::LightLODResourceManager>            mLODResourceManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>> mLightingConfig;
    ::ll::TypedStorage<
        8,
        728,
        ::std::variant<
            ::PointLighting::UpdatePhases::Idle,
            ::PointLighting::UpdatePhases::ScoreCompute,
            ::PointLighting::UpdatePhases::ScoreApply,
            ::PointLighting::UpdatePhases::TierReconcile,
            ::PointLighting::UpdatePhases::ClearHeuristics>>
        mCurrentPhase;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::variant<
        ::PointLighting::UpdatePhases::Idle,
        ::PointLighting::UpdatePhases::ScoreCompute,
        ::PointLighting::UpdatePhases::ScoreApply,
        ::PointLighting::UpdatePhases::TierReconcile,
        ::PointLighting::UpdatePhases::ClearHeuristics>>
    _changePhase(::PointLighting::UpdatePhases::ScoreCompute& phase);

    MCAPI void _clearHeuristics();

    MCAPI void _computeCurrentLightScores(
        ::PointLighting::UpdatePhases::ScoreCompute&     phase,
        ::mce::framebuilder::PointLightParameters const& params
    ) const;

    MCAPI ::std::optional<::mce::PointLightParameters>
    _createPointLightFromBlock(::Block const& block, ::BlockPos const& blockPos) const;

    MCAPI void _releaseAllResources(::BlockPos const& blockPos, ::PointLighting::ManagedPointLight& pointLight);

    MCAPI void
    _update(::PointLighting::UpdatePhases::ScoreApply& phase, ::mce::framebuilder::PointLightParameters const&);

    MCAPI void applyBlockQueue(::std::vector<::BlockQueueEntry> const& queue);

    MCAPI void clear();

    MCAPI ::std::vector<::mce::AnalyticalLight> getAnalyticalLights() const;

    MCAPI void onBlockChanged(::BlockPos const& blockPos, ::Block const& block, ::Block const& oldBlock);

    MCAPI void update(
        ::std::optional<::Bounds> const&                 viewBounds,
        bool                                             pointLightsEnabled,
        ::mce::framebuilder::PointLightParameters const& params
    );

    MCAPI ~PointLightCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isPointLightCandidate(::Block const& block, ::RuntimeLocalLightingConfig const& lightConfig);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PointLighting
