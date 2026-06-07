#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { struct BiomeConfigIdentifierMappings; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {
// functions
// NOLINTBEGIN
MCNAPI void bindClipboardPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindDataTransferPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindEditorMinimapPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindEditorRealmPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindInputPayloads(::cereal::ReflectionCtx& ctx);

MCNAPI void bindNativeBrushServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPersistenceServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPlayerStatePayloadsTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPrefabDBPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindReplicationPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindRestartServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindSelectionPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindStructureDataCachePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindStructurePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindThumbnailCachePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI bool operator==(
    ::Editor::Network::BiomeConfigIdentifierMappings const&,
    ::Editor::Network::BiomeConfigIdentifierMappings const&
);
// NOLINTEND

} // namespace Editor::Network
