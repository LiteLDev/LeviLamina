#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AnimationEventData.h"
#include "mc/client/gui/screens/ButtonScreenEventData.h"
#include "mc/client/gui/screens/ClipStateChangeEventData.h"
#include "mc/client/gui/screens/ClippedCollectionEventData.h"
#include "mc/client/gui/screens/ControllerDirectionEventData.h"
#include "mc/client/gui/screens/CustomRendererEventData.h"
#include "mc/client/gui/screens/FocusMoveScreenEventData.h"
#include "mc/client/gui/screens/HoverScreenEventData.h"
#include "mc/client/gui/screens/InputModeChangeScreenEventData.h"
#include "mc/client/gui/screens/LockedStateEventData.h"
#include "mc/client/gui/screens/PointerHeldScreenEventData.h"
#include "mc/client/gui/screens/PointerMoveScreenEventData.h"
#include "mc/client/gui/screens/RawInputScreenEventData.h"
#include "mc/client/gui/screens/ScrollDirectionEventData.h"
#include "mc/client/gui/screens/ScrollRequestScreenEventData.h"
#include "mc/client/gui/screens/SliderChangeEventData.h"
#include "mc/client/gui/screens/TextEditScreenEventData.h"
#include "mc/client/gui/screens/TextEditSelectedStateChangeEventData.h"
#include "mc/client/gui/screens/ToggleChangeEventData.h"

union ScreenEventData {
public:
    ~ScreenEventData() {}

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ButtonScreenEventData> button;
    ::ll::TypedStorage<8, 40, ::TextEditScreenEventData> textEdit;
    ::ll::TypedStorage<8, 40, ::HoverScreenEventData> hover;
    ::ll::TypedStorage<4, 40, ::PointerMoveScreenEventData> pointerMove;
    ::ll::TypedStorage<4, 40, ::PointerHeldScreenEventData> pointerHeld;
    ::ll::TypedStorage<4, 40, ::FocusMoveScreenEventData> focusMove;
    ::ll::TypedStorage<4, 40, ::InputModeChangeScreenEventData> inputMode;
    ::ll::TypedStorage<4, 40, ::ScrollRequestScreenEventData> scrollRequest;
    ::ll::TypedStorage<4, 40, ::ScrollDirectionEventData> scrollDirectionRequest;
    ::ll::TypedStorage<8, 40, ::ToggleChangeEventData> toggle;
    ::ll::TypedStorage<4, 40, ::ControllerDirectionEventData> controllerDirectionEventData;
    ::ll::TypedStorage<4, 40, ::RawInputScreenEventData> rawInput;
    ::ll::TypedStorage<8, 40, ::SliderChangeEventData> slider;
    ::ll::TypedStorage<4, 40, ::AnimationEventData> animEventData;
    ::ll::TypedStorage<1, 40, ::LockedStateEventData> locked;
    ::ll::TypedStorage<8, 40, ::ClippedCollectionEventData> clippedCollection;
    ::ll::TypedStorage<8, 40, ::ClipStateChangeEventData> clipStateChangeEventData;
    ::ll::TypedStorage<4, 40, ::TextEditSelectedStateChangeEventData> textEditSelectedStateChangeEventData;
    ::ll::TypedStorage<4, 40, ::CustomRendererEventData> customRendererEventData;
    // NOLINTEND

};
