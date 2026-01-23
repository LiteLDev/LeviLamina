#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct HoverTextColorItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverTextColorItemComponent(HoverTextColorItemComponent const&);
    HoverTextColorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_20_50::HoverTextColorItemComponent&
    operator=(::SharedTypes::v1_20_50::HoverTextColorItemComponent&&);

    MCFOLD ::SharedTypes::v1_20_50::HoverTextColorItemComponent&
    operator=(::SharedTypes::v1_20_50::HoverTextColorItemComponent const&);

    MCAPI ~HoverTextColorItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
