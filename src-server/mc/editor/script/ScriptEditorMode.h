#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk94cdc0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorMode& operator=(ScriptEditorMode const&);
    ScriptEditorMode(ScriptEditorMode const&);
    ScriptEditorMode();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindScript();
    // NOLINTEND

};

}
