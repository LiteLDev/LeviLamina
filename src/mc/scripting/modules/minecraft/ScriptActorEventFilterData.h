#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
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
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptActorEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::ScriptModuleMinecraft::EventFilters::ScriptActorEventFilterData>
    create(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
