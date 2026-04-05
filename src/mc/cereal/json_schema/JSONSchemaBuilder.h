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
#ifdef LL_PLAT_S
    MCNAPI explicit JSONSchemaBuilder(::cereal::ReflectionCtx& context);

    MCNAPI ~JSONSchemaBuilder();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::cereal::ReflectionCtx& context);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
