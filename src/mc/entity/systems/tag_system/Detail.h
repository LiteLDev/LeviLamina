#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"

// auto generated forward declare list
// clang-format off
class Level;
struct LevelTagIDType;
struct LevelTagSetIDType;
// clang-format on

namespace TagSystem::Detail {
// functions
// NOLINTBEGIN
MCAPI void _decrementTagCache(::std::string const& tag, ::Level& level);

MCAPI ::TagRegistry<::IDType<::LevelTagIDType>, ::IDType<::LevelTagSetIDType>>& _getLevelTagRegistry(::Level& level);

MCAPI void _incrementTagCache(::std::string const& tag, ::Level& level);
// NOLINTEND

} // namespace TagSystem::Detail
