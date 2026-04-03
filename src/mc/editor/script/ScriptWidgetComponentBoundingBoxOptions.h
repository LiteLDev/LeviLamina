#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBoundingBoxOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke9bb00;
    ::ll::UntypedStorage<8, 32>  mUnk6eab3d;
    ::ll::UntypedStorage<1, 2>   mUnk2099d3;
    ::ll::UntypedStorage<1, 2>   mUnk1b40a6;
    ::ll::UntypedStorage<4, 16>  mUnk65fd14;
    ::ll::UntypedStorage<4, 16>  mUnkc9c127;
    ::ll::UntypedStorage<1, 2>   mUnk204909;
    ::ll::UntypedStorage<1, 2>   mUnk47735e;
    ::ll::UntypedStorage<4, 8>   mUnk772774;
    ::ll::UntypedStorage<4, 36>  mUnk2a63b0;
    ::ll::UntypedStorage<8, 120> mUnk75e5be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBoundingBoxOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void>
    validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const /*override*/;

    virtual ~ScriptWidgetComponentBoundingBoxOptions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentBoundingBoxOptions(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions&&);

    MCNAPI
    ScriptWidgetComponentBoundingBoxOptions(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::Result_deprecated<void> validateOffsetValues(::Vec3 const& offset);

    MCNAPI static ::Scripting::Result_deprecated<void> validateOriginValues(::Vec3 const& origin);

    MCNAPI static ::Scripting::Result_deprecated<void>
    validateSizeLimitValues(::Vec3 const& minSize, ::Vec3 const& maxSize);

    MCNAPI static ::Scripting::Result_deprecated<void>
    validateSizeValues(::Vec3 const& size, ::Vec3 const& minSize, ::Vec3 const& maxSize);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_HULL_COLOR();

    MCNAPI static ::Vec3 const& DEFAULT_NORMALIZED_ORIGIN();

    MCNAPI static ::Vec3 const& DEFAULT_OFFSET();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_OUTLINE_COLOR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions const&);
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
