#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptEditorStructureSearchOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf7281a;
    ::ll::UntypedStorage<8, 32> mUnkb53a96;
    ::ll::UntypedStorage<8, 32> mUnk725ea9;
    ::ll::UntypedStorage<8, 40> mUnk3c4f7a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructureSearchOptions(ScriptEditorStructureSearchOptions const&);
    ScriptEditorStructureSearchOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEditorStructureSearchOptions(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);

    MCAPI ::Editor::ScriptModule::ScriptEditorStructureSearchOptions&
    operator=(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);

    MCAPI ::Editor::ScriptModule::ScriptEditorStructureSearchOptions&
    operator=(::Editor::ScriptModule::ScriptEditorStructureSearchOptions const&);

    MCAPI ~ScriptEditorStructureSearchOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptEditorStructureSearchOptions>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
