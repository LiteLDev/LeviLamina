#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnHitActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnHitActorTriggerItemComponent& operator=(LegacyOnHitActorTriggerItemComponent const&);
    LegacyOnHitActorTriggerItemComponent(LegacyOnHitActorTriggerItemComponent const&);
    LegacyOnHitActorTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnHitActorTriggerItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onHitActor(class ItemStack& item, class Actor& actor, class Mob& attacker);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void _initializeComponent$();

    // NOLINTEND
};
