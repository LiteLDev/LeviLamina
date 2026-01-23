#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptEntityRefType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                             mRef;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptEntityRefType> mActorType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mId;
    ::ll::TypedStorage<8, 48, ::HashedString>                              mTypeId;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>>              mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorData(::ScriptModuleMinecraft::ScriptActorData const&);

    MCAPI explicit ScriptActorData(::Actor const& actor);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>
    getPlayer(::Scripting::WeakLifetimeScope const& scope) const;

    MCAPI ::ScriptModuleMinecraft::ScriptActorData& operator=(::ScriptModuleMinecraft::ScriptActorData&&);

    MCAPI ::ScriptModuleMinecraft::ScriptActorData& operator=(::ScriptModuleMinecraft::ScriptActorData const&);

    MCAPI ~ScriptActorData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&);

    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
