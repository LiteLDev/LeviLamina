#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"
#include "mc/network/packet/cerealize/core/serializers/PacketSchemaReader.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PacketLoader : public ::cereal::BasicLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::PacketSchemaReader> mReader;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketLoader(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
