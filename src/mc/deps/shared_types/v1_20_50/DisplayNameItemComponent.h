#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct DisplayNameItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk33f0fc;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayNameItemComponent(DisplayNameItemComponent const&);
    DisplayNameItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::DisplayNameItemComponent&
    operator=(::SharedTypes::v1_20_50::DisplayNameItemComponent&&);

    MCFOLD ::SharedTypes::v1_20_50::DisplayNameItemComponent&
    operator=(::SharedTypes::v1_20_50::DisplayNameItemComponent const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
