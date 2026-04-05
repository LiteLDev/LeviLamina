#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

struct ProfileTypeConverter {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::persona::ProfileType getProfileTypeFromString(::std::string const& profileTypeStr);
#endif

#ifdef LL_PLAT_S
    MCAPI static ::std::string_view
    getStringFromProfileType(::persona::ProfileType typeToGetStringFor, bool nonLegacyStrDesired);
#endif
    // NOLINTEND
};

} // namespace persona
