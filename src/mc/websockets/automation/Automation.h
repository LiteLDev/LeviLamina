#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Automation {
// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& EncryptionSubprotocol();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::string const& EncryptionSubprotocol();
#endif
// NOLINTEND

} // namespace Automation
