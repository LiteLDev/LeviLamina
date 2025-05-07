#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/safety/ChatFloodingAction.h"

// auto generated forward declare list
// clang-format off
namespace Safety { struct ChatFloodingActionEnumHasher; }
// clang-format on

namespace Safety {
// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<::std::string, ::Safety::ChatFloodingAction> const& ChatFloodingActionEnumMap();

MCNAPI ::std::unordered_map<
    ::Safety::ChatFloodingAction,
    ::std::string,
    ::Safety::ChatFloodingActionEnumHasher,
    ::std::equal_to<::Safety::ChatFloodingAction>> const&
ChatFloodingActionEnumToStringMap();
// NOLINTEND

} // namespace Safety
