#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnConsumeTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponent& operator=(LegacyOnConsumeTriggerItemComponent const&);
    LegacyOnConsumeTriggerItemComponent(LegacyOnConsumeTriggerItemComponent const&);
    LegacyOnConsumeTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnConsumeTriggerItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _consume(class ItemStack const&, class ItemStack& item, class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void _initializeComponent$();

    // NOLINTEND
};
