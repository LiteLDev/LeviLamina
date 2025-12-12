#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct ActorDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk8f57eb;
    ::ll::UntypedStorage<2, 2>   mUnkaaf8a1;
    ::ll::UntypedStorage<8, 328> mUnka841d9;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionTrigger& operator=(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_120::ActorDefinitionTrigger&
    operator=(::SharedTypes::v1_21_120::ActorDefinitionTrigger&&);

    MCNAPI ~ActorDefinitionTrigger();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
