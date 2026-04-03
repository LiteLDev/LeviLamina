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
MCAPI ::TradeTableLoadSystem::TradeTableDataLegacySlice
parseTradeTableData(::Puv::Input const& input, ::Puv::Logger& logger);
// NOLINTEND

} // namespace TradeTableLoadSystem
