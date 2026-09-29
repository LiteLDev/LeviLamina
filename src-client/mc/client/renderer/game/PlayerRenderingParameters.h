#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerRenderingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat4x4>                  mView;
    ::ll::TypedStorage<4, 64, ::glm::mat4x4>                  mProjection;
    ::ll::TypedStorage<4, 68, ::std::optional<::glm::mat4x4>> mItemInHandView;
    ::ll::TypedStorage<4, 68, ::std::optional<::glm::mat4x4>> mItemInHandProjection;
    ::ll::TypedStorage<4, 4, float>                           mAspectRatio;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                    mWorldOrigin;
    // NOLINTEND
};
