#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
class Randomize;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Condition {
// functions
// NOLINTBEGIN
MCNAPI ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> either(
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> condition1,
    ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)> condition2
);

MCNAPI ::std::function<bool(::Block const&, ::Randomize&, ::ResourceDropsContext const&)>
toolMatches(::HashedString const& itemId);
// NOLINTEND

} // namespace VanillaBlockDrops::Condition
