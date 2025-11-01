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
MCAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
addUniformFortuneBonus(::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
between(int minInclusive, int maxInclusive);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> combine(
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategyA,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> dropStrategyB
);

MCAPI void configureBlockDrops(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

MCAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> exactly(int value);

MCAPI ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
limitCount(int max, ::std::function<int(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> countProvider);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> when(
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>            condition,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> trueStrategy
);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> when(
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>            condition,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> trueStrategy,
    ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> falseStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops
