#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DateHelper {
// functions
// NOLINTBEGIN
MCNAPI ::std::string getTimestampFileName(int64 const& timestamp);

MCNAPI ::std::string removeSeconds(::std::string const& timeStr);
// NOLINTEND

}
