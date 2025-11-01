#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Randomize;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Modifier {
// functions
// NOLINTBEGIN
MCAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> applyExplosionDecay(::std::function<::ResourceDrops (::Block const &, ::Randomize &, ::ResourceDropsContext const &)> dropStrategy);

MCAPI ::std::function<::ResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> applyNameTagFromBlockActor(::std::function<::ResourceDrops (::Block const &, ::Randomize &, ::ResourceDropsContext const &)> dropStrategy);
// NOLINTEND

}
