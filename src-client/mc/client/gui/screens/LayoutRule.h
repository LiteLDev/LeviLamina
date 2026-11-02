#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/screens/LayoutRuleTermType.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class LayoutRuleTerm;
class UIControl;
class VariableRef;
namespace ui { struct AxisOffset; }
// clang-format on

class LayoutRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::LayoutRuleTerm>> mTerms;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAnchorTerm(
        ::UIControl&               relativeTo,
        ::LayoutVariableType const type,
        ::ui::AnchorPoint const    anchorPoint,
        float const                signFactor,
        ::LayoutRuleTermType       termType
    );

    MCNAPI void
    addAxisOffsetTerms(::UIControl& relativeTo, ::UIControl& control, ::std::vector<::ui::AxisOffset> const& offsets);

    MCNAPI void addDependsOnMeEntriesForInvalidation(::VariableRef const& variable, bool checkForDuplicates);

    MCNAPI void addFillGridDimensionTerm(
        ::UIControl&          control,
        ::UIControl&          itemTemplate,
        ::LayoutVariableType  dimensionType,
        ::ui::OrientationType rescalingType
    );

    MCNAPI void
    addGridSizeTerms(::UIControl& control, ::UIControl& gridItemTemplate, ::LayoutVariableType sizeType, float scale);

    MCNAPI void addOffsetDeltaTerm(::UIControl& control, ::LayoutVariableType type);

    MCNAPI void addRescalingGridDimensionTerm(
        ::UIControl&          control,
        ::UIControl&          itemTemplate,
        ::LayoutVariableType  dimensionType,
        ::ui::OrientationType rescalingType
    );
    // NOLINTEND
};
