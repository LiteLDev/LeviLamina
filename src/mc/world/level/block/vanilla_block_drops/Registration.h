#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class HashedString;
class IRandom;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Registration {
// functions
// NOLINTBEGIN
MCAPI void
add(::HashedString const&                                                                       blockId,
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> dropStrategy);

MCAPI void dropOther(
    ::HashedString const&                                                           blockId,
    ::HashedString const&                                                           itemId,
    ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> countProvider
);

MCAPI void dropSelf(
    ::HashedString const&                                                           blockId,
    ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> countProvider
);

MCAPI void dropWhenSilkTouch(::HashedString const& blockId, ::std::vector<::BlockState const*> statesToKeep);
// NOLINTEND

} // namespace VanillaBlockDrops::Registration
