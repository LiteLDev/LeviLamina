#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/EntityGoalFactory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorGoalFactory : public ::EntityGoalFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk678912;
    ::ll::UntypedStorage<1, 1> mUnk53ca53;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorGoalFactory& operator=(ActorGoalFactory const&);
    ActorGoalFactory(ActorGoalFactory const&);
    ActorGoalFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorGoalFactory(::cereal::ReflectionCtx& ctx, bool generateDoc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx& ctx, bool generateDoc);
    // NOLINTEND
};
