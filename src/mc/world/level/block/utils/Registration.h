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

namespace VanillaBlockDrops::Registration {
// NOLINTBEGIN
// symbol:
// ?add@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@V?$function@$$A6A?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
add(class HashedString const&,
    std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol: ?dropExperience@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@@Z
MCAPI void dropExperience(class HashedString const&);

// symbol: ?dropNothing@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@@Z
MCAPI void dropNothing(class HashedString const&);

// symbol:
// ?dropOther@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@0V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropOther(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?dropOtherNoExplosionDecay@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@0V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropOtherNoExplosionDecay(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol: ?dropOtherWhenSilkTouch@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@0@Z
MCAPI void dropOtherWhenSilkTouch(class HashedString const&, class HashedString const&);

// symbol:
// ?dropSelf@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropSelf(class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?dropSelf@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@5@@Z
MCAPI void
dropSelf(class HashedString const&, std::vector<class BlockState const*>, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?dropSelfNoExplosionDecay@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropSelfNoExplosionDecay(class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?dropSelfNoExplosionDecay@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@V?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@5@@Z
MCAPI void
dropSelfNoExplosionDecay(class HashedString const&, std::vector<class BlockState const*>, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

// symbol:
// ?dropWhenSilkTouch@Registration@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropWhenSilkTouch(class HashedString const&, std::vector<class BlockState const*>);
// NOLINTEND

}; // namespace VanillaBlockDrops::Registration
