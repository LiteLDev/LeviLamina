#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Randomize;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Condition {
// functions
// NOLINTBEGIN
MCAPI ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> either(
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> condition1,
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> condition2
);
// NOLINTEND

} // namespace VanillaBlockDrops::Condition
