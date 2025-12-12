#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CloudConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk1a89eb;
    ::ll::UntypedStorage<4, 40> mUnk9473a6;
    ::ll::UntypedStorage<4, 40> mUnk7a96a5;
    ::ll::UntypedStorage<4, 40> mUnka61c4f;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudConfiguration& operator=(CloudConfiguration const&);
    CloudConfiguration(CloudConfiguration const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CloudConfiguration();
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
