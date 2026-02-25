#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
struct ScreenEvent;
// clang-format on

class DropdownComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                          mDropdownNameId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mContentControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mAreaControl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropdownComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _positionContent();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
