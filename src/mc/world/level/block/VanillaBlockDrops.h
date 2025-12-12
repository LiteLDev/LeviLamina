#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class Experiments;
class Randomize;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops {
// functions
// NOLINTBEGIN
MCNAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
addUniformFortuneBonus(::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCNAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
between(int minInclusive, int maxInclusive);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> combine(
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategyA,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategyB
);

MCNAPI void configureBlockDrops(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

MCNAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> exactly(int value);

MCNAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
limitCount(int max, ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> when(
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>            condition,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> trueStrategy
);

MCNAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> when(
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>            condition,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> trueStrategy,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> falseStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops
