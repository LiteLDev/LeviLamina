#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {
// functions
// NOLINTBEGIN
MCNAPI void onFileOpenFailed(bool isReadOnly);

MCNAPI void onFileOpenRequest(bool isReadOnly);

MCNAPI void onFileOpenRetrySuccess(bool isReadOnly);
// NOLINTEND

} // namespace Core::Profile
