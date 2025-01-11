#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct VariantParameterListConst;
// clang-format on

class ActorDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf67777;
    ::ll::UntypedStorage<2, 2>  mUnk444ddb;
    ::ll::UntypedStorage<8, 64> mUnk4eb2d9;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTrigger(ActorDefinitionTrigger const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionTrigger();

    MCAPI bool canTrigger(::Actor const& entity, ::VariantParameterListConst const& list) const;

    MCAPI ::ActorDefinitionTrigger& operator=(::ActorDefinitionTrigger&&);

    MCAPI ::ActorDefinitionTrigger& operator=(::ActorDefinitionTrigger const&);

    MCAPI ~ActorDefinitionTrigger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
