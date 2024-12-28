#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
namespace SpawnCategory { struct Config; }
// clang-format on

namespace SpawnCategory {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::SpawnCategory::Type> tryParse(::std::string_view spawnCategory);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::array<::SpawnCategory::Config const, 8> const& CONFIG();
// NOLINTEND

} // namespace SpawnCategory
