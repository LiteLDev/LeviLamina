#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentClipboardOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk6e5b33;
    ::ll::UntypedStorage<1, 2>  mUnkc882fe;
    ::ll::UntypedStorage<4, 16> mUnk320886;
    ::ll::UntypedStorage<4, 16> mUnkac6d6a;
    ::ll::UntypedStorage<1, 2>  mUnk12aa80;
    ::ll::UntypedStorage<4, 32> mUnk4bcb08;
    ::ll::UntypedStorage<4, 32> mUnkfd7ba1;
    ::ll::UntypedStorage<4, 32> mUnk10d5e2;
    ::ll::UntypedStorage<4, 32> mUnk44a836;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboardOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void>
    validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const /*override*/;

    // vIndex: 0
    virtual ~ScriptWidgetComponentClipboardOptions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentClipboardOptions(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&&);

    MCNAPI ScriptWidgetComponentClipboardOptions(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::Result_deprecated<void> validateOffsetValues(::Vec3 const& offset);

    MCNAPI static ::Scripting::Result_deprecated<void> validateOriginValues(::Vec3 const& origin);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Mirror const& DEFAULT_CLIPBOARD_MIRROR();

    MCNAPI static ::Vec3 const& DEFAULT_CLIPBOARD_OFFSET();

    MCNAPI static ::Vec3 const& DEFAULT_CLIPBOARD_ORIGIN();

    MCNAPI static ::Rotation const& DEFAULT_CLIPBOARD_ROTATION();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HIGHLIGHT_HULL_COLOR();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HIGHLIGHT_OUTLINE_COLOR();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HULL_COLOR();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_OUTLINE_COLOR();

    MCNAPI static bool const& DEFAULT_SHOW_OUTLINE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions const&);
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
