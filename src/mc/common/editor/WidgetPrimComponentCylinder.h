#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class WidgetPrimComponentCylinder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb39144;
    ::ll::UntypedStorage<4, 4>  mUnk7fe9c9;
    ::ll::UntypedStorage<4, 4>  mUnk98ace0;
    ::ll::UntypedStorage<4, 4>  mUnkffff3e;
    ::ll::UntypedStorage<4, 16> mUnkf09100;
    ::ll::UntypedStorage<4, 16> mUnk474e85;
    ::ll::UntypedStorage<4, 8>  mUnkc9f111;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentCylinder& operator=(WidgetPrimComponentCylinder const&);
    WidgetPrimComponentCylinder(WidgetPrimComponentCylinder const&);
    WidgetPrimComponentCylinder();
};

} // namespace Editor::Network
