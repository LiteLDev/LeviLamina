#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/input/TouchGlyphButtonControl.h"

// auto generated forward declare list
// clang-format off
class InputRenderContext;
struct ButtonColors;
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
    // prevent constructor by default
    TouchTextButtonControl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TouchTextButtonControl() /*override*/ = default;

    virtual void render(::InputRenderContext& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchTextButtonControl(
        ::std::function<::glm::vec2()>         position,
        ::std::function<void(::RectangleArea)> area,
        ::std::function<float()>               opacity,
        ::std::function<bool()>                condition,
        ::std::function<::std::string()>       label,
        uint                                   buttonId,
        ::ButtonColors const&                  buttonColors,
        int                                    ux,
        int                                    uv,
        int                                    uvWidth,
        int                                    uvHeight,
        bool                                   passThrough,
        int                                    touchStateRequirement,
        bool                                   extendButtonPressOutsideUntilReleased
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::glm::vec2()>         position,
        ::std::function<void(::RectangleArea)> area,
        ::std::function<float()>               opacity,
        ::std::function<bool()>                condition,
        ::std::function<::std::string()>       label,
        uint                                   buttonId,
        ::ButtonColors const&                  buttonColors,
        int                                    ux,
        int                                    uv,
        int                                    uvWidth,
        int                                    uvHeight,
        bool                                   passThrough,
        int                                    touchStateRequirement,
        bool                                   extendButtonPressOutsideUntilReleased
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $render(::InputRenderContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
