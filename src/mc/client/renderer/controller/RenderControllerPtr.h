#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb5dcd0;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerPtr& operator=(RenderControllerPtr const&);
    RenderControllerPtr(RenderControllerPtr const&);
    RenderControllerPtr();
};
