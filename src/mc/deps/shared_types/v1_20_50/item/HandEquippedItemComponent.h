#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct HandEquippedItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3de180;
    // NOLINTEND

public:
    // prevent constructor by default
    HandEquippedItemComponent& operator=(HandEquippedItemComponent const&);
    HandEquippedItemComponent(HandEquippedItemComponent const&);
    HandEquippedItemComponent();
};

} // namespace SharedTypes::v1_20_50
