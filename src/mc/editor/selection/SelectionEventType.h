#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class SelectionEventType : int {
    Error              = 0,
    CreateContainer    = 1,
    PushVolume         = 2,
    ReplaceOrAddVolume = 3,
    ReplaceContents    = 4,
    PopVolume          = 5,
    ClearContainer     = 6,
    TranslateContainer = 7,
    SetVisible         = 8,
    SetFillColor       = 9,
    SetOutlineColor    = 10,
};

}
