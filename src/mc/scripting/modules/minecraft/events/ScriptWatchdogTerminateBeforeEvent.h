#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk77ec13;
    ::ll::UntypedStorage<1, 1> mUnkdff9e1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWatchdogTerminateBeforeEvent& operator=(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent(ScriptWatchdogTerminateBeforeEvent const&);
    ScriptWatchdogTerminateBeforeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptWatchdogTerminateBeforeEvent(::BeforeWatchdogTerminateEvent const& beforeWatchdogTerminateEvent, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::BeforeWatchdogTerminateEvent const& beforeWatchdogTerminateEvent, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
