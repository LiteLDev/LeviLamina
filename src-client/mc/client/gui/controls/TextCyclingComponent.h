#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/BaseCyclingComponent.h"

// auto generated forward declare list
// clang-format off
class UIComponent;
class UIControl;
// clang-format on

class TextCyclingComponent : public ::BaseCyclingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mTextLabels;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextCyclingComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void _postCreate() /*override*/;

    virtual void _updateSubPage() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
