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
// functions
// NOLINTBEGIN
MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
customWhenSilkTouch(
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
customWhenSilkTouchOrToolOtherwise(
    ::HashedString const&                                                                         toolItemId,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> otherDropStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
customWhenSilkTouchOtherwise(
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> otherDropStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> customWhenTool(
    ::HashedString const&                                                                         toolItemId,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
customWhenToolOtherwise(
    ::HashedString const&                                                                         toolItemId,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategy,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> otherDropStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> item(
    ::HashedString const&                                                             itemId,
    ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
self(::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> self(
    ::std::vector<::BlockState const*>                                                statesToKeep,
    ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
selfWhenSilkTouch(::std::vector<::BlockState const*> statesToKeep);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
selfWhenSilkTouchOrTool(::HashedString const& toolItemId, ::std::vector<::BlockState const*> statesToKeep);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
selfWhenSilkTouchOrToolOtherwise(
    ::HashedString const&                                                                         toolItemId,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> otherDropStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
selfWhenSilkTouchOtherwise(
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> otherDropStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops::Drop
