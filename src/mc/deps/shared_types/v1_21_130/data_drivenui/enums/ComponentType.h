#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_130::DataDrivenUI {

enum class ComponentType : uchar {
    ExtensionPoint           = 0,
    Panel                    = 1,
    PanelText                = 2,
    PanelDecoration          = 3,
    PanelSpacing             = 4,
    PanelCloseButton         = 5,
    Context                  = 6,
    ContextList              = 7,
    ScrollableGridLayout     = 8,
    ContainerFixedGridLayout = 9,
    ContainerSlot            = 10,
    ContainerLayout          = 11,
    FormButton               = 12,
    FormDivider              = 13,
    FormDropdown             = 14,
    FormScrollView           = 15,
    FormSlider               = 16,
    FormSwitch               = 17,
    FormTextField            = 18,
    Visibility               = 19,
};

}
