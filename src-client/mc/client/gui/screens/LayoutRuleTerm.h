#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/LayoutRuleTermType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class VariableRef;
// clang-format on

class LayoutRuleTerm {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::LayoutRuleTermType> mType;
    union {
    } mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::VariableRef>> mDependentVariables;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutRuleTerm();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayoutRuleTerm(::VariableRef const& dependentVariable, float factor, ::LayoutRuleTermType type);

    MCAPI float compute(::UIControl& control, ::LayoutVariableType sizeType) const;

    MCAPI ::std::string toString(::UIControl& control) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::VariableRef const& dependentVariable, float factor, ::LayoutRuleTermType type);
    // NOLINTEND
};
