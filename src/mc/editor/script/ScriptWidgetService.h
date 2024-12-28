#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetService_GroupInterface.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
namespace Editor::ScriptModule { class ScriptWidgetGroupCreateOptions; }
namespace Editor::ScriptModule { class ScriptWidgetGroupErrorInvalidObject; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetService>,
                            public ::Editor::Services::PayloadStoreHelper,
                            public ::Editor::ScriptModule::ScriptWidgetService_GroupInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkce6b5a;
    ::ll::UntypedStorage<8, 8>  mUnk982857;
    ::ll::UntypedStorage<8, 16> mUnkeac1e7;
    ::ll::UntypedStorage<8, 8>  mUnk64880d;
    ::ll::UntypedStorage<8, 16> mUnk166fd8;
    ::ll::UntypedStorage<8, 64> mUnk174897;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetService& operator=(ScriptWidgetService const&);
    ScriptWidgetService(ScriptWidgetService const&);
    ScriptWidgetService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetService();

    // vIndex: 0
    virtual ::Scripting::Result<void, ::Scripting::Error>
    _groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> groupToDelete
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetService(
        ::Editor::ServiceProviderCollection&  serviceProviderCollection,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCAPI ::Scripting::
        Result<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>, ::Scripting::Error>
        _createGroup(::std::optional<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions> const& options);

    MCAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject, ::Scripting::Error>
    _deleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> groupToDelete);

    MCAPI ::std::optional<::std::pair<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>>>
    _getWidgetGroupPair(::mce::UUID const& widgetId) const;

    MCAPI void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload);

    MCAPI void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Editor::ServiceProviderCollection& serviceProviderCollection, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    $_groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> groupToDelete);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
