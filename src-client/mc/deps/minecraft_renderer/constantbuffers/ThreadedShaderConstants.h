#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ShaderConstants.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

namespace mce {

class ThreadedShaderConstants : public ::mce::ShaderConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::mce::ConstantBufferContainer> mShaderConstants;
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
