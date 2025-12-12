#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

struct CodeBuilderSelectorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus> mStatus;
    ::ll::TypedStorage<8, 32, ::std::string>                          mPropertyName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CodeBuilderSelectorFilter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
