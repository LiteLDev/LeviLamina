#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerSizeChangeListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void containerSizeChanged(int size) = 0;

    virtual ~ContainerSizeChangeListener();
    // NOLINTEND
};
