#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

// auto generated forward declare list
// clang-format off
struct PostOperation;
// clang-format on

class LayoutVariables {
public:
    // LayoutVariables inner types declare
    // clang-format off
    struct UnsatisfiedVar;
    // clang-format on

    // LayoutVariables inner types define
    struct UnsatisfiedVar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PostOperation>>                   mPostOperations;
    ::ll::TypedStorage<8, 24, ::std::vector<::LayoutVariables::UnsatisfiedVar>> mUnsatisfiedVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _traceVariablesForDebugControls();

    MCAPI ::ui::DirtyFlag solve();
    // NOLINTEND
};
