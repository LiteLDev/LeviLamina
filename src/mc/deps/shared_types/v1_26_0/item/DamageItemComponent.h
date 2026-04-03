#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct DamageItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct DamageItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mDamage;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_50::DamageItemComponent>& oldComp,
        ::std::optional<::SharedTypes::v1_26_0::DamageItemComponent>&  newComp
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
