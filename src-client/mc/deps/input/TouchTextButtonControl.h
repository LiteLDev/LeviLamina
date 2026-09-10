#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchGlyphButtonControl.h"

// auto generated forward declare list
// clang-format off
class InputRenderContext;
// clang-format on

class TouchTextButtonControl : public ::TouchGlyphButtonControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::glm::vec2()>>         mPosition;
    ::ll::TypedStorage<8, 64, ::std::function<void(::RectangleArea)>> mArea;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string()>>       mLabel;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                             mCurrentPosition;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                        mCurrentRect;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTextButtonControl() /*override*/ = default;

    virtual void render(::InputRenderContext& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND
};
