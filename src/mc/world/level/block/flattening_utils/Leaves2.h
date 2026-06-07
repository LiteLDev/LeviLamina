#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
struct ItemRegistryComplexAlias;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Leaves2 {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::function<::Block const*(int)> getComplexAliasCallback();

MCAPI ::ItemRegistryComplexAlias getItemComplexAliasCallback();
// NOLINTEND

} // namespace FlatteningUtils::Leaves2
