#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/input/TextBoxCaretMovement.h"

// auto generated forward declare list
// clang-format off
struct TextBoxStateChange;
// clang-format on

class ITextBoxController : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITextBoxController() /*override*/ = default;

    virtual void setTextBoxState(int, ::TextBoxStateChange const&) = 0;

    virtual void onKeyboardDismissed(int) = 0;

    virtual ::std::optional<int> calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
