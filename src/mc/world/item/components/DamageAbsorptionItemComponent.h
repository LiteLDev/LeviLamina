#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DamageAbsorptionItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    DamageAbsorptionItemComponent& operator=(DamageAbsorptionItemComponent const&);
    DamageAbsorptionItemComponent(DamageAbsorptionItemComponent const&);
    DamageAbsorptionItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DamageAbsorptionItemComponent() = default;

    MCAPI explicit DamageAbsorptionItemComponent(std::vector<::ActorDamageCause> const&);

    MCAPI static class HashedString const& getIdentifier();

    MCAPI static std::array<::ArmorSlot, 1> const VALID_SLOTS;

    // NOLINTEND
};
