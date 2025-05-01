#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptUIElement; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
// clang-format on

namespace Editor::Brush {

class BrushShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkffa57b;
    ::ll::UntypedStorage<8, 32>  mUnk3f00b9;
    ::ll::UntypedStorage<8, 232> mUnkb62577;
    ::ll::UntypedStorage<8, 232> mUnk31c598;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushShape& operator=(BrushShape const&);
    BrushShape(BrushShape const&);
    BrushShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrushShape(
        ::std::string const& name,
        ::std::string const& icon,
        ::Scripting::Closure<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>
            rebuildBrushShape,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
            getSettingsUI
    );

    MCNAPI ~BrushShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const& name,
        ::std::string const& icon,
        ::Scripting::Closure<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>
            rebuildBrushShape,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
            getSettingsUI
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Brush
