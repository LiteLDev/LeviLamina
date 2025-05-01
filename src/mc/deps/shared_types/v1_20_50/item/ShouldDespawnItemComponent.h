#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct ShouldDespawnItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk257e05;
    // NOLINTEND

public:
    // prevent constructor by default
    ShouldDespawnItemComponent& operator=(ShouldDespawnItemComponent const&);
    ShouldDespawnItemComponent(ShouldDespawnItemComponent const&);
    ShouldDespawnItemComponent();
};

} // namespace SharedTypes::v1_20_50
