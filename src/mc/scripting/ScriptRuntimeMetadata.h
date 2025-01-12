#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/IRuntimeMetadata.h"

struct ScriptRuntimeMetadata : public ::Scripting::IRuntimeMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk511d50;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRuntimeMetadata& operator=(ScriptRuntimeMetadata const&);
    ScriptRuntimeMetadata(ScriptRuntimeMetadata const&);
    ScriptRuntimeMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptRuntimeMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
