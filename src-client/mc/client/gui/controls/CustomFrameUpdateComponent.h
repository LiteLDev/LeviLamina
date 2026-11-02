#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class CustomFrameUpdateComponent : public ::UIComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomFrameUpdateComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual bool isCustomFrameUpdateComponent() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCNAPI void $reset();

    MCNAPI bool $isCustomFrameUpdateComponent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
