#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGizmoOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnkf908c4;
    ::ll::UntypedStorage<1, 2>   mUnkee317e;
    ::ll::UntypedStorage<4, 16>  mUnkbe5c2a;
    ::ll::UntypedStorage<8, 256> mUnk250a0a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGizmoOptions& operator=(ScriptWidgetComponentGizmoOptions const&);
    ScriptWidgetComponentGizmoOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void>
    validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const /*override*/;

    virtual ~ScriptWidgetComponentGizmoOptions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentGizmoOptions(::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentGizmoOptions const&);
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
    $validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
