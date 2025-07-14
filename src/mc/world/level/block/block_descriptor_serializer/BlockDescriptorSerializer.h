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
MCNAPI ::BlockDescriptor _validateAndCreateFromString(::std::string const& str);

MCNAPI void fromProxy(::BlockDescriptor& instance, ::BlockDescriptorSerializer::BlockDescriptorProxy& proxy);

MCNAPI void fromProxyWithAssetValidation(
    ::BlockDescriptor&                                 instance,
    ::BlockDescriptorSerializer::BlockDescriptorProxy& proxy,
    ::BedrockLoadContext                               context,
    ::cereal::SerializerContext const&                 serializerContext
);

MCNAPI void fromString(::BlockDescriptor& instance, ::std::string const& str);

MCNAPI void fromStringWithAssetValidation(
    ::BlockDescriptor&                 instance,
    ::std::string const&               str,
    ::BedrockLoadContext               context,
    ::cereal::SerializerContext const& serializerContext
);

MCNAPI ::BlockDescriptorSerializer::BlockDescriptorProxy toProxy(::BlockDescriptor const& instance);
// NOLINTEND

} // namespace BlockDescriptorSerializer
