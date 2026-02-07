#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/LayoutVariableStringType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class LayoutRule;
class UIControl;
class VariableRef;
struct PostOperation;
// clang-format on

class LayoutVariable {
public:
    // LayoutVariable inner types declare
    // clang-format off
    struct RuleValue;
    struct MinMaxRuleValue;
    // clang-format on

    // LayoutVariable inner types define
    struct RuleValue {};

    struct MinMaxRuleValue {};

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
    MCAPI void _addDependsOnMeEntriesForInvalidation(bool checkForDuplicates);

    MCAPI float _getMaxSiblingValue() const;

    MCAPI ::LayoutRule& _getOrCreateMaxRule();

    MCAPI ::LayoutRule& _getOrCreateMinRule();

    MCAPI void _initialize(bool checkForDuplicates);

    MCAPI void _invalidate(::std::function<void(::VariableRef const&)> invalidCallback, bool forceInvalidation);

    MCAPI void
    _invalidateDependencies(::std::function<void(::VariableRef const&)> invalidCallback, bool forceInvalidation);

    MCAPI void addPostComputationalNeeds(::std::vector<::PostOperation>& postOperations, ::VariableRef& var);

    MCAPI bool isSatisfiable() const;

    MCAPI void overrideGridLayoutRule(::UIControl& control, ::UIControl& parent, ::LayoutVariableType type);

    MCAPI void overrideRenderableLayoutRule(::UIControl& control, ::LayoutVariableType type);

    MCAPI void overrideStackPanelLayoutRule(::UIControl& control, ::UIControl& parent, ::LayoutVariableType type);

    MCAPI void removeDeadDependencies();

    MCAPI ::ui::DirtyFlag satisfy();

    MCAPI void setOverrideValue(float inValue);

    MCAPI void setRelativeLayoutRule(::UIControl& control, ::UIControl& relativeTo, ::LayoutVariableType type);

    MCAPI void setStackPanelItemLayoutRule(::UIControl& control, ::UIControl& parent, ::LayoutVariableType type);

    MCAPI ::std::string toString(::LayoutVariableStringType type) const;
    // NOLINTEND
};
