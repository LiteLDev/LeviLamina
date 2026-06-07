#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorContainerAccessAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData>                   mActor;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorContainerAccessAfterEventIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorContainerAccessAfterEventIntermediateData(::Actor const& actor, ::Actor const& accessSourceActor);

    MCAPI ~ScriptActorContainerAccessAfterEventIntermediateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::Actor const& accessSourceActor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
