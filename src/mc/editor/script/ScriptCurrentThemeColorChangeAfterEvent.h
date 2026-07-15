#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptCurrentThemeColorChangeAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk11968c;
    ::ll::UntypedStorage<8, 24> mUnkf7d0e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCurrentThemeColorChangeAfterEvent& operator=(ScriptCurrentThemeColorChangeAfterEvent const&);
    ScriptCurrentThemeColorChangeAfterEvent(ScriptCurrentThemeColorChangeAfterEvent const&);
    ScriptCurrentThemeColorChangeAfterEvent();
};

} // namespace Editor::ScriptModule
