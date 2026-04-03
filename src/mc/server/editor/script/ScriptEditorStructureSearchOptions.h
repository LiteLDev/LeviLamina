#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorStructureMetadataQueryParams; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorStructureSearchOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1f118f;
    ::ll::UntypedStorage<8, 40> mUnkb4637c;
    ::ll::UntypedStorage<8, 32> mUnke0888e;
    ::ll::UntypedStorage<8, 40> mUnk96ab6e;
    ::ll::UntypedStorage<8, 40> mUnkef11b1;
    ::ll::UntypedStorage<8, 40> mUnk706726;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructureSearchOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptEditorStructureSearchOptions(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);

    MCNAPI ScriptEditorStructureSearchOptions(::Editor::ScriptModule::ScriptEditorStructureSearchOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptEditorStructureSearchOptions&
    operator=(::Editor::ScriptModule::ScriptEditorStructureSearchOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptEditorStructureSearchOptions&
    operator=(::Editor::ScriptModule::ScriptEditorStructureSearchOptions const&);

    MCNAPI ::Editor::EditorStructureMetadataQueryParams toQueryParams() const;

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

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptEditorStructureSearchOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
