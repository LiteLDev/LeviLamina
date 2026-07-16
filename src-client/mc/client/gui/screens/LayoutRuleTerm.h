#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/OrientationType.h"
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
        ::ll::TypedStorage<4, 16, float> mConstant;
        struct {
            ::ll::TypedStorage<4, 4, float>        mFactor;
            ::ll::TypedStorage<8, 8, ::UIControl*> mParent;
        } mFactorAndParent;
        struct {
            ::ll::TypedStorage<1, 1, ::ui::OrientationType> mRescalingType;
            ::ll::TypedStorage<4, 4, int>                   mCollectionIndex;
        } mRescalingAndIndex;
        struct {
            ::ll::TypedStorage<1, 1, ::ui::OrientationType> mRescalingType;
            ::ll::TypedStorage<1, 1, ::LayoutVariableType>  mDimensionType;
        } mRescalingAndDimension;
    } mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::VariableRef>> mDependentVariables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void removeDependsOnMeEntries();
    // NOLINTEND
};
