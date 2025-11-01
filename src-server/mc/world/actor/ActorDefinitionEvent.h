#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionEventType.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/response/ActorEventResponseCollection.h"

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
    // prevent constructor by default
    ActorDefinitionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionEvent(::ActorDefinitionEvent const&);

    MCNAPI void _evaluateGroups(
        ::Actor&                                  entity,
        ::std::vector<::ActorDefinitionModifier>& modifications,
        ::VariantParameterListConst const&        list
    ) const;

    MCNAPI ::ActorDefinitionEvent& operator=(::ActorDefinitionEvent const&);

    MCNAPI ~ActorDefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
