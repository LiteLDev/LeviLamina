#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::CerealHelpers {
// functions
// NOLINTBEGIN
MCNAPI void bindColor(::cereal::ReflectionCtx& ctx);

MCNAPI void bindDimensionType(::cereal::ReflectionCtx& ctx);

MCNAPI void bindHelpers(::cereal::ReflectionCtx& ctx);

MCNAPI void bindNetworPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindThemePaletteType(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace Editor::CerealHelpers
