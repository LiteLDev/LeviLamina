#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/EditorHotbarCollectionServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class HotbarCollectionBase; }
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
namespace Editor::Network { class HotbarCollectionActiveCollectionChangedPayload; }
namespace Editor::Network { class HotbarCollectionChangedPayload; }
namespace Editor::Network { class HotbarCollectionRemovedPayload; }
// clang-format on

namespace Editor::Services {

class EditorHotbarCollectionService : public ::Editor::Services::IEditorService,
                                      public ::Editor::Services::EditorHotbarCollectionServiceProvider,
                                      public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk61d2a3;
    ::ll::UntypedStorage<8, 16> mUnk602278;
    ::ll::UntypedStorage<8, 16> mUnk47be0d;
    ::ll::UntypedStorage<8, 24> mUnk81e116;
    ::ll::UntypedStorage<8, 48> mUnk2d209e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorHotbarCollectionService& operator=(EditorHotbarCollectionService const&);
    EditorHotbarCollectionService(EditorHotbarCollectionService const&);
    EditorHotbarCollectionService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorHotbarCollectionService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual bool hasCollectionWithId(::HashedString const&) const /*override*/;

    virtual ::WeakRef<::Editor::HotbarCollectionBase> getCollection(::HashedString const&) const /*override*/;

    virtual ::std::vector<::HashedString> getAllCollectionIds() const /*override*/;

    virtual ::WeakRef<::Editor::HotbarCollectionBase> getActiveCollection() const /*override*/;

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
    ) /*override*/;

    virtual bool isServerSide() const = 0;

    virtual void _handleHotbarCollectionChangedPayload(::Editor::Network::HotbarCollectionChangedPayload const&) = 0;

    virtual void _handleHotbarCollectionRemovedPayload(::Editor::Network::HotbarCollectionRemovedPayload const&) = 0;

    virtual void _handleHotbarCollectionActiveCollectionChangedPayload(
        ::Editor::Network::HotbarCollectionActiveCollectionChangedPayload const&
    ) = 0;

    virtual void _handleHotbarCollectionServiceEvent(
        ::std::variant<
            ::Editor::EditorHotbarCollectionEventActiveCollectionChanged,
            ::Editor::EditorHotbarCollectionEventCollectionUpdated,
            ::Editor::EditorHotbarCollectionEventCollectionRemoved> const&
    ) = 0;

    virtual void _handleHotbarCollectionEvent(
        ::std::variant<
            ::Editor::EditorHotbarCollectionEventActiveHotbarChanged,
            ::Editor::EditorHotbarCollectionEventHotbarUpdated,
            ::Editor::EditorHotbarCollectionEventHotbarRemoved,
            ::Editor::EditorHotbarCollectionEventHotbarDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventHotbarElementDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventElementUpdated,
            ::Editor::EditorHotbarCollectionEventSelectedIndexChanged> const&
    ) = 0;
    // NOLINTEND
};

} // namespace Editor::Services
