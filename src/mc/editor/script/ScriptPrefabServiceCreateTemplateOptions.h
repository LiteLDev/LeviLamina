#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabServiceCreateTemplateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk8f3bc0;
    ::ll::UntypedStorage<8, 40> mUnkf88d7f;
    ::ll::UntypedStorage<8, 40> mUnk98ca90;
    ::ll::UntypedStorage<8, 32> mUnk97bead;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceCreateTemplateOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabServiceCreateTemplateOptions(::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions&&);

    MCNAPI
    ScriptPrefabServiceCreateTemplateOptions(::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions&
    operator=(::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions&&);

    MCNAPI ::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions&
    operator=(::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions const&);

    MCNAPI ~ScriptPrefabServiceCreateTemplateOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptPrefabServiceCreateTemplateOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
