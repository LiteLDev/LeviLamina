#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class Vec2;
// clang-format on

class KeyboardManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardManager() = default;

    virtual bool tryEnableKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        ::Vec2 const&        position,
        float                controlHeight
    ) = 0;

    virtual bool isFullScreenKeyboard() const = 0;

    virtual void disableKeyboard() = 0;

    virtual bool canActivateKeyboard() = 0;

    virtual bool isKeyboardEnabled() const = 0;

    virtual bool isKeyboardActive() const = 0;

    virtual bool wasEnabledWithMultiline() const = 0;

    virtual bool isNumbersOnly() const = 0;

    virtual int getMaxLength() const = 0;

    virtual float getKeyboardHeight() const = 0;

    virtual void setForcedHeight(float height) = 0;

    virtual bool tryClaimKeyboardOwnership() = 0;

    virtual void releaseKeyboardOwnership() = 0;

    virtual bool getKeyboardClosedEvent() = 0;

    virtual void clearKeyboardClosedEvent() = 0;

    virtual void updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::Vec2 const&          caretPosition,
        ::Vec2 const&          caretSize
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
