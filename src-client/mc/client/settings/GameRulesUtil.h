#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::GameRulesUtil {
// functions
// NOLINTBEGIN
MCAPI bool canModifyCheats(::Settings::RegistryBuilder::IBuilderContext& context);

MCAPI bool canModifyWorldProperties(::Settings::RegistryBuilder::IBuilderContext& context);
// NOLINTEND

} // namespace Settings::GameRulesUtil
