#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Randomize;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Modifier {
// NOLINTBEGIN
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      applyExplosionDecay(std::function<
                          struct
                          ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      applyNameTagFromBlockActor(std::function<
                                 struct
                                 ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);
// NOLINTEND

}; // namespace VanillaBlockDrops::Modifier
