#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantMatrix4x4; }
// clang-format on

namespace mce {

class WorldConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLDVIEWPROJ;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLD;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLDVIEW;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> PROJ;
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
