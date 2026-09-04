#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class WeatherConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> POSITION_OFFSET;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> VELOCITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> ALPHA;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> VIEW_POSITION;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> SIZE_SCALE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> FORWARD;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> UV_INFO;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> PARTICLE_BOX;
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
