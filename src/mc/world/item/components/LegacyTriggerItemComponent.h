#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
// clang-format on

class LegacyTriggerItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnkff9e52;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTriggerItemComponent& operator=(LegacyTriggerItemComponent const&);
    LegacyTriggerItemComponent(LegacyTriggerItemComponent const&);
    LegacyTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyTriggerItemComponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
