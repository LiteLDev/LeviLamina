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
    ::ll::TypedStorage<1, 1, bool>           mRequiresInteract;
    ::ll::TypedStorage<8, 32, ::std::string> mInteractText;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractButtonItemComponent(InteractButtonItemComponent const&);
    InteractButtonItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::InteractButtonItemComponent&
    operator=(::SharedTypes::v1_20_50::InteractButtonItemComponent&&);

    MCFOLD ::SharedTypes::v1_20_50::InteractButtonItemComponent&
    operator=(::SharedTypes::v1_20_50::InteractButtonItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
