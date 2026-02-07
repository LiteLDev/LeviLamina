#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct SweepDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2>                     origin;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                     dirOrigin;
    ::ll::TypedStorage<4, 4, float>                           halfAngleCos;
    ::ll::TypedStorage<1, 1, ::ui::CardinalDirection>         direction;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>> ignoreControl;
    ::ll::TypedStorage<1, 1, bool>                            canWrap;
    ::ll::TypedStorage<1, 1, bool>                            respectClipping;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                controlBoundary;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                sweepBoundary;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SweepDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
