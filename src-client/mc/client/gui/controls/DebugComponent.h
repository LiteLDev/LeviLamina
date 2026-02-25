#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class DebugComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDescription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
