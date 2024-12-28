#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilderReadOnly.h"

// auto generated forward declare list
// clang-format off
class Actor;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb81c95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorRemoveBeforeEvent& operator=(ScriptActorRemoveBeforeEvent const&);
    ScriptActorRemoveBeforeEvent(ScriptActorRemoveBeforeEvent const&);
    ScriptActorRemoveBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActorRemoveBeforeEvent(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorRemoveBeforeEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
