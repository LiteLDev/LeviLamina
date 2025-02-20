#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {
// functions
// NOLINTBEGIN
MCAPI void bindBlockPalettePayloadTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindCursorServicePayloads(::cereal::ReflectionCtx& ctx);

MCAPI void bindDataTransferPayloadTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindInputPayloads(::cereal::ReflectionCtx& ctx);

MCAPI void bindNativeBrushServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindPayloadTypes(::cereal::ReflectionCtx& ctx);

MCAPI void bindStructurePayloadTypes(::cereal::ReflectionCtx& ctx);
// NOLINTEND

} // namespace Editor::Network
