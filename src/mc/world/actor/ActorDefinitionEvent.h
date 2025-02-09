#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionEventType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class ActorFilterGroup;
struct ActorDefinitionModifier;
struct ActorEventResponseCollection;
struct VariantParameterListConst;
// clang-format on

class ActorDefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    mFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                         mName;
    ::ll::TypedStorage<4, 4, ::ActorDefinitionEventType>             mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>          mGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>          mRemoveGroups;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionEvent>> mChildren;
    ::ll::TypedStorage<8, 24, ::ActorEventResponseCollection>        mResponses;
    // NOLINTEND

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
