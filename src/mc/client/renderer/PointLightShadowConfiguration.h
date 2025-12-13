#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PointLightShadowConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnk6988ad;
    ::ll::UntypedStorage<4, 36> mUnk3b39bf;
    ::ll::UntypedStorage<4, 36> mUnkcd5c62;
    ::ll::UntypedStorage<4, 36> mUnka7f63c;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightShadowConfiguration& operator=(PointLightShadowConfiguration const&);
    PointLightShadowConfiguration(PointLightShadowConfiguration const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PointLightShadowConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND
};
