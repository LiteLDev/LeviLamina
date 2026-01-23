#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Prefabs { class PrefabDBPrefabInstance; }
namespace Editor::Prefabs { struct PrefabDBInstanceInteractionEvent; }
// clang-format on

namespace Editor::Prefabs {

class ServerPrefabPlayerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerPrefabPlayerServiceProvider() = default;

    virtual void shouldCaptureMouseClicks(bool const) = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToPlayerInstanceInteractions(
        ::std::function<void(::Editor::Prefabs::PrefabDBInstanceInteractionEvent const&)>
    ) = 0;

    virtual void selectInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>, bool) = 0;

    virtual void deselectInstance(::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance>) = 0;

    virtual void clearSelectedInstances() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Prefabs
