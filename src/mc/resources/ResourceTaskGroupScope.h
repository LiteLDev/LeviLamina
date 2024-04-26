#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceTaskGroupScope {
public:
    // prevent constructor by default
    ResourceTaskGroupScope& operator=(ResourceTaskGroupScope const&);
    ResourceTaskGroupScope(ResourceTaskGroupScope const&);
    ResourceTaskGroupScope();

public:
    // NOLINTBEGIN
    // symbol: ??1ResourceTaskGroupScope@@QEAA@XZ
    MCAPI ~ResourceTaskGroupScope();

    // NOLINTEND
};
