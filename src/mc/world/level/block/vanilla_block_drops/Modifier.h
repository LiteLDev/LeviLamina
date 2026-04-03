#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Modifier {
// functions
// NOLINTBEGIN
MCAPI ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> applyExplosionDecay(
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> dropStrategy
);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>
applyNameTagFromBlockActor(
    ::std::function<::ResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> dropStrategy
);
// NOLINTEND

} // namespace VanillaBlockDrops::Modifier
