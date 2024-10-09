#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {
// NOLINTBEGIN
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      addUniformFortuneBonus(std::function<
                             int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      between(int minInclusive, int maxInclusive);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
    combine(std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void configureBlockDrops(class BaseGameVersion const& baseGameVersion, class Experiments const&);

MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> exactly(int value);

MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      limitCount(int, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      when(
          std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)> condition,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              trueStrategy
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      when(
          std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)> condition,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              trueStrategy,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              falseStrategy
      );
// NOLINTEND

}; // namespace VanillaBlockDrops
