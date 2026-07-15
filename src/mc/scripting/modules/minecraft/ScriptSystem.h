#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace ScriptModuleMinecraft { class ScriptSystemInfo; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystem {
public:
    // ScriptSystem inner types define
    using Key = ::ScriptModuleMinecraft::ScriptGlobalEventListeners*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>>
        mSystemAfterEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents>>
        mSystemBeforeEventsHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ScriptModuleMinecraft::ScriptGlobalEventListeners*>>
        mGlobalEventListeners;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemInfo>>>
        mSystemInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystem& operator=(ScriptSystem const&);
    ScriptSystem(ScriptSystem const&);
    ScriptSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptSystem& operator=(::ScriptModuleMinecraft::ScriptSystem&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
