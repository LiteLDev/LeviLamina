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
MCNAPI void
add(::HashedString const&                                                                         blockId,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy);

MCNAPI void dropExperience(::HashedString const& blockId);

MCNAPI void dropNothing(::HashedString const& blockId);

MCNAPI void dropOther(
    ::HashedString const&                                                             blockId,
    ::HashedString const&                                                             itemId,
    ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider
);

MCNAPI void dropOtherNoExplosionDecay(
    ::HashedString const&                                                             blockId,
    ::HashedString const&                                                             itemId,
    ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider
);

MCNAPI void dropOtherWhenSilkTouch(::HashedString const& blockId, ::HashedString const& itemId);

MCNAPI void dropSelf(
    ::HashedString const&                                                             blockId,
    ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider
);

MCNAPI void dropSelfNoExplosionDecay(
    ::HashedString const&                                                             blockId,
    ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider
);

MCNAPI void dropWhenSilkTouch(::HashedString const& blockId, ::std::vector<::BlockState const*> statesToKeep);
// NOLINTEND

} // namespace VanillaBlockDrops::Registration
