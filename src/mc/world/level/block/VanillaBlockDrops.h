#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class Experiments;
class IRandom;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops {
// functions
// NOLINTBEGIN
MCAPI ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>
addUniformFortuneBonus(::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> countProvider);

MCAPI ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>
between(int minInclusive, int maxInclusive);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> combine(
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> dropStrategyA,
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> dropStrategyB
);

MCAPI void configureBlockDrops(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

MCAPI ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> exactly(int value);

MCAPI ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>
limitCount(int max, ::std::function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> countProvider);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> when(
    ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>            condition,
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> trueStrategy
);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> when(
    ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>            condition,
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> trueStrategy,
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> falseStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops
