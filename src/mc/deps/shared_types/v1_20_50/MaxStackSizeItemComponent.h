#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct MaxStackSizeItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkdd0410;
    // NOLINTEND

public:
    // prevent constructor by default
    MaxStackSizeItemComponent& operator=(MaxStackSizeItemComponent const&);
    MaxStackSizeItemComponent(MaxStackSizeItemComponent const&);
    MaxStackSizeItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
