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
add(class HashedString const& blockId,
    std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
        dropStrategy);

MCAPI void dropExperience(class HashedString const& blockId);

MCAPI void dropNothing(class HashedString const& blockId);

MCAPI void dropOther(
    class HashedString const&                                                                    blockId,
    class HashedString const&                                                                    itemId,
    std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
);

MCAPI void dropOtherNoExplosionDecay(
    class HashedString const&                                                                    blockId,
    class HashedString const&                                                                    itemId,
    std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
);

MCAPI void dropOtherWhenSilkTouch(class HashedString const& blockId, class HashedString const& itemId);

MCAPI void dropSelf(
    class HashedString const&                                                                    blockId,
    std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
);

MCAPI void dropSelf(
    class HashedString const&                                                                    blockId,
    std::vector<class BlockState const*>                                                         statesToKeep,
    std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
);

MCAPI void dropSelfNoExplosionDecay(
    class HashedString const&                                                                    blockId,
    std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
);

MCAPI void dropSelfNoExplosionDecay(
    class HashedString const&                                                                    blockId,
    std::vector<class BlockState const*>                                                         statesToKeep,
    std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
);

MCAPI void dropWhenSilkTouch(class HashedString const& blockId, std::vector<class BlockState const*> statesToKeep);
// NOLINTEND

}; // namespace VanillaBlockDrops::Registration
