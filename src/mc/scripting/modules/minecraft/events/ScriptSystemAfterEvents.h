#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/ScriptTickSignal.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventList.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
class ServerLevel;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptSystemLevelEventListener; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleDescriptor; }
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
        virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> name;
        ::ll::TypedStorage<8, 8, uint64>         count;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SignalNameSubscriberCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    MCAPI ScriptSystemAfterEvents(::Scripting::WeakLifetimeScope const& scope, ::gsl::not_null<::ServerLevel*> level);

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemAfterEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCFOLD ::ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal();

    MCFOLD ::ScriptModuleMinecraft::ScriptAfterEventList const& getSignalList() const;

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

    MCAPI static void generateOrderDocumentationForVersion(
        ::Scripting::ModuleDescriptor const& moduleToDocumentFor,
        ::Json::Value&                       eventOrderArray
    );

    MCAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata<
        ::ScriptModuleMinecraft::ScriptSystemAfterEvents> const&
    getMetadata();
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
