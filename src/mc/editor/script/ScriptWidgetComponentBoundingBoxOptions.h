#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
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
    ScriptWidgetComponentBoundingBoxOptions& operator=(ScriptWidgetComponentBoundingBoxOptions const&);
    ScriptWidgetComponentBoundingBoxOptions(ScriptWidgetComponentBoundingBoxOptions const&);
    ScriptWidgetComponentBoundingBoxOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void>
    validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::Result_deprecated<void> validateOffsetValues(::Vec3 const& offset);

    MCNAPI static ::Scripting::Result_deprecated<void> validateOriginValues(::Vec3 const& origin);

    MCNAPI static ::Scripting::Result_deprecated<void>
    validateSizeValues(::Vec3 const& size, ::Vec3 const& minSize, ::Vec3 const& maxSize);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    $validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const;


    // NOLINTEND
};

} // namespace Editor::ScriptModule
