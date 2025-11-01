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
// functions
// NOLINTBEGIN
MCAPI void add(::HashedString const& blockId, ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy);

MCAPI void dropExperience(::HashedString const& blockId);

MCAPI void dropNothing(::HashedString const& blockId);

MCAPI void dropOther(::HashedString const& blockId, ::HashedString const& itemId, ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCAPI void dropOtherNoExplosionDecay(::HashedString const& blockId, ::HashedString const& itemId, ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCAPI void dropOtherWhenSilkTouch(::HashedString const& blockId, ::HashedString const& itemId);

MCAPI void dropSelf(::HashedString const& blockId, ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCAPI void dropSelfNoExplosionDecay(::HashedString const& blockId, ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCAPI void dropWhenSilkTouch(::HashedString const& blockId, ::std::vector<::BlockState const*> statesToKeep);
// NOLINTEND

}
