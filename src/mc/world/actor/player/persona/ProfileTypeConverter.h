#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

struct ProfileTypeConverter {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::persona::ProfileType getProfileTypeFromString(::std::string const& profileTypeStr);

    MCNAPI_S static ::std::string_view
    getStringFromProfileType(::persona::ProfileType typeToGetStringFor, bool nonLegacyStrDesired);
    // NOLINTEND
};

} // namespace persona
