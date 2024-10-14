#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnUseTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponent& operator=(LegacyOnUseTriggerItemComponent const&);
    LegacyOnUseTriggerItemComponent(LegacyOnUseTriggerItemComponent const&);
    LegacyOnUseTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnUseTriggerItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _use(bool& result, class ItemStack& item, class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void _initializeComponent$();

    // NOLINTEND
};
