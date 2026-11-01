#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

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
MCNAPI ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
combine(
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        dropStrategyA,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        dropStrategyB
);

MCNAPI void configureBlockDrops(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

MCNAPI ::brstd::move_only_function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> limitCount(
    int                                                                                               max,
    ::brstd::move_only_function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> countProvider
);

MCNAPI ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
when(
    ::brstd::move_only_function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> condition,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        trueStrategy
);

MCNAPI ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
when(
    ::brstd::move_only_function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> condition,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        trueStrategy,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        falseStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops
