#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderControllerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkab5859;
    ::ll::UntypedStorage<8, 8>  mUnkd53c3f;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerInfo& operator=(RenderControllerInfo const&);
    RenderControllerInfo(RenderControllerInfo const&);
    RenderControllerInfo();
};
