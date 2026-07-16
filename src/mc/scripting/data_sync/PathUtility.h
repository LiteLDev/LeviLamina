#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI::PathUtility { struct PathQueryError; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Bedrock::DDUI::PathUtility {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::nonstd::
    expected<::std::vector<::std::variant<::std::string, uint>>, ::Bedrock::DDUI::PathUtility::PathQueryError>
    parsePath(::std::string const& wholePath);
#endif

MCAPI ::std::optional<::cereal::DynamicValue> stringToDynamicValue(::std::string const& s);
// NOLINTEND

} // namespace Bedrock::DDUI::PathUtility
