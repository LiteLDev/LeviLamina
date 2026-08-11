#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/scripting/Axis.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Scripting { struct ClassBinding; }
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
    ::ll::UntypedStorage<8, 112> mUnk4d47d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGizmo& operator=(ScriptWidgetComponentGizmo const&);
    ScriptWidgetComponentGizmo(ScriptWidgetComponentGizmo const&);
    ScriptWidgetComponentGizmo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentGizmo() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;

    virtual void
    _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::
        Result<::std::optional<::Vec3>, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
        _getAutoOffset() const;

    MCNAPI ::Scripting::Result<::Scripting::Axis, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getEnabledAxes() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _isActivated() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
