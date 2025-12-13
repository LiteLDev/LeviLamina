#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::Prefabs { class VisiblePrefabInstance; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBServerPlayerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServerPlayerServiceProvider() = default;

    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::DimensionType const&, ::ChunkPos const&) const = 0;

    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance>
        fetchVisibleInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const>) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const&) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Prefabs
