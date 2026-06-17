#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class UIRenoirShaderPSConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_0;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_1;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_2;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_3;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIRenoirShaderPSConstants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
