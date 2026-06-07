#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIFrameUpdateContext;
// clang-format on

class CustomFrameUpdateComponent : public ::UIComponent {
public:
    // prevent constructor by default
    CustomFrameUpdateComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomFrameUpdateComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual bool isCustomFrameUpdateComponent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CustomFrameUpdateComponent(::UIControl& owner);

    MCAPI void frameUpdate(::UIFrameUpdateContext& frameUpdateContext, ::UIControl& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCFOLD bool $isCustomFrameUpdateComponent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
