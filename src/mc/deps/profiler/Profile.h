#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {
// functions
// NOLINTBEGIN
MCAPI void onFileOpenFailed(bool isReadOnly);

MCAPI void onFileOpenRequest(bool isReadOnly);

MCAPI void onFileOpenRetrySuccess(bool isReadOnly);
// NOLINTEND

} // namespace Core::Profile
