#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
struct SyncedClientOptionsComponent;
struct SyncedClientOptionsUpdate;
namespace Json { class Value; }
class IOptionsReader;
// clang-format on

namespace SyncedClientOptionUtilities {
// functions
// NOLINTBEGIN
MCNAPI void
ApplyUpdateToOptionsComponent(::SyncedClientOptionsComponent& component, ::SyncedClientOptionsUpdate const& update);

#ifdef LL_PLAT_C
MCNAPI void SyncComponentWithIOptions(
    ::SyncedClientOptionsComponent& component,
    ::BaseGameVersion const&        gameVersion,
    ::IOptionsReader const&         options
);
#endif

MCNAPI void SyncComponentWithJson(::SyncedClientOptionsComponent& component, ::Json::Value const& root);

#ifdef LL_PLAT_C
MCNAPI void
WriteComponentToJSON(::SyncedClientOptionsComponent const& component, ::Json::Value& root, bool includeUIProfile);
#endif
// NOLINTEND

} // namespace SyncedClientOptionUtilities
