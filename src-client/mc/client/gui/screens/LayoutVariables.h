#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/LayoutSolvePass.h"
#include "mc/client/gui/screens/VariableRef.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct PostOperation;
// clang-format on

class LayoutVariables {
public:
    // LayoutVariables inner types declare
    // clang-format off
    struct UnsatisfiedVar;
    // clang-format on

    // LayoutVariables inner types define
    struct UnsatisfiedVar {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::VariableRef> mVar;
        ::ll::TypedStorage<1, 1, bool>           mIsSatisfied;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PostOperation>>                   mPostOperations;
    ::ll::TypedStorage<8, 24, ::std::vector<::LayoutVariables::UnsatisfiedVar>> mUnsatisfiedVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _add(::UIControl& control);

    MCAPI void _solve(::ui::DirtyFlag& dirty, ::LayoutSolvePass pass);

    MCAPI void _traceVariablesForDebugControls();

    MCAPI void invalidate(::VariableRef& variableRef, bool forceInvalidation);

    MCAPI void invalidateDependencies(::VariableRef& variableRef, bool forceInvalidation);

    MCAPI void reinitialize(::VariableRef& variableRef);

    MCAPI ::ui::DirtyFlag solve();

    MCAPI ~LayoutVariables();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
