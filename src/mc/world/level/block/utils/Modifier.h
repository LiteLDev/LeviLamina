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
// symbol:
// ?applyExplosionDecay@Modifier@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V34@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      applyExplosionDecay(std::function<
                          struct
                          ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?applyNameTagFromBlockActor@Modifier@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V34@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      applyNameTagFromBlockActor(std::function<
                                 struct
                                 ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);
// NOLINTEND

}; // namespace VanillaBlockDrops::Modifier
