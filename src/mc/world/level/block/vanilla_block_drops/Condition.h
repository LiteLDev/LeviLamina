#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
class Randomize;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Condition {
// NOLINTBEGIN
MCAPI std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      fortuneBonusRandomChanceOneIn(std::vector<int> possibilities);

MCAPI std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      toolMatches(class HashedString const& itemId);
// NOLINTEND

}; // namespace VanillaBlockDrops::Condition
