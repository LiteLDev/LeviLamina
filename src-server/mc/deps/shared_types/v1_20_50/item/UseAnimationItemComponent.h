#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct UseAnimationItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3675f8;
    // NOLINTEND

public:
    // prevent constructor by default
    UseAnimationItemComponent& operator=(UseAnimationItemComponent const&);
    UseAnimationItemComponent(UseAnimationItemComponent const&);
    UseAnimationItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
