#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPlayerLeaveBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5003e0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerLeaveBeforeEvent& operator=(ScriptPlayerLeaveBeforeEvent const&);
    ScriptPlayerLeaveBeforeEvent(ScriptPlayerLeaveBeforeEvent const&);
    ScriptPlayerLeaveBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlayerLeaveBeforeEvent(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptPlayerLeaveBeforeEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
