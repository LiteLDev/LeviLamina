#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {
// NOLINTBEGIN
// symbol:
// ?addUniformLootBonus@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@V23@H@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
addUniformLootBonus(std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, int);

// symbol:
// ?between@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@HH@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> between(int, int);

// symbol: ?configureBlockDrops@VanillaBlockDrops@@YAXAEBVBaseGameVersion@@AEBVExperiments@@@Z
MCAPI void configureBlockDrops(class BaseGameVersion const&, class Experiments const&);

// symbol:
// ?doublePlantDrop@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops doublePlantDrop(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol:
// ?doublePlantNonShearsDrop@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops
doublePlantNonShearsDrop(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol: ?dropExperience@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops dropExperience(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol: ?dropLeaves@VanillaBlockDrops@@YA@AEBVHashedString@@0@Z
MCAPI auto dropLeaves(class HashedString const&, class HashedString const&);

// symbol: ?dropNothing@VanillaBlockDrops@@YAXAEBVHashedString@@@Z
MCAPI void dropNothing(class HashedString const& blockId);

// symbol:
// ?dropOre@VanillaBlockDrops@@YAXAEBVHashedString@@0AEBV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropOre(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> const&);

// symbol:
// ?dropOther@VanillaBlockDrops@@YAXAEBVHashedString@@0AEBV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropOther(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> const&);

// symbol:
// ?dropOtherNoExplosionDecay@VanillaBlockDrops@@YAXAEBVHashedString@@0AEBV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropOtherNoExplosionDecay(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> const&);

// symbol:
// ?dropSelf@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropSelf(class HashedString const&, std::vector<class BlockState const*>);

// symbol:
// ?dropSelfNoExplosionDecay@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropSelfNoExplosionDecay(class HashedString const&, std::vector<class BlockState const*>);

// symbol:
// ?dropSelfOnlyWhenSilkTouched@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropSelfOnlyWhenSilkTouched(class HashedString const&, std::vector<class BlockState const*>);

// symbol:
// ?dropSelfWithSilkTouchOrOther@VanillaBlockDrops@@YAXAEBVHashedString@@0AEBV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropSelfWithSilkTouchOrOther(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> const&);

// symbol:
// ?dropSelfWithSilkTouchOrOtherNoExplosionDecay@VanillaBlockDrops@@YAXAEBVHashedString@@0AEBV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@@Z
MCAPI void
dropSelfWithSilkTouchOrOtherNoExplosionDecay(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> const&);

// symbol: ?empty@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops empty(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol:
// ?exactly@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@H@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> exactly(int);

// symbol:
// ?infestedBlockDrops@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops infestedBlockDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol: ?isSilkTouch@VanillaBlockDrops@@YA_NAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI bool isSilkTouch(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol:
// ?limitCount@VanillaBlockDrops@@YA?AV?$function@$$A6AHAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z@std@@HV23@@Z
MCAPI std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      limitCount(int, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);
// NOLINTEND

}; // namespace VanillaBlockDrops
