#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct HoverTextColorItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4b73c3;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverTextColorItemComponent(HoverTextColorItemComponent const&);
    HoverTextColorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::HoverTextColorItemComponent&
    operator=(::SharedTypes::v1_20_50::HoverTextColorItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::HoverTextColorItemComponent&
    operator=(::SharedTypes::v1_20_50::HoverTextColorItemComponent const&);

    MCNAPI ~HoverTextColorItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
