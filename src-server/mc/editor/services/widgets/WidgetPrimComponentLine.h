#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class WidgetPrimComponentLine {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk83a992;
    ::ll::UntypedStorage<4, 12> mUnk3fb017;
    ::ll::UntypedStorage<4, 16> mUnkbcaeee;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentLine& operator=(WidgetPrimComponentLine const&);
    WidgetPrimComponentLine(WidgetPrimComponentLine const&);
    WidgetPrimComponentLine();

};

}
