#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { struct BiomeConfigIdentifierMappings; }
namespace Editor::Network { struct BlockColorInfo; }
namespace Editor::Network { struct PlayerMarkerInfo; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {
// functions
// NOLINTBEGIN
MCNAPI void bindClipboardPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindEditorRealmPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindNativeBrushServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPersistenceServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindPrefabDBPayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindRestartServicePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI void bindStructureDataCachePayloadTypes(::cereal::ReflectionCtx& ctx);

MCNAPI bool operator==(
    ::Editor::Network::BiomeConfigIdentifierMappings const& __P0,
    ::Editor::Network::BiomeConfigIdentifierMappings const& __P1
);

MCNAPI bool operator==(::Editor::Network::BlockColorInfo const& __P0, ::Editor::Network::BlockColorInfo const& __P1);

MCNAPI bool
operator==(::Editor::Network::PlayerMarkerInfo const& __P0, ::Editor::Network::PlayerMarkerInfo const& __P1);
// NOLINTEND

} // namespace Editor::Network
