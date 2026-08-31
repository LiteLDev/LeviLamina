#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
// clang-format on

namespace SyncedClientOptionUtilities {
// functions
// NOLINTBEGIN
MCNAPI void SyncComponentWithJson(::SyncedClientOptionsComponent& component, ::Json::Value const& root);

#ifdef LL_PLAT_C
MCNAPI void
WriteComponentToJSON(::SyncedClientOptionsComponent const& component, ::Json::Value& root, bool includeUIProfile);
#endif
// NOLINTEND

} // namespace SyncedClientOptionUtilities
