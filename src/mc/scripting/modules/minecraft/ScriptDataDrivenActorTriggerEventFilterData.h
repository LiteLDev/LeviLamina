#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorEventFilterData.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct ActorUniqueID;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptDataDrivenActorTriggerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mEventType;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData> mActorData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDataDrivenActorTriggerEventFilterData(
        ::std::string const&   eventType,
        ::ActorUniqueID const& actorId,
        ::HashedString const&  typeIdHash
    );

    MCAPI ~ScriptDataDrivenActorTriggerEventFilterData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& eventType, ::ActorUniqueID const& actorId, ::HashedString const& typeIdHash);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
