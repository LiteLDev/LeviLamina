#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct CustomComponentsItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdbe64d;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomComponentsItemComponent& operator=(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CustomComponentsItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
