#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct InteractButtonItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk98134a;
    ::ll::UntypedStorage<8, 32> mUnkba59e1;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);
    InteractButtonItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::InteractButtonItemComponent&
    operator=(::SharedTypes::v1_20_50::InteractButtonItemComponent const&);

    MCNAPI ::SharedTypes::v1_20_50::InteractButtonItemComponent&
    operator=(::SharedTypes::v1_20_50::InteractButtonItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
