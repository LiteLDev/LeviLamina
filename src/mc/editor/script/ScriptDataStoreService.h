#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/EventType.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ScriptDeferredEventCoordinator;
namespace Editor::DataStore { struct PayloadDescription; }
namespace Editor::Services { class DataStoreServiceProvider; }
namespace Editor::Services { class TelemetryServiceProvider; }
namespace Json { class Value; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptDataStoreService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5c7779;
    ::ll::UntypedStorage<8, 8>  mUnka4b06c;
    ::ll::UntypedStorage<8, 8>  mUnkbacdc3;
    ::ll::UntypedStorage<8, 32> mUnkd49f60;
    ::ll::UntypedStorage<8, 32> mUnk8cb4e5;
    ::ll::UntypedStorage<8, 32> mUnk68c06f;
    ::ll::UntypedStorage<8, 32> mUnk58830f;
    ::ll::UntypedStorage<8, 32> mUnk2e76b8;
    ::ll::UntypedStorage<8, 16> mUnk77f17f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreService& operator=(ScriptDataStoreService const&);
    ScriptDataStoreService(ScriptDataStoreService const&);
    ScriptDataStoreService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDataStoreService(
        ::Editor::Services::DataStoreServiceProvider*      dataStoreService,
        ::Editor::Services::TelemetryServiceProvider*      telemetryService,
        ::gsl::not_null<::ScriptDeferredEventCoordinator*> eventCoordinator,
        ::Scripting::WeakLifetimeScope const&              scope
    );

    MCAPI void
    _handleDataStorePayloadEvent(::HashedString const& dataTag, ::Editor::DataStore::EventType eventType, ::Json::Value const& payload, ::Editor::DataStore::PayloadDescription const&);

    MCAPI ::Editor::ScriptModule::ScriptDataStoreService& operator=(::Editor::ScriptModule::ScriptDataStoreService&&);

    MCAPI ~ScriptDataStoreService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStoreService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::Services::DataStoreServiceProvider*      dataStoreService,
        ::Editor::Services::TelemetryServiceProvider*      telemetryService,
        ::gsl::not_null<::ScriptDeferredEventCoordinator*> eventCoordinator,
        ::Scripting::WeakLifetimeScope const&              scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
