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
    MCNAPI ~ResourceTaskGroupScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
