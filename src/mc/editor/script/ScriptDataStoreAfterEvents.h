#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ScriptDeferredFlushTracker;
namespace Editor::DataStore { struct PayloadDescription; }
namespace Editor::Services { class DataStoreServiceProvider; }
namespace Json { class Value; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreAfterEvents
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptDataStoreAfterEvents> {
public:
    // ScriptDataStoreAfterEvents inner types declare
    // clang-format off
    class ScriptDataStoreAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptDataStoreAfterEvents inner types define
    class ScriptDataStoreAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::Editor::ScriptModule::ScriptDataStoreAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 6
        virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

        // vIndex: 0
        virtual ~ScriptDataStoreAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk12d589;
    ::ll::UntypedStorage<8, 8>  mUnk19d7df;
    ::ll::UntypedStorage<8, 24> mUnkdc88c9;
    ::ll::UntypedStorage<8, 24> mUnk69c582;
    ::ll::UntypedStorage<8, 8>  mUnkd37419;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreAfterEvents& operator=(ScriptDataStoreAfterEvents const&);
    ScriptDataStoreAfterEvents(ScriptDataStoreAfterEvents const&);
    ScriptDataStoreAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDataStoreAfterEvents(::Editor::ScriptModule::ScriptDataStoreAfterEvents&&);

    MCAPI void
    _handleDataStorePayloadEvent(::HashedString const& dataTag, ::Editor::DataStore::EventType, ::Json::Value const& payload, ::Editor::DataStore::PayloadDescription const&);

    MCAPI ::Editor::ScriptModule::ScriptDataStoreAfterEvents&
    operator=(::Editor::ScriptModule::ScriptDataStoreAfterEvents&&);

    MCAPI void registerListeners(::Editor::Services::DataStoreServiceProvider& dataStoreService);

    MCAPI ~ScriptDataStoreAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        ::Editor::ScriptModule::ScriptDataStoreAfterEvents> const&
    mMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptDataStoreAfterEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
