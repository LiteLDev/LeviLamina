#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {
// NOLINTBEGIN
// symbol: ?between@VanillaBlockDrops@@YA?AUIntRange@@HH@Z
MCAPI struct IntRange between(int, int);

// symbol: ?configureBlockDrops@VanillaBlockDrops@@YAXAEBVBaseGameVersion@@AEBVExperiments@@@Z
MCAPI void configureBlockDrops(class BaseGameVersion const&, class Experiments const&);

// symbol: ?createDoublePlantDrop@VanillaBlockDrops@@YA@XZ
MCAPI auto createDoublePlantDrop();

// symbol:
// ?doublePlantDrop@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops doublePlantDrop(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol:
// ?doublePlantNonShearsDrop@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops
doublePlantNonShearsDrop(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol: ?dropExperience@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops dropExperience(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol: ?dropNothing@VanillaBlockDrops@@YAXAEBVHashedString@@@Z
MCAPI void dropNothing(class HashedString const& blockId);

// symbol: ?dropOre@VanillaBlockDrops@@YAXAEBVHashedString@@0UIntRange@@@Z
MCAPI void dropOre(class HashedString const&, class HashedString const&, struct IntRange);

// symbol: ?dropOther@VanillaBlockDrops@@YAXAEBVHashedString@@0UIntRange@@@Z
MCAPI void dropOther(class HashedString const&, class HashedString const&, struct IntRange);

// symbol: ?dropOtherNoExplosionDecay@VanillaBlockDrops@@YAXAEBVHashedString@@0UIntRange@@@Z
MCAPI void dropOtherNoExplosionDecay(class HashedString const&, class HashedString const&, struct IntRange);

// symbol:
// ?dropSelf@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropSelf(class HashedString const&, std::vector<class BlockState const*>);

// symbol:
// ?dropSelfNoExplosionDecay@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropSelfNoExplosionDecay(class HashedString const&, std::vector<class BlockState const*>);

// symbol:
// ?dropSelfOnlyWhenSilkTouched@VanillaBlockDrops@@YAXAEBVHashedString@@V?$vector@PEBVBlockState@@V?$allocator@PEBVBlockState@@@std@@@std@@@Z
MCAPI void dropSelfOnlyWhenSilkTouched(class HashedString const&, std::vector<class BlockState const*>);

// symbol: ?dropSelfWithSilkTouchOrOther@VanillaBlockDrops@@YAXAEBVHashedString@@0UIntRange@@@Z
MCAPI void dropSelfWithSilkTouchOrOther(class HashedString const&, class HashedString const&, struct IntRange);

// symbol: ?dropSelfWithSilkTouchOrOtherNoExplosionDecay@VanillaBlockDrops@@YAXAEBVHashedString@@0UIntRange@@@Z
MCAPI void
dropSelfWithSilkTouchOrOtherNoExplosionDecay(class HashedString const&, class HashedString const&, struct IntRange);

// symbol: ?empty@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops empty(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol:
// ?infestedBlockDrops@VanillaBlockDrops@@YA?AUResourceDrops@@AEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI struct ResourceDrops infestedBlockDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&);

// symbol: ?isSilkTouch@VanillaBlockDrops@@YA_NAEBVBlock@@AEAVRandomize@@AEBUResourceDropsContext@@@Z
MCAPI bool isSilkTouch(class Block const&, class Randomize&, struct ResourceDropsContext const&);
// NOLINTEND

}; // namespace VanillaBlockDrops
