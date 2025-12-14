#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ButtonColors.h"

struct TouchGlyphButtonBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  buttonName;
    ::ll::TypedStorage<4, 4, uint>            areaBindingName;
    ::ll::TypedStorage<4, 4, uint>            conditionBindingName;
    ::ll::TypedStorage<4, 4, uint>            opacityBindingName;
    ::ll::TypedStorage<4, 32, ::ButtonColors> buttonColors;
    ::ll::TypedStorage<4, 4, int>             imageU;
    ::ll::TypedStorage<4, 4, int>             imageV;
    ::ll::TypedStorage<4, 4, int>             uvWidth;
    ::ll::TypedStorage<4, 4, int>             uvHeight;
    ::ll::TypedStorage<4, 4, float>           innerPaddingX;
    ::ll::TypedStorage<4, 4, float>           innerPaddingY;
    ::ll::TypedStorage<1, 1, bool>            passThrough;
    ::ll::TypedStorage<4, 4, int>             touchStateRequirement;
    ::ll::TypedStorage<4, 4, float>           glyphScale;
    ::ll::TypedStorage<1, 1, bool>            promiscuous;
    ::ll::TypedStorage<1, 1, bool>            extendButtonPressOutsideUntilReleased;
    ::ll::TypedStorage<8, 32, ::std::string>  iconPath;
    ::ll::TypedStorage<8, 32, ::std::string>  pressedIconPath;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchGlyphButtonBinding(TouchGlyphButtonBinding const&);
    TouchGlyphButtonBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TouchGlyphButtonBinding& operator=(::TouchGlyphButtonBinding const&);
    // NOLINTEND
};
