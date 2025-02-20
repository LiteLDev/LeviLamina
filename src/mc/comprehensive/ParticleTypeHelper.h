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
MCAPI void bindParticleTypeEnumType(::cereal::ReflectionCtx& ctx);

MCAPI ::std::string particleNameFromType(::ParticleType type);

MCAPI ::ParticleType particleTypeFromName(::std::string_view name);

MCAPI ::ParticleType particleTypeFromNameOrContentWarn(::std::string_view name, ::LogArea logArea);
// NOLINTEND

} // namespace ParticleTypeHelper
