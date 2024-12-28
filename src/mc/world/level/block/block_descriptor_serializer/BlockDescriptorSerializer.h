#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
namespace BlockDescriptorSerializer { struct BlockDescriptorProxy; }
// clang-format on

namespace BlockDescriptorSerializer {
// functions
// NOLINTBEGIN
MCAPI ::BlockDescriptor _validateAndCreateFromString(::std::string const& str);

MCAPI void fromProxy(::BlockDescriptor& instance, ::BlockDescriptorSerializer::BlockDescriptorProxy& proxy);

MCAPI ::BlockDescriptorSerializer::BlockDescriptorProxy toProxy(::BlockDescriptor const& instance);
// NOLINTEND

} // namespace BlockDescriptorSerializer
