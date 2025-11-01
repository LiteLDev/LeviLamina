#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationSlotData.h"

// auto generated forward declare list
// clang-format off
class ContainerValidationBase;
class SimpleSparseContainer;
// clang-format on

struct ContainerValidationSlotInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ContainerValidationSlotData> mSlotData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SimpleSparseContainer>> mContainer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerValidationBase const>> mValidator;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContainerValidationSlotInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
