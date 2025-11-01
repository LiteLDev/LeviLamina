#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

struct ContainerValidation {
public:
    // ContainerValidation inner types define
    using AllowedItemInSlotDelegate = ::std::function<bool(int, ::ItemStackBase const&, int)>;
    
    using AllowedItemToAddDelegate = ::std::function<bool(::ItemStackBase const&)>;
    
    using AvailableSetCountDelegate = ::std::function<int(int, ::ItemStackBase const&)>;
    
    using ValidSlotForContainerDelegate = ::std::function<bool(int)>;
    
    using AllowedItemToRemoveDelegate = ::std::function<bool(::ItemStackBase const&)>;
    
    using AllowedItemInContainerDelegate = ::std::function<bool(::ItemStackBase const&)>;
    
};
