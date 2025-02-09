#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AnimationEventData;
struct ButtonScreenEventData;
struct ClipStateChangeEventData;
struct ClippedCollectionEventData;
struct ControllerDirectionEventData;
struct CustomRendererEventData;
struct FocusMoveScreenEventData;
struct HoloInputModeChangeScreenEventData;
struct HoverScreenEventData;
struct InputModeChangeScreenEventData;
struct LockedStateEventData;
struct PointerHeldScreenEventData;
struct PointerMoveScreenEventData;
struct RawInputScreenEventData;
struct ScrollDirectionEventData;
struct ScrollRequestScreenEventData;
struct SliderChangeEventData;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
// clang-format on

union ScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ButtonScreenEventData>                button;
    ::ll::TypedStorage<8, 40, ::TextEditScreenEventData>              textEdit;
    ::ll::TypedStorage<8, 40, ::HoverScreenEventData>                 hover;
    ::ll::TypedStorage<4, 40, ::PointerMoveScreenEventData>           pointerMove;
    ::ll::TypedStorage<4, 40, ::PointerHeldScreenEventData>           pointerHeld;
    ::ll::TypedStorage<4, 40, ::FocusMoveScreenEventData>             focusMove;
    ::ll::TypedStorage<4, 40, ::InputModeChangeScreenEventData>       inputMode;
    ::ll::TypedStorage<4, 40, ::HoloInputModeChangeScreenEventData>   holoInputMode;
    ::ll::TypedStorage<4, 40, ::ScrollRequestScreenEventData>         scrollRequest;
    ::ll::TypedStorage<4, 40, ::ScrollDirectionEventData>             scrollDirectionRequest;
    ::ll::TypedStorage<8, 40, ::ToggleChangeEventData>                toggle;
    ::ll::TypedStorage<4, 40, ::ControllerDirectionEventData>         controllerDirectionEventData;
    ::ll::TypedStorage<4, 40, ::RawInputScreenEventData>              rawInput;
    ::ll::TypedStorage<8, 40, ::SliderChangeEventData>                slider;
    ::ll::TypedStorage<4, 40, ::AnimationEventData>                   animEventData;
    ::ll::TypedStorage<1, 40, ::LockedStateEventData>                 locked;
    ::ll::TypedStorage<8, 40, ::ClippedCollectionEventData>           clippedCollection;
    ::ll::TypedStorage<8, 40, ::ClipStateChangeEventData>             clipStateChangeEventData;
    ::ll::TypedStorage<4, 40, ::TextEditSelectedStateChangeEventData> textEditSelectedStateChangeEventData;
    ::ll::TypedStorage<4, 40, ::CustomRendererEventData>              customRendererEventData;
    // NOLINTEND
};
