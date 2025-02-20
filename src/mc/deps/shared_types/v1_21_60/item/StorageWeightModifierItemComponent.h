#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60 {

struct StorageWeightModifierItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkeefe4b;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightModifierItemComponent& operator=(StorageWeightModifierItemComponent const&);
    StorageWeightModifierItemComponent(StorageWeightModifierItemComponent const&);
    StorageWeightModifierItemComponent();
};

} // namespace SharedTypes::v1_21_60
