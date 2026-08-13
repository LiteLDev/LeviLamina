#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class Input; }
namespace Puv { class Logger; }
namespace TradeTableLoadSystem { struct TradeTableDataLegacySlice; }
// clang-format on

namespace TradeTableLoadSystem {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::TradeTableLoadSystem::TradeTableDataLegacySlice
parseTradeTableData(::Puv::Input const& input, ::Puv::Logger& logger);
#endif

#ifdef LL_PLAT_S
MCAPI ::TradeTableLoadSystem::TradeTableDataLegacySlice
parseTradeTableData(::Puv::Input const& input, ::Puv::Logger& logger);
#endif
// NOLINTEND

} // namespace TradeTableLoadSystem
