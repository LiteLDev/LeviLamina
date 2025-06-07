#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    ScriptEditorStructure(ScriptEditorStructure const&);
    ScriptEditorStructure();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptEditorStructure&
    operator=(::Editor::ScriptModule::ScriptEditorStructure const&);

    MCNAPI ::Editor::ScriptModule::ScriptEditorStructure& operator=(::Editor::ScriptModule::ScriptEditorStructure&&);

    MCNAPI ~ScriptEditorStructure();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
