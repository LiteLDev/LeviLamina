#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

struct PassengersToPositionComponent {
public:
    // PassengersToPositionComponent inner types declare
    // clang-format off
    struct Data;
    // clang-format on
    
    // PassengersToPositionComponent inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk140c93;
        ::ll::UntypedStorage<4, 8> mUnk2073b7;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PassengersToPositionComponent::Data>> mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictEntityContext>> mStack;
    // NOLINTEND

};
