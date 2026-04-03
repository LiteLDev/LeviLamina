#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Input {

enum class PointerType : int {
    Arrow                    = 0,
    Hand                     = 1,
    Wait                     = 2,
    Text                     = 3,
    Move                     = 4,
    Help                     = 5,
    Disabled                 = 6,
    None                     = 7,
    ContextMenu              = 8,
    Progress                 = 9,
    Cell                     = 10,
    Crosshair                = 11,
    VerticalText             = 12,
    Alias                    = 13,
    Copy                     = 14,
    NoDrop                   = 15,
    Grab                     = 16,
    Grabbing                 = 17,
    AllScroll                = 18,
    ColumnResize             = 19,
    RowResize                = 20,
    NorthArrow               = 21,
    SouthArrow               = 22,
    EastArrow                = 23,
    WestArrow                = 24,
    NortheastArrow           = 25,
    NorthwestArrow           = 26,
    SoutheastArrow           = 27,
    SouthwestArrow           = 28,
    HorizontalResize         = 29,
    VerticalResize           = 30,
    NortheastSouthwestResize = 31,
    NorthwestSoutheastResize = 32,
    ZoomIn                   = 33,
    ZoomOut                  = 34,
};

}
