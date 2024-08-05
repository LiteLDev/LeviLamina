#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerNameValidator {
// NOLINTBEGIN
MCAPI std::optional<std::string> validatePlayerName(std::string const& originalName, class GameplayUserManager const&);
// NOLINTEND

}; // namespace PlayerNameValidator
