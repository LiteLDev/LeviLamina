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
    ContainerFixedGridLayout = 8,
    ContainerItem            = 9,
    ContainerLayout          = 10,
    FormButton               = 11,
    FormDivider              = 12,
    FormDropdown             = 13,
    FormScrollView           = 14,
    FormSlider               = 15,
    FormSwitch               = 16,
    FormTextField            = 17,
    Visibility               = 18,
};

}
