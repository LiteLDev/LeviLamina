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
    MCAPI void addAnchorTerm(
        ::UIControl&         relativeTo,
        ::LayoutVariableType type,
        ::ui::AnchorPoint    anchorPoint,
        float                signFactor,
        ::LayoutRuleTermType termType
    );

    MCAPI void
    addAxisOffsetTerms(::UIControl& relativeTo, ::UIControl& control, ::std::vector<::ui::AxisOffset> const& offsets);

    MCAPI void addDependsOnMeEntriesForInvalidation(::VariableRef const& variable, bool checkForDuplicates);

    MCAPI void addDynamicGridItemGridPositionTerm(
        ::UIControl&          parent,
        ::UIControl&          control,
        ::LayoutVariableType  type,
        ::ui::OrientationType rescalingType,
        int                   collectionIndex
    );

    MCAPI void addFillGridDimensionTerm(
        ::UIControl&          control,
        ::UIControl&          itemTemplate,
        ::LayoutVariableType  dimensionType,
        ::ui::OrientationType rescalingType
    );

    MCAPI void addGridItemPositionTerms(
        ::UIControl&          parent,
        ::UIControl&          control,
        ::LayoutVariableType  positionType,
        ::ui::OrientationType rescalingType
    );

    MCAPI void addGridItemSizeTerms(::UIControl& parent, ::LayoutVariableType sizeType);

    MCAPI void
    addGridSizeTerms(::UIControl& control, ::UIControl& gridItemTemplate, ::LayoutVariableType sizeType, float scale);

    MCAPI void addOffsetDeltaTerm(::UIControl& control, ::LayoutVariableType type);

    MCAPI void addRescalingGridDimensionTerm(
        ::UIControl&          control,
        ::UIControl&          itemTemplate,
        ::LayoutVariableType  dimensionType,
        ::ui::OrientationType rescalingType
    );

    MCAPI void addStackPanelItemPositionTerms(
        ::UIControl&          priorSibling,
        ::UIControl&          control,
        ::LayoutVariableType  positionType,
        ::ui::OrientationType orientation
    );

    MCAPI void
    addStackPanelItemRemainderSizeTerms(::UIControl& parent, ::UIControl& control, ::LayoutVariableType sizeType);

    MCAPI void addStackPanelVisibilityTerm(::UIControl& control, ::LayoutVariableType sizeType);

    MCAPI bool isSatisfiable() const;

    MCAPI void removeDependsOnMeEntries();

    MCAPI ::std::string toString(::UIControl& control) const;
    // NOLINTEND
};
