#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/LayoutRule.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class VariableRef;
// clang-format on

class LayoutVariable {
public:
    // LayoutVariable inner types declare
    // clang-format off
    struct RuleValue;
    struct MinMaxRuleValue;
    // clang-format on

    // LayoutVariable inner types define
    struct RuleValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>         mValue;
        ::ll::TypedStorage<8, 24, ::LayoutRule> mRule;
        // NOLINTEND
    };

    struct MinMaxRuleValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue> mMinValue;
        ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue> mMaxValue;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UIControl&>                                         mControl;
    ::ll::TypedStorage<8, 24, ::std::vector<::VariableRef>>                        mDependsOnMe;
    ::ll::TypedStorage<8, 32, ::LayoutVariable::RuleValue>                         mRuleValue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LayoutVariable::MinMaxRuleValue>> mMinMaxValue;
    ::ll::TypedStorage<1, 1, ::LayoutVariableType>                                 mType;
    bool                                                                           mIsSatisfied : 1;
    bool                                                                           mIsOverriden : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutVariable& operator=(LayoutVariable const&);
    LayoutVariable(LayoutVariable const&);
    LayoutVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _initialize(bool checkForDuplicates);

    MCAPI void _invalidate(::std::function<void(::VariableRef const&)> invalidCallback, bool forceInvalidation);

    MCAPI void
    _invalidateDependencies(::std::function<void(::VariableRef const&)> invalidCallback, bool forceInvalidation);

    MCAPI void overrideRenderableLayoutRule(::UIControl& control, ::LayoutVariableType type);

    MCAPI void removeDeadDependencies();

    MCAPI void removeDependencies();

    MCAPI void setOverrideValue(float inValue);

    MCAPI ~LayoutVariable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
