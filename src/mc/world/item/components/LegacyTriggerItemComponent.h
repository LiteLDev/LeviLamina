#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyTriggerItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    LegacyTriggerItemComponent& operator=(LegacyTriggerItemComponent const&);
    LegacyTriggerItemComponent(LegacyTriggerItemComponent const&);
    LegacyTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyTriggerItemComponent();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _dispatch(bool&, class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&);

    // NOLINTEND
};
