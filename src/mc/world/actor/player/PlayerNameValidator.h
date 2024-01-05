#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerNameValidator {
// NOLINTBEGIN
// symbol:
// ?validatePlayerName@PlayerNameValidator@@YA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVGameplayUserManager@@@Z
MCAPI std::optional<std::string> validatePlayerName(std::string const& originalName, class GameplayUserManager const&);
// NOLINTEND

}; // namespace PlayerNameValidator
