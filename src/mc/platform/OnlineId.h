#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/XUID.h"
#include "mc/platform/NsaId.h"
#include "mc/platform/PsnId.h"

namespace Social {

struct OnlineId : public ::std::variant<::Social::XUID, ::Social::PsnId, ::Social::NsaId> {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string toString() const;
#endif
    // NOLINTEND
};

} // namespace Social
