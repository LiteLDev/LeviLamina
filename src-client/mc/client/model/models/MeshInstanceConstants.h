#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/CameraMatrices.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class MeshInstanceConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::vec4>            OVERLAY_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec4>            TILE_LIGHT_COLOR;
    ::ll::TypedStorage<4, 8, ::glm::vec2>             TILE_LIGHT_INTENSITY;
    ::ll::TypedStorage<4, 16, ::glm::vec4>            BLOCK_LIGHT_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec4>            CHANGE_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec4>            GLINT_COLOR;
    ::ll::TypedStorage<4, 16, ::glm::vec4>            UV_ANIM;
    ::ll::TypedStorage<4, 16, ::glm::vec4>            MULTIPLICATIVE_TINT_CHANGE_COLOR;
    ::ll::TypedStorage<4, 8, ::glm::vec2>             UV_OFFSET;
    ::ll::TypedStorage<4, 8, ::glm::vec2>             UV_ROTATION;
    ::ll::TypedStorage<4, 8, ::glm::vec2>             UV_SCALE;
    ::ll::TypedStorage<4, 192, ::mce::CameraMatrices> mCamera;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshInstanceConstants& operator=(MeshInstanceConstants const&);
    MeshInstanceConstants();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeshInstanceConstants(::MeshInstanceConstants&&);

    MCAPI MeshInstanceConstants(::MeshInstanceConstants const&);

    MCAPI explicit MeshInstanceConstants(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::MeshInstanceConstants&&);

    MCFOLD void* $ctor(::MeshInstanceConstants const&);

    MCAPI void* $ctor(::ScreenContext& screenContext);
    // NOLINTEND
};
