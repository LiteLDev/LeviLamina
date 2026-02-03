#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
    ::ll::TypedStorage<8, 48, ::HashedString> mTypeIdHash;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptActorEventFilterData(::Actor const& actor);

    MCAPI ~ScriptActorEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData>
    create(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
