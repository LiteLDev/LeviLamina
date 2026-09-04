#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat2; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class ActorConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> OVERLAY_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> TILE_LIGHT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> TILE_LIGHT_INTENSITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> BLOCK_LIGHT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> CHANGE_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> GLINT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> UV_ANIM;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> MULTIPLICATIVE_TINT_CHANGE_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_OFFSET;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_ROTATION;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_SCALE;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
