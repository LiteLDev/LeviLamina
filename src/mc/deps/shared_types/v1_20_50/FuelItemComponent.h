#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct FuelItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkda2685;
    // NOLINTEND

public:
    // prevent constructor by default
    FuelItemComponent& operator=(FuelItemComponent const&);
    FuelItemComponent(FuelItemComponent const&);
    FuelItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
