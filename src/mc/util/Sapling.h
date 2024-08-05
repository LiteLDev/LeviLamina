#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Sapling {
// NOLINTBEGIN
MCAPI struct FlatteningUtils::Instance get();

MCAPI std::function<class Block const*(int)> getComplexAliasCallback();
// NOLINTEND

}; // namespace FlatteningUtils::Sapling
