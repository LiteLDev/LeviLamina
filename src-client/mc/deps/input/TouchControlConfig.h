#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

struct TouchControlConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                area;
    ::ll::TypedStorage<4, 4, uint>                                               turnInteractButtonId;
    ::ll::TypedStorage<4, 4, uint>                                               tapButtonId;
    ::ll::TypedStorage<4, 4, uint>                                               holdButtonId;
    ::ll::TypedStorage<4, 4, uint>                                               sprintButtonId;
    ::ll::TypedStorage<4, 4, float>                                              sensitivity;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           condition;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::RectangleArea>()>> inactiveAreas;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           isLeftHanded;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           moveStickVisible;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          thumbstickOpacity;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           staticJoystick;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                defaultMoveStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<::RectangleArea()>>                hotbarArea;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           defaultMoveStickVisible;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           showActionButton;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           sprintOnMovement;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           isInputSprinting;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>                          clientActivePointer;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           issInControlEditMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TouchControlConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
