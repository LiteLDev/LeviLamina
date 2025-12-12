#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ReflectionConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 128> mUnk7122f2;
    ::ll::UntypedStorage<4, 128> mUnkf7dcc2;
    ::ll::UntypedStorage<4, 128> mUnk28cd80;
    ::ll::UntypedStorage<4, 128> mUnkfa191e;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionConfiguration& operator=(ReflectionConfiguration const&);
    ReflectionConfiguration(ReflectionConfiguration const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ReflectionConfiguration();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void bindReflectionParameterType(::cereal::ReflectionCtx& ctx);

    MCNAPI_C static void bindRegenParameterType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND
};
