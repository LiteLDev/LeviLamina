#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ScriptWidgetService_WidgetInterface.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetService_GroupInterface.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class AABB;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetGroup; }
namespace Editor::ScriptModule { class ScriptWidgetGroupCreateOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetService : public ::Editor::ScriptModule::ScriptWidgetService_GroupInterface,
                            public ::Editor::ScriptModule::ScriptWidgetService_WidgetInterface,
                            public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetService>,
                            public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkce6b5a;
    ::ll::UntypedStorage<8, 8>  mUnk982857;
    ::ll::UntypedStorage<8, 16> mUnkeac1e7;
    ::ll::UntypedStorage<8, 8>  mUnk64880d;
    ::ll::UntypedStorage<4, 24> mUnke6f179;
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
    // vIndex: 2
    virtual ~ScriptWidgetService();

    // vIndex: 0
    virtual ::Scripting::Result_deprecated<void> _groupDeleteGroup(
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> groupToDelete
    ) /*override*/;

    // vIndex: 1
    virtual ::AABB const& _getDimensionBounds() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetService(
        ::Editor::ServiceProviderCollection&  serviceProviderCollection,
        ::Scripting::WeakLifetimeScope const& scope
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>>
    _createGroup(::std::optional<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions> const& options);

    MCNAPI ::Scripting::Result_deprecated<void>
    _deleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> groupToDelete);

    MCNAPI ::std::optional<::std::pair<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup>,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>>>
    _getWidgetGroupPair(::mce::UUID const& widgetId) const;

    MCNAPI void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload);

    MCNAPI void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Editor::ServiceProviderCollection& serviceProviderCollection, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    $_groupDeleteGroup(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGroup> groupToDelete);

    MCNAPI ::AABB const& $_getDimensionBounds() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScriptWidgetServiceWidgetInterface();

    MCNAPI static void** $vftableForScriptWidgetServiceGroupInterface();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
