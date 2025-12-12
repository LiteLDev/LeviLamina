#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ShadowConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1400> mUnkcf4a0e;
    ::ll::UntypedStorage<8, 1400> mUnk6b889d;
    ::ll::UntypedStorage<8, 1400> mUnka2f286;
    ::ll::UntypedStorage<8, 1400> mUnkfafd62;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ShadowConfiguration();

    MCNAPI_C ShadowConfiguration(::ShadowConfiguration const&);

    MCNAPI_C ::ShadowConfiguration& operator=(::ShadowConfiguration&&);

    MCNAPI_C ::ShadowConfiguration& operator=(::ShadowConfiguration const&);

    MCNAPI_C ~ShadowConfiguration();
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

    MCNAPI_C void* $ctor(::ShadowConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
