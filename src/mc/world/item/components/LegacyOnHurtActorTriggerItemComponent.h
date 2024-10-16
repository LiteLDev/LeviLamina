#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LegacyOnHurtActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponent& operator=(LegacyOnHurtActorTriggerItemComponent const&);
    LegacyOnHurtActorTriggerItemComponent(LegacyOnHurtActorTriggerItemComponent const&);
    LegacyOnHurtActorTriggerItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyOnHurtActorTriggerItemComponent() = default;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _onHurtActor(int& durabilityDamage, class ItemStack& item, class Actor& actor, class Mob& attacker);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void _initializeComponent$();

    // NOLINTEND
};
