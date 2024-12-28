#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

enum class ScriptWidgetMouseButtonEventType : int {
    Pressed  = 0,
    Released = 1,
    Drag     = 2,
};

}
