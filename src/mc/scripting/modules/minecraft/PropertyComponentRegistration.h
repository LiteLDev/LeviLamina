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
    MCAPI
    PropertyComponentRegistration(::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration&&);

    MCAPI ~PropertyComponentRegistration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptPropertyComponents
