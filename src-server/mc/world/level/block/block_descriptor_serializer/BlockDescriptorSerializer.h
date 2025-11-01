#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BlockDescriptor;
namespace BlockDescriptorSerializer { struct BlockDescriptorProxy; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace BlockDescriptorSerializer {
// functions
// NOLINTBEGIN
MCAPI ::BlockDescriptor _validateAndCreateFromString(::std::string const& str);

MCAPI void fromProxy(::BlockDescriptor& instance, ::BlockDescriptorSerializer::BlockDescriptorProxy& proxy);

MCAPI void fromProxyWithAssetValidation(::BlockDescriptor& instance, ::BlockDescriptorSerializer::BlockDescriptorProxy& proxy, ::BedrockLoadContext context, ::cereal::SerializerContext const& serializerContext);

MCAPI void fromStringWithAssetValidation(::BlockDescriptor& instance, ::std::string const& str, ::BedrockLoadContext context, ::cereal::SerializerContext const& serializerContext);

MCAPI ::BlockDescriptorSerializer::BlockDescriptorProxy toProxy(::BlockDescriptor const& instance);
// NOLINTEND

}
