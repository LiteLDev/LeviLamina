#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/INodeProxy.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::TextInput { struct Range; }
namespace cohtml::TextInput { struct Rectangle; }
namespace cohtml::TextInput { struct Selection; }
// clang-format on

namespace cohtml {

class IInputProxy : public ::cohtml::INodeProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* GetText(uint) const = 0;

    virtual ::cohtml::TextInput::Rectangle const* GetTextPositions(uint, uint, uint&) = 0;

    virtual bool SetText(char const*, uint, ::cohtml::TextInput::Range) = 0;

    virtual ::cohtml::TextInput::Selection GetSelection() const = 0;

    virtual bool SetSelection(::cohtml::TextInput::Selection) = 0;

    virtual ~IInputProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
