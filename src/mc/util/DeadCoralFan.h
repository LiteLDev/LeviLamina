#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::DeadCoralFan {
// NOLINTBEGIN
// symbol: ?get@DeadCoralFan@FlatteningUtils@@YA?AUInstance@2@XZ
MCAPI struct FlatteningUtils::Instance get();

// symbol: ?getBlockComplexAliasCallback@DeadCoralFan@FlatteningUtils@@YA?AV?$function@$$A6APEBVBlock@@H@Z@std@@XZ
MCAPI std::function<class Block const*(int)> getBlockComplexAliasCallback();
// NOLINTEND

}; // namespace FlatteningUtils::DeadCoralFan
