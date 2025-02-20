#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_30 {

struct DyeableItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk8cdc68;
    // NOLINTEND

public:
    // prevent constructor by default
    DyeableItemComponent& operator=(DyeableItemComponent const&);
    DyeableItemComponent(DyeableItemComponent const&);
    DyeableItemComponent();
};

} // namespace SharedTypes::v1_21_30
