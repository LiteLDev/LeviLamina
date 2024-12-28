#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { struct ScriptModuleShutdownBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptModuleStartupBeforeEvent; }
namespace ScriptModuleMinecraft { struct ScriptWatchdogTerminateBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemBeforeEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
public:
    // ScriptSystemBeforeEvents inner types declare
    // clang-format off
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemBeforeEvents inner types define
    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkacdf6b;
        ::ll::UntypedStorage<8, 8>  mUnk5d02c5;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SignalNameSubscriberCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke94250;
    ::ll::UntypedStorage<8, 16> mUnk1881fb;
    ::ll::UntypedStorage<8, 8>  mUnk578908;
    ::ll::UntypedStorage<8, 32> mUnkb07964;
    ::ll::UntypedStorage<8, 32> mUnkd8d158;
    ::ll::UntypedStorage<8, 32> mUnkc1b293;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemBeforeEvents& operator=(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSystemBeforeEvents(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemBeforeEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCAPI void onBeforeModuleShutdown(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptModuleShutdownBeforeEvent> eventData
    );

    MCAPI void onBeforeModuleStartup(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptModuleStartupBeforeEvent> eventData
    );

    MCAPI void onBeforeWatchdogTerminate(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWatchdogTerminateBeforeEvent>
            beforeWatchdogTerminateEvent
    );

    MCAPI void registerHandler(::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> handle
    );

    MCAPI ~ScriptSystemBeforeEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
