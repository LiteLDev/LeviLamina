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
    ContainerTextField       = 12,
    FormButton               = 13,
    FormDivider              = 14,
    FormDropdown             = 15,
    FormImage                = 16,
    FormScrollView           = 17,
    FormSlider               = 18,
    FormSwitch               = 19,
    FormTextField            = 20,
    Visibility               = 21,
};

}
