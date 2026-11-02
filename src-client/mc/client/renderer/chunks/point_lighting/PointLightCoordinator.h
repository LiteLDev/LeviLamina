#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/LightContainer.h"
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
class BlockSource;
class FrustumCuller;
class RuntimeLocalLightingConfig;
class SubChunkPos;
struct BlockQueueEntry;
struct Bounds;
namespace PointLighting { struct ManagedPointLight; }
namespace mce { struct AnalyticalLight; }
namespace mce { struct PointLightParameters; }
namespace mce::framebuilder { struct PointLightBudgetParameters; }
// clang-format on

namespace PointLighting {

class PointLightCoordinator {
public:
    // PointLightCoordinator inner types declare
    // clang-format off
    struct UpdateParameters;
    // clang-format on

    // PointLightCoordinator inner types define
    struct UpdateParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::framebuilder::PointLightBudgetParameters const&> mPointLightBudgetParams;
        ::ll::TypedStorage<8, 8, ::glm::vec3 const&>                                     mCameraPos;
        ::ll::TypedStorage<8, 8, ::glm::vec3 const&>                                     mCameraForward;
        ::ll::TypedStorage<8, 8, ::FrustumCuller const&>                                 mFrustumCuller;
        // NOLINTEND

    public:
        // prevent constructor by default
        UpdateParameters& operator=(UpdateParameters const&);
        UpdateParameters(UpdateParameters const&);
        UpdateParameters();
    };

    using UpdatePhase = ::std::variant<
        ::PointLighting::UpdatePhases::Idle,
        ::PointLighting::UpdatePhases::ScoreCompute,
        ::PointLighting::UpdatePhases::ScoreApply,
        ::PointLighting::UpdatePhases::TierReconcile>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::LightContainer<::PointLighting::ManagedPointLight>> mLightContainer;
    ::ll::TypedStorage<1, 1, bool const>                                            mLightLODsEnabled;
    ::ll::TypedStorage<4, 4, int>                                                   mFramesSinceLastUpdate;
    ::ll::TypedStorage<8, 568, ::PointLighting::TieredLightScores<::PointLighting::PointLightTieredScoresPolicies>>
                                                                                   mTieredScores;
    ::ll::TypedStorage<1, 1, bool>                                                 mRefreshLightScores;
    ::ll::TypedStorage<8, 48, ::PointLighting::LightLODResourceManager>            mLODResourceManager;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>> mLightingConfig;
    ::ll::TypedStorage<
        8,
        304,
        ::std::variant<
            ::PointLighting::UpdatePhases::Idle,
            ::PointLighting::UpdatePhases::ScoreCompute,
            ::PointLighting::UpdatePhases::ScoreApply,
            ::PointLighting::UpdatePhases::TierReconcile>>
        mCurrentPhase;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightCoordinator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PointLightCoordinator(bool lightLODsEnabled, ::std::weak_ptr<::RuntimeLocalLightingConfig const> lightingConfig);

    MCNAPI ::std::optional<::mce::PointLightParameters>
    _createPointLightFromBlock(::Block const& block, ::BlockPos const& blockPos) const;

    MCNAPI void _releaseAllResources(::BlockPos const& blockPos, ::PointLighting::ManagedPointLight& pointLight);

    MCNAPI void applyBlockQueue(::SubChunkPos const& subChunkPos, ::std::vector<::BlockQueueEntry> const& queue);

    MCNAPI void clear();

    MCNAPI ::std::vector<::mce::AnalyticalLight> getAnalyticalLights() const;

    MCNAPI void reset(::BlockSource const& region);

    MCNAPI void update(
        ::std::optional<::Bounds> const&                       viewBounds,
        bool                                                   pointLightsEnabled,
        ::mce::framebuilder::PointLightBudgetParameters const& params,
        ::glm::vec3 const&                                     cameraPos,
        ::glm::vec3 const&                                     cameraForward,
        ::FrustumCuller const&                                 frustumCuller
    );

    MCNAPI ~PointLightCoordinator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool lightLODsEnabled, ::std::weak_ptr<::RuntimeLocalLightingConfig const> lightingConfig);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PointLighting
