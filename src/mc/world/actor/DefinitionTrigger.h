#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk7493a2;
    ::ll::UntypedStorage<2, 2>   mUnk3f7da8;
    ::ll::UntypedStorage<8, 216> mUnk801453;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefinitionTrigger(::DefinitionTrigger const&);

    MCNAPI ::DefinitionTrigger& operator=(::DefinitionTrigger&&);

    MCNAPI ::DefinitionTrigger& operator=(::DefinitionTrigger const&);

    MCNAPI ~DefinitionTrigger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DefinitionTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
