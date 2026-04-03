#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
class IRandom;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Condition {
// functions
// NOLINTBEGIN
MCAPI ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> either(
    ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> condition1,
    ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)> condition2
);

MCAPI ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>
fortuneBonusRandomChanceOneIn(::std::vector<int> possibilities);

MCAPI ::std::function<bool(::Block const&, ::IRandom&, ::ResourceDropsContext const&)>
toolMatches(::HashedString const& itemId);
// NOLINTEND

} // namespace VanillaBlockDrops::Condition
