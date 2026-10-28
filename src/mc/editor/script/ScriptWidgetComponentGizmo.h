#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/editor/WidgetComponentType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/scripting/Axis.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetGizmoRotationEvent; }
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
    ::ll::UntypedStorage<4, 4>   mUnke6e1f6;
    ::ll::UntypedStorage<4, 12>  mUnk7ebd37;
    ::ll::UntypedStorage<4, 4>   mUnk209df0;
    ::ll::UntypedStorage<4, 4>   mUnk13c8be;
    ::ll::UntypedStorage<4, 4>   mUnk940041;
    ::ll::UntypedStorage<4, 4>   mUnk206c8c;
    ::ll::UntypedStorage<4, 4>   mUnk26167e;
    ::ll::UntypedStorage<4, 16>  mUnk66792f;
    ::ll::UntypedStorage<8, 112> mUnk4d47d7;
    ::ll::UntypedStorage<8, 112> mUnk9ddc16;
    ::ll::UntypedStorage<8, 40>  mUnk98ccc5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGizmo& operator=(ScriptWidgetComponentGizmo const&);
    ScriptWidgetComponentGizmo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentGizmo() /*override*/;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;

    virtual void
    _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentGizmo(::Editor::ScriptModule::ScriptWidgetComponentGizmo const&);

    MCNAPI void _deactivateForRebuild();

    MCNAPI ::Scripting::Result<float, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getScreenScale() const;

    MCNAPI ::Scripting::Result<float, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getWorldScale() const;

    MCNAPI ::Scripting::Result_deprecated<void> _setScreenScale(float screenScale);

    MCNAPI ::Scripting::Result_deprecated<void> _setWorldScale(float worldScale);

    MCNAPI ::Scripting::Result_deprecated<void> setRotationAxes(::Scripting::Axis rotationAxes);

    MCNAPI void setRotationEventClosure(
        ::std::optional<::Scripting::Closure<
            void(::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptWidgetGizmoRotationEvent>)>> const&
            closure
    );

    MCNAPI ::Scripting::Result_deprecated<void> setRotationOriginOffset(::Vec3 const& offset);

    MCNAPI ::Scripting::Result_deprecated<void> setRotationRingPreferredRadius(float radius);

    MCNAPI ::Scripting::Result_deprecated<void> setRotationVisualStepRadians(float stepRadians);
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
