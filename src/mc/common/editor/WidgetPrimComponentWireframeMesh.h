#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class WidgetPrimComponentWireframeMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkcb70d1;
    ::ll::UntypedStorage<8, 32> mUnk9021bf;
    ::ll::UntypedStorage<4, 16> mUnk31e279;
    ::ll::UntypedStorage<4, 16> mUnkd55f57;
    ::ll::UntypedStorage<4, 16> mUnk3b60b9;
    ::ll::UntypedStorage<4, 8>  mUnkcd0847;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentWireframeMesh& operator=(WidgetPrimComponentWireframeMesh const&);
    WidgetPrimComponentWireframeMesh(WidgetPrimComponentWireframeMesh const&);
    WidgetPrimComponentWireframeMesh();
};

} // namespace Editor::Network
