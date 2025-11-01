#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct FireResistantItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9d04a2;
    // NOLINTEND

public:
    // prevent constructor by default
    FireResistantItemComponent& operator=(FireResistantItemComponent const&);
    FireResistantItemComponent(FireResistantItemComponent const&);
    FireResistantItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& DEFAULT_VALUE();
    // NOLINTEND

};

}
