#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
// clang-format on

class AllowOffHandItemComponent : public ::NetworkedItemComponent<::AllowOffHandItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAllowOffHand;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
