#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LayoutRuleTermType : int {
    ParentSizeRelative       = 0,
    SelfSizeRelative         = 1,
    ChildSizeRelative        = 2,
    LargestChildSizeRelative = 3,
    GridChildSizeRelative    = 4,
    Absolute                 = 5,
    AnchorFrom               = 6,
    AnchorTo                 = 7,
    GridItemOffset           = 8,
    RescalingGridItemOffset  = 9,
    GridItemSize             = 10,
    StackPanelItemOffset     = 11,
    StackPanelItemParentSize = 12,
    StackPanelItemPeerSize   = 13,
    CenterGridItem           = 14,
    DynamicGridPosition      = 15,
    DynamicGridDimension     = 16,
    FillGridDimension        = 17,
    OffsetDelta              = 18,
    InheritMaxSiblingSize    = 19,
    StackPanelSetVisibility  = 20,
};
