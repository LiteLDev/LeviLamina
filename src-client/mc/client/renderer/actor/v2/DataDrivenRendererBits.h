#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataDrivenRendererBits : int {
    HasInitializationScript           = 0,
    HasPreAnimationScript             = 1,
    HasScaleScript                    = 2,
    HasUniformScale                   = 3,
    HasScaleX                         = 4,
    HasScaleY                         = 5,
    HasScaleZ                         = 6,
    RenderControllersAlwaysEnabled    = 7,
    RenderControllersOverrideUniforms = 8,
    RenderControllersIgnoreLighting   = 9,
    RenderControllersFilterLighting   = 10,
    WillRunAnyMolangExpressions       = 11,
    AttachablesSupported              = 12,
    HideArmor                         = 13,
    Count                             = 14,
};
