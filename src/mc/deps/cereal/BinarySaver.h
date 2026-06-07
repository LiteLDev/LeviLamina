#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"
#include "mc/deps/cereal/BinarySchemaWriter.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

class BinarySaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::cereal::BinarySchemaWriter> mWriter;
    // NOLINTEND

public:
    // prevent constructor by default
    BinarySaver();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BinarySaver(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
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

} // namespace cereal
