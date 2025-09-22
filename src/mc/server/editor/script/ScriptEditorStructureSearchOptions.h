#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorStructureSearchOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk98b32e;
    ::ll::UntypedStorage<8, 32> mUnkb53a96;
    ::ll::UntypedStorage<8, 40> mUnkbd6679;
    ::ll::UntypedStorage<8, 40> mUnk46e81d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructureSearchOptions(ScriptEditorStructureSearchOptions const&);
    ScriptEditorStructureSearchOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptEditorStructureSearchOptions(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptEditorStructureSearchOptions&
    operator=(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptEditorStructureSearchOptions&
    operator=(::Editor::ScriptModule::ScriptEditorStructureSearchOptions const&);

    MCNAPI ~ScriptEditorStructureSearchOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
