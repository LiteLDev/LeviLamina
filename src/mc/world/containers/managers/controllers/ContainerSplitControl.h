#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerSplitControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnka2d322;
    ::ll::UntypedStorage<8, 40> mUnk98ee72;
    ::ll::UntypedStorage<4, 4>  mUnk9e1c80;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerSplitControl& operator=(ContainerSplitControl const&);
    ContainerSplitControl(ContainerSplitControl const&);
    ContainerSplitControl();
};
