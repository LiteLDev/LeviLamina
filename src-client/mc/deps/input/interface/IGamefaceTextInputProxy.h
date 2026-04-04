#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TextBoxSelection;
// clang-format on

class IGamefaceTextInputProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGamefaceTextInputProxy() = default;

    virtual void imeStartComposition() = 0;

    virtual void imeUpdateCompositionText(::std::string const& compositionString) = 0;

    virtual void imeReplaceCompositionTextRange(::std::string const& replacement, int from, int to) = 0;

    virtual void imeConfirmComposition(::std::string const& compositionString) = 0;

    virtual void imeConfirmComposition() = 0;

    virtual void imeEndComposition() = 0;

    virtual void setText(::std::string const& text, ::TextBoxSelection selection) = 0;

    virtual void setSelection(::TextBoxSelection selection) = 0;

    virtual ::std::string getText() const = 0;

    virtual ::TextBoxSelection getSelection() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
