#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::ScriptPropertyComponents {

struct PropertyComponentRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5ad51f;
    ::ll::UntypedStorage<8, 64> mUnk6e2ddb;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyComponentRegistration& operator=(PropertyComponentRegistration const&);
    PropertyComponentRegistration(PropertyComponentRegistration const&);
    PropertyComponentRegistration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PropertyComponentRegistration(::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration&&);

    MCNAPI ~PropertyComponentRegistration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptPropertyComponents
