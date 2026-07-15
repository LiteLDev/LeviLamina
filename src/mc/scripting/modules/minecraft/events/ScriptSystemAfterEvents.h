#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/ScriptTickSignal.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventList.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemLevelEventListener; }
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptSystemAfterEvents> {
public:
    // ScriptSystemAfterEvents inner types declare
    // clang-format off
    class ScriptSystemAfterEventsDeferredEventListener;
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemAfterEvents inner types define
    class ScriptSystemAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleMinecraft::ScriptSystemAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                                   mScope;
    ::ll::TypedStorage<8, 16, ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents>> mHandle;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>>                                                   mLevel;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptGlobalEventListeners*> mGlobalEventListener;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptSystemLevelEventListener>>
                                                                             mSystemLevelEventListener;
    ::ll::TypedStorage<8, 56, ::ScriptModuleMinecraft::ScriptTickSignal>     mScriptTickSignal;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptAfterEventList> mEvents;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::ScriptModuleMinecraft::ScriptSystemAfterEvents::ScriptSystemAfterEventsDeferredEventListener>>
        mScriptDeferredEventListener;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCAPI ::ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(::ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    MCAPI void registerListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents> handle,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&                             listeners
    );

    MCAPI ~ScriptSystemAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
