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
    // vIndex: 0
    virtual ~PrefabDBServerPlayerServiceProvider() = default;

    // vIndex: 1
    virtual ::std::vector<::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>>
    getInstancesInChunk(::DimensionType const&, ::ChunkPos const&) const = 0;

    // vIndex: 2
    virtual ::std::optional<::Editor::Prefabs::VisiblePrefabInstance>
        fetchVisibleInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance const>) const = 0;

    // vIndex: 4
    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const&) const = 0;

    // vIndex: 3
    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Prefabs
