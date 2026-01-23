#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::DataDrivenUI {

enum class TagType : uchar {
    Container                = 0,
    Panel                    = 1,
    PanelText                = 2,
    PanelDecoration          = 3,
    PanelSpacing             = 4,
    PanelCloseButton         = 5,
    Context                  = 6,
    ContextList              = 7,
    ContainerFixedGridLayout = 8,
    ContainerItem            = 9,
};

}
