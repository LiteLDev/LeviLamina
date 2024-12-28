#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct UseModifiersItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk546ab3;
    ::ll::UntypedStorage<4, 8> mUnk51e95b;
    // NOLINTEND

public:
    // prevent constructor by default
    UseModifiersItemComponent& operator=(UseModifiersItemComponent const&);
    UseModifiersItemComponent(UseModifiersItemComponent const&);
    UseModifiersItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
