#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DefaultPlayerNameValidator {
// NOLINTBEGIN
MCAPI std::optional<std::string> validatePlayerName(std::string const& originalName, class GameplayUserManager const&);
// NOLINTEND

}; // namespace DefaultPlayerNameValidator
