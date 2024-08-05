#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnCompleteTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnCompleteTriggerItemComponent& operator=(LegacyOnCompleteTriggerItemComponent const&);
    LegacyOnCompleteTriggerItemComponent(LegacyOnCompleteTriggerItemComponent const&);
    LegacyOnCompleteTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnCompleteTriggerItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _onUseTimeDepleted(::ItemUseMethod&, class ItemStack const&, class ItemStack&, class Player&, class Level&);

    // NOLINTEND
};
