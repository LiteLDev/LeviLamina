#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataDrivenRendererBits : int {
    HasInitializationScript           = 0,
    HasPreAnimationScript             = 1,
    HasHeldItemScaleExpression        = 2,
    HasScaleScript                    = 3,
    HasUniformScale                   = 4,
    HasScaleX                         = 5,
    HasScaleY                         = 6,
    HasScaleZ                         = 7,
    RenderControllersAlwaysEnabled    = 8,
    RenderControllersOverrideUniforms = 9,
    RenderControllersIgnoreLighting   = 10,
    RenderControllersFilterLighting   = 11,
    WillRunAnyMolangExpressions       = 12,
    AttachablesSupported              = 13,
    HideArmor                         = 14,
    Count                             = 15,
};
