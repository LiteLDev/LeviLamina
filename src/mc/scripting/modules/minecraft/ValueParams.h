#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ValueParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           isNumber;
    ::ll::TypedStorage<1, 1, bool>           isFloat;
    ::ll::TypedStorage<4, 4, float>          floatVal;
    ::ll::TypedStorage<4, 4, int>            intVal;
    ::ll::TypedStorage<1, 1, bool>           isBool;
    ::ll::TypedStorage<1, 1, bool>           boolVal;
    ::ll::TypedStorage<8, 32, ::std::string> stringVal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ValueParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
