#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class HotbarCollectionBase; }
namespace Editor { struct EditorHotbarCollectionEventActiveHotbarChanged; }
namespace Editor { struct EditorHotbarCollectionEventElementUpdated; }
namespace Editor { struct EditorHotbarCollectionEventHotbarDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarElementDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarRemoved; }
namespace Editor { struct EditorHotbarCollectionEventHotbarUpdated; }
namespace Editor { struct EditorHotbarCollectionEventSelectedIndexChanged; }
namespace Editor { struct HotbarCollectionSnapshot; }
// clang-format on

namespace Editor::Services {

class EditorHotbarCollectionServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorHotbarCollectionServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> addOrReplaceCollection(::Editor::HotbarCollectionSnapshot const&) = 0;

    virtual ::Scripting::Result_deprecated<void> removeCollection(::HashedString const&) = 0;

    virtual ::Scripting::Result_deprecated<void> setActiveCollection(::HashedString const&) = 0;

    virtual bool hasCollectionWithId(::HashedString const&) const = 0;

    virtual ::WeakRef<::Editor::HotbarCollectionBase> getCollection(::HashedString const&) const = 0;

    virtual ::std::vector<::HashedString> getAllCollectionIds() const = 0;

    virtual ::WeakRef<::Editor::HotbarCollectionBase> getActiveCollection() const = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> registerHotbarCollectionEventListener(
        ::HashedString const&,
        ::std::function<void(::std::variant<
                             ::Editor::EditorHotbarCollectionEventActiveHotbarChanged,
                             ::Editor::EditorHotbarCollectionEventHotbarUpdated,
                             ::Editor::EditorHotbarCollectionEventHotbarRemoved,
                             ::Editor::EditorHotbarCollectionEventHotbarDisplayNameChanged,
                             ::Editor::EditorHotbarCollectionEventHotbarElementDisplayNameChanged,
                             ::Editor::EditorHotbarCollectionEventElementUpdated,
                             ::Editor::EditorHotbarCollectionEventSelectedIndexChanged> const&)>
    ) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
