#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/safety/ReportArea.h"
#include "mc/client/safety/ReportReason.h"
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

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::Safety::ReportArea, ::std::string> const& ReportAreaEnumMap();

MCNAPI ::std::unordered_map<::Safety::ReportReason, ::std::string> const& ReportReasonEnumMap();
#endif
// NOLINTEND

} // namespace Safety
