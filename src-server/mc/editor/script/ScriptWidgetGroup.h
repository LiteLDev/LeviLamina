#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetGroup_ServiceInterface.h"
#include "mc/editor/script/ScriptWidgetGroup_WidgetInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::Network { class WidgetStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetCreateOptions; }
namespace Editor::ScriptModule { class ScriptWidgetGroupCreateOptions; }
namespace Editor::ScriptModule { class ScriptWidgetGroupErrorInvalidObject; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetGroup : public ::Editor::ScriptModule::ScriptWidgetGroup_ServiceInterface, public ::Editor::ScriptModule::ScriptWidgetGroup_WidgetInterface, public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk962cc5;
    ::ll::UntypedStorage<8, 8> mUnk173882;
    ::ll::UntypedStorage<8, 8> mUnkf48be8;
    ::ll::UntypedStorage<8, 16> mUnk191c2e;
    ::ll::UntypedStorage<8, 24> mUnkd7d46c;
    ::ll::UntypedStorage<4, 4> mUnke8b81b;
    ::ll::UntypedStorage<1, 1> mUnk9a75fb;
    ::ll::UntypedStorage<1, 1> mUnk9e74de;
    ::ll::UntypedStorage<1, 1> mUnka85b0a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetGroup& operator=(ScriptWidgetGroup const&);
    ScriptWidgetGroup(ScriptWidgetGroup const&);
    ScriptWidgetGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual ~ScriptWidgetGroup() = default;

    // vIndex: 0
    virtual void _performDeleteGroup() /*override*/;

    // vIndex: 1
    virtual void _setValid(bool valid) /*override*/;

    // vIndex: 2
    virtual void _handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload) /*override*/;

    // vIndex: 3
    virtual void _handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload) /*override*/;

    // vIndex: 4
    virtual void _servicePendingStateChanges() /*override*/;

    // vIndex: 0
    virtual ::Scripting::Result_deprecated<void> _deleteWidget(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> widgetToDelete) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetGroup(::Editor::ServiceProviderCollection& serviceProviders, ::Editor::ScriptModule::ScriptWidgetService& parentService, ::std::optional<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions> const& options, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>> _createWidget(::Vec3 const& position, ::std::optional<::Editor::ScriptModule::ScriptWidgetCreateOptions> const& options);

    MCNAPI void _deleteThisGroup();

    MCNAPI void _forEachWidget(::std::function<bool(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>)> fn) const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptDeselectAll();

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptGetBoundsVisible() const;

    MCNAPI ::Scripting::Result<int, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptGetSelectedCount() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptGetVisible() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptSelectAll();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptSetBoundsVisible(bool visible);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetGroupErrorInvalidObject> _scriptSetVisible(bool visible);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::Editor::ScriptModule::ScriptWidgetService& parentService, ::std::optional<::Editor::ScriptModule::ScriptWidgetGroupCreateOptions> const& options, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_performDeleteGroup();

    MCNAPI void $_setValid(bool valid);

    MCNAPI void $_handleWidgetStateChangePayload(::Editor::Network::WidgetStateChangePayload const& payload);

    MCNAPI void $_handleWidgetComponentStateChangePayload(::Editor::Network::WidgetComponentStateChangePayload const& payload);

    MCNAPI void $_servicePendingStateChanges();

    MCNAPI ::Scripting::Result_deprecated<void> $_deleteWidget(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> widgetToDelete);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScriptWidgetGroupWidgetInterface();

    MCNAPI static void** $vftableForScriptWidgetGroupServiceInterface();
    // NOLINTEND

};

}
