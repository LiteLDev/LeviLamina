#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BlockPos;
class BlockSource;
class BlockVolumeBase;
class ChunkPos;
class DimensionHeightRange;
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptBiomeFillUtilsInternal {
// functions
// NOLINTBEGIN
MCAPI ::nonstd::expected<void, ::Scripting::EngineError> _forEachPosition2d(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& scriptVolume,
    ::DimensionHeightRange                                                                      heightRange,
    ::brstd::function_ref<bool(::BlockPos const&)>                                              callback
);

MCAPI ::nonstd::expected<void, ::Scripting::EngineError> _forEachPosition2d(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> const& scriptVolume,
    ::DimensionHeightRange                                                                          heightRange,
    ::brstd::function_ref<bool(::BlockPos const&)>                                                  callback
);

MCAPI ::nonstd::expected<void, ::Scripting::EngineError> _forEachPosition3d(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& scriptVolume,
    ::DimensionHeightRange                                                                      heightRange,
    bool                                                                                        includeContained,
    bool                                                                                        includeAbove,
    bool                                                                                        includeBelow,
    ::brstd::function_ref<bool(::BlockPos const&)>                                              callback
);

MCAPI ::nonstd::expected<void, ::Scripting::EngineError> _forEachPosition3d(
    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume> const& scriptVolume,
    ::DimensionHeightRange                                                                          heightRange,
    bool                                                                                            includeContained,
    bool                                                                                            includeAbove,
    bool                                                                                            includeBelow,
    ::brstd::function_ref<bool(::BlockPos const&)>                                                  callback
);

MCAPI void fill2dSubChunks(
    ::BlockSource&                region,
    ::DimensionHeightRange const& heightRange,
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume,
    ::Biome const&                                                                                       biome,
    ::brstd::function_ref<bool(::Biome const&)> perBlockCallback
);

MCAPI void fill3dSubChunks(
    ::BlockSource&                region,
    ::DimensionHeightRange const& heightRange,
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume,
    ::Biome const&                                                                                       biome,
    bool                                        includeContainedPositions,
    bool                                        includePositionsAbove,
    bool                                        includePositionsBelow,
    ::brstd::function_ref<bool(::Biome const&)> perBlockCallback
);

MCAPI void forEachPosition2d(
    ::BlockVolumeBase const&                       volume,
    ::DimensionHeightRange                         heightRange,
    ::brstd::function_ref<bool(::BlockPos const&)> callback
);

MCAPI void forEachPosition3d(
    ::BlockVolumeBase const&                       volume,
    ::DimensionHeightRange                         heightRange,
    bool                                           includeContained,
    bool                                           includeAbove,
    bool                                           includeBelow,
    ::brstd::function_ref<bool(::BlockPos const&)> callback
);

MCAPI ::nonstd::expected<::std::set<::ChunkPos>, ::Scripting::EngineError> getBlockVolumeChunks(
    ::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume
);

MCAPI ::nonstd::
    expected<void, ::std::variant<::Scripting::EngineError, ::ScriptModuleMinecraft::ScriptUnloadedChunksError>>
    validateChunks(
        ::BlockSource& region,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& volume
    );
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptBiomeFillUtilsInternal
