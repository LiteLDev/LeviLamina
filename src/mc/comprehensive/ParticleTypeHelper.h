#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/debug/log/LogArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ParticleTypeHelper {
// functions
// NOLINTBEGIN
MCNAPI void bindParticleTypeEnumType(::cereal::ReflectionCtx& ctx);

MCNAPI ::std::string particleNameFromType(::ParticleType type);

MCNAPI ::ParticleType particleTypeFromName(::std::string_view name);

MCNAPI ::ParticleType particleTypeFromNameOrContentWarn(::std::string_view name, ::LogArea logArea);
// NOLINTEND

} // namespace ParticleTypeHelper
