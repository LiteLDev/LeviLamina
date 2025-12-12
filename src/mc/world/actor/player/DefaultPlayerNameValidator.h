#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
// clang-format on

namespace DefaultPlayerNameValidator {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::std::string>
validatePlayerName(::std::string const& originalName, ::GameplayUserManager const& gameplayUserManager);
// NOLINTEND

} // namespace DefaultPlayerNameValidator
