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
// symbol:
// ?fortuneBonusRandomChanceOneIn@Condition@VanillaBlockDrops@@YA?AV?$function@$$A6A_NAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V?$vector@HV?$allocator@H@std@@@4@@Z
MCAPI std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      fortuneBonusRandomChanceOneIn(std::vector<int>);

// symbol:
// ?toolMatches@Condition@VanillaBlockDrops@@YA?AV?$function@$$A6A_NAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@@Z
MCAPI std::function<bool(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      toolMatches(class HashedString const&);
// NOLINTEND

}; // namespace VanillaBlockDrops::Condition
