#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceTaskGroupScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb79a4d;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceTaskGroupScope& operator=(ResourceTaskGroupScope const&);
    ResourceTaskGroupScope(ResourceTaskGroupScope const&);
    ResourceTaskGroupScope();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResourceTaskGroupScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
