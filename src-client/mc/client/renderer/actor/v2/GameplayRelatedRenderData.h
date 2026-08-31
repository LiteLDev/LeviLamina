#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
namespace LightPropagation { class LightVolumeManager; }
// clang-format on

struct GameplayRelatedRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext*>                                  mContext;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                    mCameraTargetPos;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>                       mFog;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                              mCurrentShaderColor;
    ::ll::TypedStorage<1, 1, uchar>                                                      mClientID;
    ::ll::TypedStorage<4, 20, ::std::optional<::glm::vec4>>                              mNormalizedClipRegion;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LightPropagation::LightVolumeManager>> mLightVolumeManager;
    // NOLINTEND
};
