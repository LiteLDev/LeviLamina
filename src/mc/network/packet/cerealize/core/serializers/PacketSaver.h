#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"
#include "mc/network/packet/cerealize/core/serializers/PacketSchemaWriter.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PacketSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::PacketSchemaWriter> mWriter;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketSaver();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketSaver(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
