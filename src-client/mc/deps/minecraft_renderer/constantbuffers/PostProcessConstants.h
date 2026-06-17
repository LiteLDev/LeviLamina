#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantInt1; }
// clang-format on

namespace mce {

class PostProcessConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantInt1*>   GaussianBlurSize;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> DepthOfFieldNearEndDepth;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> DepthOfFieldFarStartDepth;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> DepthOfFieldFarEndDepth;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PostProcessConstants();
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
