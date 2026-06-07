#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"
#include "mc/deps/cereal/BinarySchemaReader.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

class BinaryLoader : public ::cereal::BasicLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::cereal::BinarySchemaReader> mReader;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BinaryLoader(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
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

} // namespace cereal
