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
MCAPI void
add(class HashedString const&,
    std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void dropExperience(class HashedString const&);

MCAPI void dropNothing(class HashedString const&);

MCAPI void
dropOther(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void
dropOtherNoExplosionDecay(class HashedString const&, class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void dropOtherWhenSilkTouch(class HashedString const&, class HashedString const&);

MCAPI void
dropSelf(class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void
dropSelf(class HashedString const&, std::vector<class BlockState const*>, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void
dropSelfNoExplosionDecay(class HashedString const&, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void
dropSelfNoExplosionDecay(class HashedString const&, std::vector<class BlockState const*>, std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI void dropWhenSilkTouch(class HashedString const&, std::vector<class BlockState const*>);
// NOLINTEND

}; // namespace VanillaBlockDrops::Registration
