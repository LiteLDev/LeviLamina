#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::CerealHelpers {
// functions
// NOLINTBEGIN
MCAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCAPI void bindNetworPayloadTypes(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace Editor::CerealHelpers
