#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseProcessorAndroid {
public:
    // MouseProcessorAndroid inner types declare
    // clang-format off
    struct MouseInputEvent;
    // clang-format on

    // MouseProcessorAndroid inner types define
    enum class MouseType : int {};

    struct MouseInputEvent {
    public:
        // MouseInputEvent inner types define
        enum class Action : uchar {};
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> mPointerPrevious;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mTwoFingerPrevious;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mPositionRounding;
    ::ll::TypedStorage<4, 4, int>         mPreviousButtonState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MouseProcessorAndroid() = default;

    virtual void absoluteMouseInput(::glm::vec<2, short> const&) const = 0;

    virtual void relativeMouseInput(::glm::vec<2, short> const&) const = 0;

    virtual int buttonFilter(char) const = 0;

    virtual void buttonInput(char, bool, ::glm::vec<2, short> const&) const = 0;

    virtual void scrollInput(char, ::glm::vec<2, short> const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
