#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct FoodItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk31eb62;
    ::ll::UntypedStorage<4, 4> mUnk321bb7;
    ::ll::UntypedStorage<4, 4> mUnkda6002;
    ::ll::UntypedStorage<1, 1> mUnk2b3e4a;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponent& operator=(FoodItemComponent const&);
    FoodItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FoodItemComponent(::SharedTypes::v1_20_50::FoodItemComponent const&);

    MCNAPI ~FoodItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::FoodItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
