#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_10 { struct ComponentItemComponentData; }
namespace SharedTypes::v1_21_10 { struct DamageAbsorptionItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {
// functions
// NOLINTBEGIN
MCAPI void bindCoordinateEvaluationOrder(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::SharedTypes::v1_21_10::ComponentItemComponentData const& __P0,
    ::SharedTypes::v1_21_10::ComponentItemComponentData const& __P1
);

MCFOLD bool operator==(
    ::SharedTypes::v1_21_10::DamageAbsorptionItemComponent const& __P0,
    ::SharedTypes::v1_21_10::DamageAbsorptionItemComponent const& __P1
);
// NOLINTEND

} // namespace SharedTypes::v1_21_10
