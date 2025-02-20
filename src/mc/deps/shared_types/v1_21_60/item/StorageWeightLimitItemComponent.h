#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60 {

struct StorageWeightLimitItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7c1012;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageWeightLimitItemComponent& operator=(StorageWeightLimitItemComponent const&);
    StorageWeightLimitItemComponent(StorageWeightLimitItemComponent const&);
    StorageWeightLimitItemComponent();
};

} // namespace SharedTypes::v1_21_60
