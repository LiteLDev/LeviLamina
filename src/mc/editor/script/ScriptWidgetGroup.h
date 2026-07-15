#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetGroup_ServiceInterface.h"
#include "mc/editor/script/ScriptWidgetGroup_WidgetInterface.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetGroupCreateOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetGroup : public ::Editor::ScriptModule::ScriptWidgetGroup_ServiceInterface,
                          public ::Editor::ScriptModule::ScriptWidgetGroup_WidgetInterface,
                          public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk962cc5;
    ::ll::UntypedStorage<8, 8>  mUnk173882;
    ::ll::UntypedStorage<8, 8>  mUnkf48be8;
    ::ll::UntypedStorage<8, 16> mUnk191c2e;
    ::ll::UntypedStorage<8, 24> mUnk8e0470;
    ::ll::UntypedStorage<4, 4>  mUnke8b81b;
    ::ll::UntypedStorage<1, 1>  mUnk9a75fb;
    ::ll::UntypedStorage<1, 1>  mUnk9e74de;
    ::ll::UntypedStorage<1, 1>  mUnka85b0a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetGroup& operator=(ScriptWidgetGroup const&);
    ScriptWidgetGroup(ScriptWidgetGroup const&);
    ScriptWidgetGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetGroup() = default;

    virtual void _performDeleteGroup() /*override*/;

    virtual void _setValid(bool) /*override*/;

    virtual void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const&) /*override*/;

    virtual void
    _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const&) /*override*/;

    virtual void _servicePendingStateChanges() /*override*/;

    virtual ::Scripting::Result_deprecated<void>
        _deleteWidget(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ScriptWidgetGroup(
        ::Editor::ServiceProviderCollection&                                           serviceProviders,
        ::Editor::ScriptModule::ScriptWidgetService&                                   parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>>
    getWidget(::mce::UUID const& widgetId) const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                           serviceProviders,
        ::Editor::ScriptModule::ScriptWidgetService&                                   parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions> const& options,
        ::Scripting::WeakLifetimeScope const&                                          scope
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
