#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorConstants : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptEditorConstants> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk85e372;
    ::ll::UntypedStorage<8, 8>  mUnkb09688;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorConstants& operator=(ScriptEditorConstants const&);
    ScriptEditorConstants(ScriptEditorConstants const&);
    ScriptEditorConstants();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
