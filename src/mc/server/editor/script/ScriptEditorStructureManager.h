#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorStructureManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkeec556;
    ::ll::UntypedStorage<8, 8>  mUnk7aaab7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructureManager& operator=(ScriptEditorStructureManager const&);
    ScriptEditorStructureManager(ScriptEditorStructureManager const&);
    ScriptEditorStructureManager();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
