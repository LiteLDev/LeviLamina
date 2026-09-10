#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockDefinitionGroup;
class Experiments;
class IRandom;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops {
// functions
// NOLINTBEGIN
MCAPI ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
combine(
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        dropStrategyA,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        dropStrategyB
);

MCAPI void configureBlockDrops(
    ::BaseGameVersion const& baseGameVersion,
    ::Experiments const&     experiments,
    ::BlockDefinitionGroup*  blockDefinitionGroup
);

MCAPI ::brstd::move_only_function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> limitCount(
    int                                                                                               max,
    ::brstd::move_only_function<int(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> countProvider
);

MCAPI ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
when(
    ::brstd::move_only_function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> condition,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        trueStrategy
);

MCAPI ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
when(
    ::brstd::move_only_function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const> condition,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        trueStrategy,
    ::brstd::move_only_function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const>
        falseStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops
