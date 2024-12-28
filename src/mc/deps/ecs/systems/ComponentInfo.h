#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mThreadSafe;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, uint>           mId;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentInfo& operator=(ComponentInfo const&);
    ComponentInfo(ComponentInfo const&);
    ComponentInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ComponentInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
