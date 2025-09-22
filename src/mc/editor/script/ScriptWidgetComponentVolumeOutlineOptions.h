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

class ScriptWidgetComponentVolumeOutlineOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnk337e61;
    ::ll::UntypedStorage<4, 32> mUnk9f8bb6;
    ::ll::UntypedStorage<4, 32> mUnk1fa68a;
    ::ll::UntypedStorage<4, 32> mUnk29cd7c;
    ::ll::UntypedStorage<1, 2>  mUnk6f9f4f;
    ::ll::UntypedStorage<1, 2>  mUnkc49051;
    ::ll::UntypedStorage<1, 2>  mUnkb1ac46;
    ::ll::UntypedStorage<1, 2>  mUnkf7bd52;
    ::ll::UntypedStorage<4, 16> mUnkf0201b;
    ::ll::UntypedStorage<4, 16> mUnk808108;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentVolumeOutlineOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void>
    validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const /*override*/;

    // vIndex: 0
    virtual ~ScriptWidgetComponentVolumeOutlineOptions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptWidgetComponentVolumeOutlineOptions(::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions&&);

    MCNAPI
    ScriptWidgetComponentVolumeOutlineOptions(::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions&&);
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
    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HIGHLIGHT_HULL_COLOR();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HIGHLIGHT_OUTLINE_COLOR();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HULL_COLOR();

    MCNAPI static ::Mirror const& DEFAULT_MIRROR();

    MCNAPI static ::Vec3 const& DEFAULT_NORMALIZED_ORIGIN();

    MCNAPI static ::Vec3 const& DEFAULT_OFFSET();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_OUTLINE_COLOR();

    MCNAPI static ::Rotation const& DEFAULT_ROTATION();

    MCNAPI static bool const& DEFAULT_VISIBLE_HIGHLIGHT_OUTLINE();

    MCNAPI static bool const& DEFAULT_VISIBLE_OUTLINE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions const&);
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
