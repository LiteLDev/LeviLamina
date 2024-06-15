#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {
// NOLINTBEGIN
// symbol:
// ?addUniformFortuneBonus@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V23@@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      addUniformFortuneBonus(std::function<
                             int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?between@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@HH@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> between(int, int);

// symbol:
// ?combine@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V23@0@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
    combine(std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol: ?configureBlockDrops@VanillaBlockDrops@@YAXAEBVBaseGameVersion@@AEBVExperiments@@@Z
MCAPI void configureBlockDrops(class BaseGameVersion const&, class Experiments const&);

// symbol:
// ?exactly@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@H@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> exactly(int);

// symbol:
// ?limitCount@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@HV23@@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      limitCount(int, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?when@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V?$function@$$A6A_NAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@3@V23@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
    when(std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?when@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V?$function@$$A6A_NAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@3@V23@1@Z
MCAPI
std::
    function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
        when(std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);
// NOLINTEND

}; // namespace VanillaBlockDrops
