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
    // vIndex: 0, symbol: __gen_??1DamageAbsorptionItemComponent@@UEAA@XZ
    virtual ~DamageAbsorptionItemComponent() = default;

    // symbol:
    // ??0DamageAbsorptionItemComponent@@QEAA@AEBV?$vector@W4ActorDamageCause@@V?$allocator@W4ActorDamageCause@@@std@@@std@@@Z
    MCAPI explicit DamageAbsorptionItemComponent(std::vector<::ActorDamageCause> const&);

    // symbol: ?getIdentifier@DamageAbsorptionItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol: ?VALID_SLOTS@DamageAbsorptionItemComponent@@2V?$array@W4ArmorSlot@@$00@std@@B
    MCAPI static std::array<::ArmorSlot, 1> const VALID_SLOTS;

    // NOLINTEND
};
