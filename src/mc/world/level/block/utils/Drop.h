#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class HashedString;
class Randomize;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Drop {
// NOLINTBEGIN
// symbol:
// ?customWhenSilkTouch@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V34@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      customWhenSilkTouch(std::function<
                          struct
                          ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?customWhenSilkTouchOrToolOtherwise@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@V34@1@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
customWhenSilkTouchOrToolOtherwise(class HashedString const&, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?customWhenSilkTouchOtherwise@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V34@0@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
    customWhenSilkTouchOtherwise(std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?customWhenTool@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@V34@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
customWhenTool(class HashedString const&, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?customWhenToolOtherwise@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@V34@1@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
customWhenToolOtherwise(class HashedString const&, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?item@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@4@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
item(class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?nothing@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@XZ
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      nothing();

// symbol:
// ?self@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@4@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      self(std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?self@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@4@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@4@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
    self(std::vector<class BlockState const*>, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?selfWhenSilkTouchOrTool@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@4@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      selfWhenSilkTouchOrTool(class HashedString const&, std::vector<class BlockState const*>);

// symbol:
// ?selfWhenSilkTouchOrToolOtherwise@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@AEBVHashedString@@V34@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
selfWhenSilkTouchOrToolOtherwise(class HashedString const&, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?selfWhenSilkTouchOtherwise@Drop@VanillaBlockDrops@@YA?AV?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V34@@Z
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      selfWhenSilkTouchOtherwise(std::function<
                                 struct
                                 ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);
// NOLINTEND

}; // namespace VanillaBlockDrops::Drop
