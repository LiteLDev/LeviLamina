#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptEditorStructure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk80b09e;
    ::ll::UntypedStorage<8, 32> mUnk551207;
    ::ll::UntypedStorage<8, 24> mUnkace0c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructure& operator=(ScriptEditorStructure const&);
    ScriptEditorStructure(ScriptEditorStructure const&);
    ScriptEditorStructure();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::ScriptModule::ScriptEditorStructure& operator=(::Editor::ScriptModule::ScriptEditorStructure&&);

    MCAPI ~ScriptEditorStructure();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptEditorStructure> bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
