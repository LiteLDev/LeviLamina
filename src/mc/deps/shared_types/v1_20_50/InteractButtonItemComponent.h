#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct InteractButtonItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk98134a;
    ::ll::UntypedStorage<8, 32> mUnkba59e1;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);
    InteractButtonItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::InteractButtonItemComponent&
    operator=(::SharedTypes::v1_20_50::InteractButtonItemComponent const&);

    MCFOLD ::SharedTypes::v1_20_50::InteractButtonItemComponent&
    operator=(::SharedTypes::v1_20_50::InteractButtonItemComponent&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
