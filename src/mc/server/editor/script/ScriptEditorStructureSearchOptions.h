#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ScriptEditorStructureSearchOptions& operator=(ScriptEditorStructureSearchOptions const&);
    ScriptEditorStructureSearchOptions(ScriptEditorStructureSearchOptions const&);
    ScriptEditorStructureSearchOptions();
};

} // namespace Editor::ScriptModule
