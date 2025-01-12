#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct ActorUniqueID;
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptActorEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcb08a4;
    ::ll::UntypedStorage<8, 48> mUnkc3bc53;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorEventFilterData& operator=(ScriptActorEventFilterData const&);
    ScriptActorEventFilterData(ScriptActorEventFilterData const&);
    ScriptActorEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorEventFilterData(::ActorUniqueID const& actorId, ::HashedString const& typeIdHash);

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
    MCAPI void* $ctor(::ActorUniqueID const& actorId, ::HashedString const& typeIdHash);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
