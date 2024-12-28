#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ScreenEventType : int {
    Undefined                        = 0,
    ButtonEvent                      = 1,
    HoverEvent                       = 2,
    PointerMoveEvent                 = 3,
    PointerHeldEvent                 = 4,
    FocusMoveEvent                   = 5,
    PreCollectionRefresh             = 6,
    InputModeChangeEvent             = 7,
    HoloInputModeChangeEvent         = 8,
    ScreenViewRefresh                = 9,
    ScrollDirectionEvent             = 10,
    ScrollRequestEvent               = 11,
    TextEditChange                   = 12,
    ToggleChangeEvent                = 13,
    ControllerDirectionEvent         = 14,
    RawInputEvent                    = 15,
    SliderChangeEvent                = 16,
    AnimationEvent                   = 17,
    LockedStateEvent                 = 18,
    ClippedCollectionRange           = 19,
    ClipStateChangeEvent             = 20,
    TextEditSelectedStateChangeEvent = 21,
    CustomRendererEvent              = 22,
    ScreenEventTypeCount             = 23,
};
