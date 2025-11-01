#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventMetadata.h"
#include "mc/world/SimulationType.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventCoordinator;
class ScriptDeferredFlushTracker;
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectAfterEvents
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptProjectAfterEvents> {
public:
    // ScriptProjectAfterEvents inner types declare
    // clang-format off
    class ScriptProjectAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptProjectAfterEvents inner types define
    class ScriptProjectAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::Editor::ScriptModule::ScriptProjectAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 4
        virtual void onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

        // vIndex: 0
        virtual ~ScriptProjectAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk98d6d0;
    ::ll::UntypedStorage<8, 16> mUnk5f6d3a;
    ::ll::UntypedStorage<8, 8>  mUnk246edb;
    ::ll::UntypedStorage<8, 24> mUnka43d91;
    ::ll::UntypedStorage<8, 8>  mUnk161511;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectAfterEvents& operator=(ScriptProjectAfterEvents const&);
    ScriptProjectAfterEvents(ScriptProjectAfterEvents const&);
    ScriptProjectAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleSimulationTypeChanged(::SimulationType, ::SimulationType to);

    MCNAPI ::Editor::ScriptModule::ScriptProjectAfterEvents&
    operator=(::Editor::ScriptModule::ScriptProjectAfterEvents&&);

    MCNAPI void registerListeners(
        ::ScriptDeferredEventCoordinator&    eventCoordinator,
        ::Editor::ServiceProviderCollection& serviceProviders
    );

    MCNAPI ~ScriptProjectAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata<
        ::Editor::ScriptModule::ScriptProjectAfterEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
