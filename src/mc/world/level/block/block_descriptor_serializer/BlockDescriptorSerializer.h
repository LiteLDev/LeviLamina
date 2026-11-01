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
MCNAPI ::BlockDescriptor _validateAndCreateFromString(::std::string const& str);

MCNAPI void fromProxy(::BlockDescriptor& instance, ::BlockDescriptorSerializer::BlockDescriptorProxy& proxy);
// NOLINTEND

} // namespace BlockDescriptorSerializer
