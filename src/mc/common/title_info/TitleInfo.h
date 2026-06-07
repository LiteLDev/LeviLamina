#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/title_info/TitleId.h"

namespace TitleInfo {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& getCurrentTitleTag();
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& BedrockVanillaTag();

#ifdef LL_PLAT_C
MCNAPI ::TitleInfo::TitleId const& CurrentTitleId();
#endif
// NOLINTEND

} // namespace TitleInfo
