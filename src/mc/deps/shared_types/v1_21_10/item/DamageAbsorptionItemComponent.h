#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_10 {

struct DamageAbsorptionItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e1211;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageAbsorptionItemComponent& operator=(DamageAbsorptionItemComponent const&);
    DamageAbsorptionItemComponent(DamageAbsorptionItemComponent const&);
    DamageAbsorptionItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DamageAbsorptionItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
