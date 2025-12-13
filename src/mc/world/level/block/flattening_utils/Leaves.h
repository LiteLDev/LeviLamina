#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Leaves {
// functions
// NOLINTBEGIN
MCNAPI ::FlatteningUtils::Instance get();

MCNAPI ::std::function<::Block const*(int)> getComplexAliasCallback();
// NOLINTEND

} // namespace FlatteningUtils::Leaves
