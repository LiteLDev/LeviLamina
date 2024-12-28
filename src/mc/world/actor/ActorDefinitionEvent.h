#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
struct VariantParameterListConst;
// clang-format on

class ActorDefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkee8172;
    ::ll::UntypedStorage<8, 64>  mUnk814d59;
    ::ll::UntypedStorage<8, 32>  mUnk6f8f5b;
    ::ll::UntypedStorage<4, 4>   mUnka0a5b3;
    ::ll::UntypedStorage<8, 24>  mUnk79a6b0;
    ::ll::UntypedStorage<8, 24>  mUnke1d144;
    ::ll::UntypedStorage<8, 104> mUnkcaf7b5;
    ::ll::UntypedStorage<8, 24>  mUnk144c88;
    ::ll::UntypedStorage<8, 24>  mUnk987f0a;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionEvent(::ActorDefinitionEvent const&);

    MCAPI ActorDefinitionEvent(::ActorDefinitionEvent&&);

    MCAPI void _evaluateGroups(
        ::Actor&                                  entity,
        ::std::vector<::ActorDefinitionModifier>& modifications,
        ::VariantParameterListConst const&        list
    ) const;

    MCAPI ::ActorDefinitionEvent& operator=(::ActorDefinitionEvent const&);

    MCAPI ~ActorDefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionEvent const&);

    MCAPI void* $ctor(::ActorDefinitionEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
