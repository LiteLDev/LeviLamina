#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct StackedByDataItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk915076;
    // NOLINTEND

public:
    // prevent constructor by default
    StackedByDataItemComponent& operator=(StackedByDataItemComponent const&);
    StackedByDataItemComponent(StackedByDataItemComponent const&);
    StackedByDataItemComponent();
};

} // namespace SharedTypes::v1_20_50
