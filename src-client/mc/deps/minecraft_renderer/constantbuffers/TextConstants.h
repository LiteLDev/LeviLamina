#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat2; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class TextConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> GLYPH_SMOOTH_RADIUS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> OUTLINE_CUTOFF;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> SHADOW_SMOOTH_RADIUS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> SHADOW_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> SHADOW_OFFSET;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TextConstants();
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
