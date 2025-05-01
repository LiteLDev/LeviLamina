#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct IconItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka82701;
    // NOLINTEND

public:
    // prevent constructor by default
    IconItemComponent(IconItemComponent const&);
    IconItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::IconItemComponent& operator=(::SharedTypes::v1_20_50::IconItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::IconItemComponent& operator=(::SharedTypes::v1_20_50::IconItemComponent const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
