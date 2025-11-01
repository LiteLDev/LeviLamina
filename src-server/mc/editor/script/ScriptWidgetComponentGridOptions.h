#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec2;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentGridOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk2977f6;
    ::ll::UntypedStorage<4, 32> mUnk2527e5;
    ::ll::UntypedStorage<4, 12> mUnk66bf43;
    ::ll::UntypedStorage<4, 12> mUnk92986b;
    ::ll::UntypedStorage<4, 12> mUnkb77c43;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGridOptions(ScriptWidgetComponentGridOptions const&);
    ScriptWidgetComponentGridOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const /*override*/;

    // vIndex: 0
    virtual ~ScriptWidgetComponentGridOptions() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentGridOptions& operator=(::Editor::ScriptModule::ScriptWidgetComponentGridOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentGridOptions& operator=(::Editor::ScriptModule::ScriptWidgetComponentGridOptions const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();

    MCNAPI static ::Scripting::Result_deprecated<void> validateGridCountValues(::Vec2 const& gridCount);

    MCNAPI static ::Scripting::Result_deprecated<void> validateGridSizeValues(::Vec2 const& gridSize);

    MCNAPI static ::Scripting::Result_deprecated<void> validateNormalizedOriginValues(::Vec2 const& normalizedOrigin);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_COLOR();

    MCNAPI static ::Vec2 const& DEFAULT_GRID_COUNT();

    MCNAPI static ::Vec2 const& DEFAULT_GRID_SIZE();

    MCNAPI static ::Vec2 const& DEFAULT_NORMALIZED_ORIGIN();

    MCNAPI static ::Vec2 const& MAX_GRID_COUNT();

    MCNAPI static ::Vec2 const& MAX_GRID_SIZE();

    MCNAPI static ::Vec2 const& MAX_NORMALIZED_ORIGIN();

    MCNAPI static ::Vec2 const& MIN_GRID_COUNT();

    MCNAPI static ::Vec2 const& MIN_GRID_SIZE();

    MCNAPI static ::Vec2 const& MIN_NORMALIZED_ORIGIN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const& size) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
