#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct AllowOffHandItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6dbc79;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowOffHandItemComponent& operator=(AllowOffHandItemComponent const&);
    AllowOffHandItemComponent(AllowOffHandItemComponent const&);
    AllowOffHandItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
