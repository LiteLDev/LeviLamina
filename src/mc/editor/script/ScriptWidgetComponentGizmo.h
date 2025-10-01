#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/WidgetComponentType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/scripting/Axis.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGizmoOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentGizmoStateChangeEventParameters; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGizmo : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk651a9b;
    ::ll::UntypedStorage<1, 1>   mUnka0cce5;
    ::ll::UntypedStorage<1, 1>   mUnkb4d4a0;
    ::ll::UntypedStorage<1, 1>   mUnke1f7dc;
    ::ll::UntypedStorage<1, 1>   mUnk7c098d;
    ::ll::UntypedStorage<4, 16>  mUnk66792f;
    ::ll::UntypedStorage<8, 248> mUnk4d47d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGizmo& operator=(ScriptWidgetComponentGizmo const&);
    ScriptWidgetComponentGizmo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~ScriptWidgetComponentGizmo() /*override*/ = default;

    // vIndex: 3
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;

    // vIndex: 0
    virtual void
    _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentGizmo(::Editor::ScriptModule::ScriptWidgetComponentGizmo const&);

    MCNAPI ScriptWidgetComponentGizmo(
        ::Editor::ServiceProviderCollection&                                       serviceProviders,
        ::mce::UUID const&                                                         componentId,
        ::std::string const&                                                       componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>   owner,
        ::Editor::ScriptModule::ScriptWidgetService&                               parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions> options
    );

    MCNAPI ::Scripting::
        Result<::std::optional<::Vec3>, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
        _getAutoOffset() const;

    MCNAPI ::Scripting::Result<::Scripting::Axis, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getEnabledAxes() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _isActivated() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setActivated(bool activated);

    MCNAPI ::Scripting::Result_deprecated<void> _setAutoOffset(::std::optional<::Vec3> const& optionalOffset);

    MCNAPI ::Scripting::Result_deprecated<void> _setEnabledAxes(::Scripting::Axis enableAxes);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setStateChangeEventClosure(
        ::std::optional<::Scripting::Closure<
            void(::Scripting::StrongTypedObjectHandle<
                 ::Editor::ScriptModule::ScriptWidgetComponentGizmoStateChangeEventParameters>)>> const& closure
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentGizmo const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                       serviceProviders,
        ::mce::UUID const&                                                         componentId,
        ::std::string const&                                                       componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>   owner,
        ::Editor::ScriptModule::ScriptWidgetService&                               parentService,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions> options
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;

    MCNAPI void $_handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
