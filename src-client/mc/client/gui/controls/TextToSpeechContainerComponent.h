#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class TextToSpeechContainerComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mSectionHeader;
    ::ll::TypedStorage<1, 1, bool>           mIgnoreChildrenEnumeration;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechContainerComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
