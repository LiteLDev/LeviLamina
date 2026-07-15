#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptClipboardChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfa6a30;
    ::ll::UntypedStorage<1, 1>  mUnk1d9702;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClipboardChangeAfterEvent& operator=(ScriptClipboardChangeAfterEvent const&);
    ScriptClipboardChangeAfterEvent(ScriptClipboardChangeAfterEvent const&);
    ScriptClipboardChangeAfterEvent();
};

} // namespace Editor::ScriptModule
