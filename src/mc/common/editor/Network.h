#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {
// functions
// NOLINTBEGIN
MCNAPI void bindEditorRealmPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindNativeBrushServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPersistenceServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPrefabDBPayloadTypes(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace Editor::Network
