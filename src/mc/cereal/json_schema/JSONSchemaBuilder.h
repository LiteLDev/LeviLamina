#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JSONSchemaBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk24ca98;
    ::ll::UntypedStorage<1, 5>  mUnk91e834;
    ::ll::UntypedStorage<8, 32> mUnk4814af;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaBuilder& operator=(JSONSchemaBuilder const&);
    JSONSchemaBuilder(JSONSchemaBuilder const&);
    JSONSchemaBuilder();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::cereal::ReflectionCtx& context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_S void $dtor();
    // NOLINTEND
};
