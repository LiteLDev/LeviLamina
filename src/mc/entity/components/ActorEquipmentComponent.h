#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SimpleContainer;
// clang-format on

struct ActorEquipmentComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimpleContainer>> mHand;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimpleContainer>> mArmor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorEquipmentComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
