#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

class KeyboardLayout {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::glm::vec2 moveRootForKeyboard(
        ::glm::vec2 const&     rootPos,
        float                  keyboardHeight,
        float                  screenHeight,
        ::RectangleArea const& desiredTextArea,
        ::RectangleArea const& fallbackTextArea
    );
    // NOLINTEND
};
