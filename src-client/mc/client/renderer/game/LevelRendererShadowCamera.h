#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/LevelRendererCameraListeners.h"
#include "mc/deps/minecraft_renderer/game/LevelCullerType.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Player;
class ScreenContext;
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
    ::ll::UntypedStorage<8, 24>  mUnk411ff9;
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
    virtual void recalculateRenderDistance(float const) /*override*/;

    virtual void preRenderUpdate(::ScreenContext&, ::LevelRenderPreRenderUpdateParameters&) /*override*/;

    virtual void renderBlockEntities(::BaseActorRenderContext&, bool) /*override*/;

    virtual void queueRenderEntities(::LevelRenderPreRenderUpdateParameters const&) /*override*/;

    virtual void setupViewArea() /*override*/;

    virtual void setViewArea(::LevelRenderPreRenderUpdateParameters const&) /*override*/;

    virtual void updateViewArea(::LevelRenderPreRenderUpdateParameters const&) /*override*/;

    virtual void onDimensionChanged(::Player&) /*override*/;

    virtual void addCameraListenerToRenderChunkCoordinator() /*override*/;

    virtual void updateLevelCullerType(::LevelCullerType const newLevelCullerType) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateLevelCullerType(::LevelCullerType const newLevelCullerType);
    // NOLINTEND
};
