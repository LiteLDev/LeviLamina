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

    virtual void OnSelectionChanged(::cohtml::IInputProxy* proxy, ::cohtml::TextInput::Selection selection);

    virtual void OnTextChanged(
        ::cohtml::IInputProxy* proxy,
        char const*            addedChars,
        uint                   addedCount,
        char const*            removedChars,
        uint                   removedCount,
        uint                   index
    );

    virtual void OnFocus(::cohtml::IInputProxy* proxy);

    virtual void OnBlur(::cohtml::IInputProxy*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
