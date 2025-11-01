#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ControlScheme {
// functions
// NOLINTBEGIN
MCNAPI void bindControlSchemeType(::cereal::ReflectionCtx& ctx);

MCNAPI ::Bedrock::Result<::ControlScheme::Scheme> readControlScheme(::ReadOnlyBinaryStream& stream);
// NOLINTEND

}
