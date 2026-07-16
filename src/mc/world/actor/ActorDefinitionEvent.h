#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionEventType.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/response/ActorEventResponseCollection.h"

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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ActorDefinitionEvent();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorDefinitionEvent& operator=(ActorDefinitionEvent const&);
    ActorDefinitionEvent();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionEvent(::ActorDefinitionEvent const&);

#ifdef LL_PLAT_S
    MCAPI ::ActorDefinitionEvent& operator=(::ActorDefinitionEvent const&);

    MCAPI void setName(::std::string name);
#endif

    MCAPI ~ActorDefinitionEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
