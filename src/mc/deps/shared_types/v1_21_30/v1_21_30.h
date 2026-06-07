#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_30 { struct Trade; }
namespace SharedTypes::v1_21_30 { struct TradeItem; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {
// functions
// NOLINTBEGIN
MCAPI void bindAll(::cereal::ReflectionCtx& ctx);

MCAPI void bindItemComponentTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(::SharedTypes::v1_21_30::Trade const&, ::SharedTypes::v1_21_30::Trade const&);

MCAPI bool operator==(::SharedTypes::v1_21_30::TradeItem const&, ::SharedTypes::v1_21_30::TradeItem const&);
// NOLINTEND

} // namespace SharedTypes::v1_21_30
