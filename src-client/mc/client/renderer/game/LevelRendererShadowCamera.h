#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/client/renderer/game/ShadowRenderingParameters.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class IClientInstance;
class Level;
class LevelRenderer;
class Options;
class Player;
class ScreenContext;
class Vec3;
class WeakEntityRef;
struct LevelRenderPreRenderUpdateParameters;
struct ShadowCascadeState;
namespace mce::framebuilder { struct ShadowParameters; }
// clang-format on

class LevelRendererShadowCamera : public ::LevelRendererCameraListeners {
public:
    // LevelRendererShadowCamera inner types define
    enum class QueueShadowRenders : int {
        DoNotQueue  = 0,
        ShouldQueue = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 248> mUnk67b8c9;
    ::ll::UntypedStorage<4, 12>  mUnk50eba9;
    ::ll::UntypedStorage<4, 12>  mUnk99f048;
    ::ll::UntypedStorage<4, 4>   mUnk5968ec;
    ::ll::UntypedStorage<4, 4>   mUnka02294;
    ::ll::UntypedStorage<8, 24>  mUnkfc1203;
    ::ll::UntypedStorage<8, 8>   mUnk86c499;
    ::ll::UntypedStorage<8, 8>   mUnk489cc3;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererShadowCamera& operator=(LevelRendererShadowCamera const&);
    LevelRendererShadowCamera(LevelRendererShadowCamera const&);
    LevelRendererShadowCamera();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void recalculateRenderDistance(float const renderDistanceScalar) /*override*/;

    virtual void preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    ) /*override*/;

    virtual void renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer) /*override*/;

    virtual void queueRenderEntities(
        ::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters
    ) /*override*/;

    virtual void setupViewArea() /*override*/;

    virtual void
    setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters) /*override*/;

    virtual void
    updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters) /*override*/;

    virtual void onDimensionChanged(::Player& player) /*override*/;

    virtual void addCameraListenerToRenderChunkCoordinator() /*override*/;

    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) /*override*/;

    virtual ~LevelRendererShadowCamera() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelRendererShadowCamera(
        ::IClientInstance&           clientInstance,
        ::std::shared_ptr<::Options> options,
        ::Level&                     level,
        ::LevelRenderer&             levelRenderer,
        ::WeakEntityRef              localUser
    );

    MCNAPI float _calculateCascades(
        ::mce::framebuilder::ShadowParameters const&        shadowParameters,
        ::glm::mat4x4 const&                                playerView,
        float                                               angle,
        float                                               perpendicularAngle,
        float                                               aspect,
        float                                               fov,
        float                                               zNear,
        float                                               zFar,
        float                                               zRange,
        ::glm::vec3 const&                                  playerPosition,
        ::gsl::span<::ShadowRenderingParameters::ShadowMap> resultCascades,
        ::ShadowCascadeState&                               shadowCascadeState
    );

    MCNAPI void _calculatePlayerShadowMap(
        ::mce::framebuilder::ShadowParameters const& shadowParameters,
        ::Vec3 const&                                lightSourceDir
    );

    MCNAPI void _createFrustumCuller(
        ::gsl::span<::ShadowRenderingParameters::ShadowMap> cascades,
        ::glm::vec3 const&                                  playerPosition,
        ::ShadowRenderingParameters::ShadowMap const&       largestCascade
    );

    MCNAPI void removeCameraListenerToRenderChunkCoordinator();

    MCNAPI void setupCamera(
        ::glm::vec3 const&                              direction,
        float                                           angle,
        float                                           perpendicularAngle,
        float                                           fov,
        float                                           aspectRatio,
        ::glm::mat4x4 const&                            playerView,
        ::glm::mat4x4 const&                            playerProj,
        ::glm::vec3 const&                              playerPosition,
        ::mce::framebuilder::ShadowParameters const&    shadowParameters,
        ::ShadowCascadeState&                           shadowCascadeState,
        ::LevelRendererShadowCamera::QueueShadowRenders shouldQueueShadowRenders
    );

    MCNAPI void setupCloudCamera(
        float                                        angle,
        float                                        perpendicularAngle,
        ::glm::mat4x4 const&                         playerView,
        ::glm::mat4x4 const&                         playerProj,
        ::glm::vec3 const&                           playerPosition,
        ::mce::framebuilder::ShadowParameters const& shadowParameters,
        ::ShadowCascadeState&                        shadowCascadeState
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IClientInstance&           clientInstance,
        ::std::shared_ptr<::Options> options,
        ::Level&                     level,
        ::LevelRenderer&             levelRenderer,
        ::WeakEntityRef              localUser
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $recalculateRenderDistance(float const renderDistanceScalar);

    MCNAPI void $preRenderUpdate(
        ::ScreenContext&                        screenContext,
        ::LevelRenderPreRenderUpdateParameters& levelRenderPreRenderUpdateParameters
    );

    MCNAPI void $renderBlockEntities(::BaseActorRenderContext& renderContext, bool renderAlphaLayer);

    MCNAPI void
    $queueRenderEntities(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $setupViewArea();

    MCNAPI void $setViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $updateViewArea(::LevelRenderPreRenderUpdateParameters const& levelRenderPreRenderUpdateParameters);

    MCNAPI void $onDimensionChanged(::Player& player);

    MCNAPI void $addCameraListenerToRenderChunkCoordinator();

    MCNAPI void $updateLevelCullerType(::LevelCullerType const newLevelCullerType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForLevelListener();

    MCNAPI static void** $vftableForLevelRendererCamera();

    MCNAPI static void** $vftableForPlayerListener();
    // NOLINTEND
};
