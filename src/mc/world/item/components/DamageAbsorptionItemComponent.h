#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_10 { struct DamageAbsorptionItemComponent; }
// clang-format on

class DamageAbsorptionItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mAbsorbableDamageCauses;
    ::ll::TypedStorage<1, 1, bool>                                                    mAbsorbAllDamageCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageAbsorptionItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DamageAbsorptionItemComponent(
        ::std::vector<::SharedTypes::Legacy::ActorDamageCause> const& absorbableDamageCauses
    );

#ifdef LL_PLAT_S
    MCAPI explicit DamageAbsorptionItemComponent(::SharedTypes::v1_21_10::DamageAbsorptionItemComponent data);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::SharedTypes::Legacy::ActorDamageCause> const& absorbableDamageCauses);

#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_21_10::DamageAbsorptionItemComponent data);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
