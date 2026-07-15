#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class WidgetPrimComponentCuboid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7d483e;
    ::ll::UntypedStorage<4, 4>  mUnkc7f4a0;
    ::ll::UntypedStorage<4, 4>  mUnkd19400;
    ::ll::UntypedStorage<4, 4>  mUnk19c031;
    ::ll::UntypedStorage<4, 16> mUnk8713be;
    ::ll::UntypedStorage<4, 16> mUnk8d2f4f;
    ::ll::UntypedStorage<4, 8>  mUnk5361dc;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentCuboid& operator=(WidgetPrimComponentCuboid const&);
    WidgetPrimComponentCuboid(WidgetPrimComponentCuboid const&);
    WidgetPrimComponentCuboid();
};

} // namespace Editor::Network
