#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PointLightLODingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk315808;
    ::ll::UntypedStorage<8, 56> mUnk1883d7;
    ::ll::UntypedStorage<8, 56> mUnkcf115d;
    ::ll::UntypedStorage<8, 56> mUnk9cd23f;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PointLightLODingConfiguration();

    MCNAPI_C PointLightLODingConfiguration(::PointLightLODingConfiguration const&);

    MCNAPI_C ::PointLightLODingConfiguration& operator=(::PointLightLODingConfiguration const&);

    MCNAPI_C ~PointLightLODingConfiguration();
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

    MCNAPI_C void* $ctor(::PointLightLODingConfiguration const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
