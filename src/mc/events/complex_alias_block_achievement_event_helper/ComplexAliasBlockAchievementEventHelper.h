#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ComplexAliasBlockAchievementEventHelper { struct ComplexAliasBlockPreSplitBlockInfo; }
// clang-format on

namespace ComplexAliasBlockAchievementEventHelper {
// NOLINTBEGIN
MCAPI std::optional<
    std::reference_wrapper<struct ComplexAliasBlockAchievementEventHelper::ComplexAliasBlockPreSplitBlockInfo const>>
getPostComplexAliasBlockToPreSplitBlockInfo(std::string const& blockFullName);

MCAPI
std::unordered_map<std::string, struct ComplexAliasBlockAchievementEventHelper::ComplexAliasBlockPreSplitBlockInfo>
makePostComplexAliasBlockToPreSplitBlockMap();
// NOLINTEND

}; // namespace ComplexAliasBlockAchievementEventHelper
