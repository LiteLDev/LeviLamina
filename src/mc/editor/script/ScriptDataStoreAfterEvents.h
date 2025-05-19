#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventMetadata.h"

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
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
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
    ::ll::UntypedStorage<8, 16> mUnk12d589;
    ::ll::UntypedStorage<8, 8>  mUnk19d7df;
    ::ll::UntypedStorage<8, 24> mUnkbce81d;
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
    MCNAPI ScriptDataStoreAfterEvents(::Editor::ScriptModule::ScriptDataStoreAfterEvents&&);

    MCNAPI void _handleDataStorePayloadEvent(
        ::HashedString const& dataTag,
        ::Editor::DataStore::EventType,
        ::Json::Value const& payload,
        ::Editor::DataStore::PayloadDescription const&
    );

    MCNAPI ::Editor::ScriptModule::ScriptDataStoreAfterEvents&
    operator=(::Editor::ScriptModule::ScriptDataStoreAfterEvents&&);

    MCNAPI void registerListeners(::Editor::Services::DataStoreServiceProvider& dataStoreService);

    MCNAPI ~ScriptDataStoreAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata<
        ::Editor::ScriptModule::ScriptDataStoreAfterEvents> const&
    mMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptDataStoreAfterEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
