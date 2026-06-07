#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct GameRuleId;
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings::GameRulesUtil {
// functions
// NOLINTBEGIN
MCAPI bool canModifyCheats(::Settings::RegistryBuilder::IBuilderContext& context);

MCAPI bool canModifyWorldProperties(::Settings::RegistryBuilder::IBuilderContext& context);

MCAPI void updateBoolGameRule(
    ::Settings::RegistryBuilder::IBuilderContext& context,
    bool                                          value,
    ::GameRuleId                                  gameRuleId,
    bool                                          suppressOutput
);

MCAPI void updateIntGameRule(
    ::Settings::RegistryBuilder::IBuilderContext& context,
    int                                           value,
    ::GameRuleId                                  gameRuleId,
    bool                                          suppressOutput
);
// NOLINTEND

} // namespace Settings::GameRulesUtil
