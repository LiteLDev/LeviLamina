#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

struct ShaderSDKParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke62cac;
    ::ll::UntypedStorage<2, 2>  mUnka881ae;
    ::ll::UntypedStorage<2, 2>  mUnk693c6d;
    // NOLINTEND

public:
    // prevent constructor by default
    ShaderSDKParameters& operator=(ShaderSDKParameters const&);
    ShaderSDKParameters(ShaderSDKParameters const&);
    ShaderSDKParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ShaderSDKParameters(::dragon::framerenderer::ShaderSDKParameters&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::dragon::framerenderer::ShaderSDKParameters&&);
    // NOLINTEND
};

} // namespace dragon::framerenderer
