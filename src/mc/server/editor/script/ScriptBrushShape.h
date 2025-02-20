#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptBrushShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf4d6e1;
    ::ll::UntypedStorage<8, 32> mUnka433d2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBrushShape(ScriptBrushShape const&);
    ScriptBrushShape();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Editor::ScriptModule::ScriptBrushShape& operator=(::Editor::ScriptModule::ScriptBrushShape&&);

    MCFOLD ::Editor::ScriptModule::ScriptBrushShape& operator=(::Editor::ScriptModule::ScriptBrushShape const&);

    MCAPI ~ScriptBrushShape();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptBrushShape> bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
