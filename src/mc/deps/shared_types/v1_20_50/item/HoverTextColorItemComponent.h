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
    ::ll::UntypedStorage<8, 32> mUnk4b73c3;
    // NOLINTEND

public:
    // prevent constructor by default
    HoverTextColorItemComponent& operator=(HoverTextColorItemComponent const&);
    HoverTextColorItemComponent(HoverTextColorItemComponent const&);
    HoverTextColorItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HoverTextColorItemComponent(::SharedTypes::v1_20_50::HoverTextColorItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::HoverTextColorItemComponent&
    operator=(::SharedTypes::v1_20_50::HoverTextColorItemComponent&&);

    MCNAPI ~HoverTextColorItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::HoverTextColorItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
