#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace BlockDescriptorSerializer { struct BlockDescriptorProxy; }
namespace BlockDescriptorSerializer { struct StatesProxy; }
namespace Puv::v1_20_50::BlockDescriptor { struct Compound; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockDescriptorSerializer {
// NOLINTBEGIN
// symbol:
// ?_validateAndCreateFromString@BlockDescriptorSerializer@@YA?AVBlockDescriptor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class BlockDescriptor _validateAndCreateFromString(std::string const&);

// symbol: ?fromProxy@BlockDescriptorSerializer@@YAXAEAVBlockDescriptor@@AEAUBlockDescriptorProxy@1@@Z
MCAPI void fromProxy(class BlockDescriptor&, struct BlockDescriptorSerializer::BlockDescriptorProxy&);

// symbol:
// ?fromString@BlockDescriptorSerializer@@YAXAEAVBlockDescriptor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void fromString(class BlockDescriptor&, std::string const&);

// symbol: ?toProxy@BlockDescriptorSerializer@@YA?AUBlockDescriptorProxy@1@AEBVBlockDescriptor@@@Z
MCAPI struct BlockDescriptorSerializer::BlockDescriptorProxy toProxy(class BlockDescriptor const&);
// NOLINTEND

}; // namespace BlockDescriptorSerializer
