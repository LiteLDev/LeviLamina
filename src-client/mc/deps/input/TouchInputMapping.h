#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchTurnInteractBinding.h"

// auto generated forward declare list
// clang-format off
struct TouchConditionalGuiPassthroughBinding;
struct TouchGlyphButtonBinding;
struct TouchTapOrHoldGlyphButtonBinding;
struct TouchTextButtonBinding;
// clang-format on

struct TouchInputMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TouchTextButtonBinding>>                textButtonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::TouchGlyphButtonBinding>>               glyphButtonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::TouchTapOrHoldGlyphButtonBinding>>      tapOrHoldGlyphButtonBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::TouchConditionalGuiPassthroughBinding>> conditionalGuiPassthroughBindings;
    ::ll::TypedStorage<8, 184, ::TouchTurnInteractBinding>                            turnInteractBinding;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           pointerButtonNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           classicPointerButtonNames;
    ::ll::TypedStorage<1, 1, bool>                                                    invertYAxis;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchInputMapping();

    MCAPI TouchInputMapping(::TouchInputMapping const&);

    MCAPI ::TouchInputMapping& operator=(::TouchInputMapping const&);

    MCAPI ~TouchInputMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::TouchInputMapping const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
