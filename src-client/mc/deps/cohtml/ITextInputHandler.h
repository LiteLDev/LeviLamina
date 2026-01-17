#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IInputProxy; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

namespace cohtml {

class ITextInputHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITextInputHandler() = default;

    virtual void OnSelectionChanged(::cohtml::IInputProxy*, ::cohtml::TextInput::Selection);

    virtual void OnTextChanged(::cohtml::IInputProxy*, char const*, uint, char const*, uint, uint);

    virtual void OnFocus(::cohtml::IInputProxy*);

    virtual void OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
