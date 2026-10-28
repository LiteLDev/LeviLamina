#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/EditorHotbarCollectionService.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { struct EditorHotbarCollectionEventActiveCollectionChanged; }
namespace Editor { struct EditorHotbarCollectionEventActiveHotbarChanged; }
namespace Editor { struct EditorHotbarCollectionEventCollectionRemoved; }
namespace Editor { struct EditorHotbarCollectionEventCollectionUpdated; }
namespace Editor { struct EditorHotbarCollectionEventElementUpdated; }
namespace Editor { struct EditorHotbarCollectionEventHotbarDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarElementDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarRemoved; }
namespace Editor { struct EditorHotbarCollectionEventHotbarUpdated; }
namespace Editor { struct EditorHotbarCollectionEventSelectedIndexChanged; }
namespace Editor { struct HotbarCollectionSnapshot; }
namespace Editor::Network { class HotbarCollectionActiveCollectionChangedPayload; }
namespace Editor::Network { class HotbarCollectionChangedPayload; }
namespace Editor::Network { class HotbarCollectionRemovedPayload; }
// clang-format on

namespace Editor::Services {

class ServerHotbarCollectionService : public ::Editor::Services::EditorHotbarCollectionService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk50cb90;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerHotbarCollectionService& operator=(ServerHotbarCollectionService const&);
    ServerHotbarCollectionService(ServerHotbarCollectionService const&);
    ServerHotbarCollectionService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerHotbarCollectionService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    addOrReplaceCollection(::Editor::HotbarCollectionSnapshot const&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> removeCollection(::HashedString const&) /*override*/;

    virtual ::Scripting::Result_deprecated<void> setActiveCollection(::HashedString const&) /*override*/;

    virtual bool isServerSide() const /*override*/;

    virtual void
    _handleHotbarCollectionChangedPayload(::Editor::Network::HotbarCollectionChangedPayload const&) /*override*/;

    virtual void
    _handleHotbarCollectionRemovedPayload(::Editor::Network::HotbarCollectionRemovedPayload const&) /*override*/;

    virtual void _handleHotbarCollectionActiveCollectionChangedPayload(
        ::Editor::Network::HotbarCollectionActiveCollectionChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionServiceEvent(
        ::std::variant<
            ::Editor::EditorHotbarCollectionEventActiveCollectionChanged,
            ::Editor::EditorHotbarCollectionEventCollectionUpdated,
            ::Editor::EditorHotbarCollectionEventCollectionRemoved> const&
    ) /*override*/;

    virtual void _handleHotbarCollectionEvent(
        ::std::variant<
            ::Editor::EditorHotbarCollectionEventActiveHotbarChanged,
            ::Editor::EditorHotbarCollectionEventHotbarUpdated,
            ::Editor::EditorHotbarCollectionEventHotbarRemoved,
            ::Editor::EditorHotbarCollectionEventHotbarDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventHotbarElementDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventElementUpdated,
            ::Editor::EditorHotbarCollectionEventSelectedIndexChanged> const&
    ) /*override*/;
    // NOLINTEND
};

} // namespace Editor::Services
