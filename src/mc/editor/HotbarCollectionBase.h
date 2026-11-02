#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/editor/IHotbarCollection.h"
#include "mc/editor/IHotbarCollectionPayloadHandler.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class Hotbar; }
namespace Editor { struct EditorHotbarCollectionEventActiveHotbarChanged; }
namespace Editor { struct EditorHotbarCollectionEventElementUpdated; }
namespace Editor { struct EditorHotbarCollectionEventHotbarDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarElementDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarRemoved; }
namespace Editor { struct EditorHotbarCollectionEventHotbarUpdated; }
namespace Editor { struct EditorHotbarCollectionEventSelectedIndexChanged; }
namespace Editor::Network { class HotbarCollectionActiveHotbarChangedPayload; }
namespace Editor::Network { class HotbarCollectionElementChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarDisplayNameChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarElementDisplayNameChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarRemovedPayload; }
namespace Editor::Network { class HotbarCollectionSelectedIndexChangedPayload; }
namespace Editor::Network { class PayloadServiceProvider; }
// clang-format on

namespace Editor {

class HotbarCollectionBase : public ::Editor::IHotbarCollectionPayloadHandler,
                             public ::Editor::IHotbarCollection,
                             public ::EnableGetWeakRef<::Editor::HotbarCollectionBase> {
public:
    // HotbarCollectionBase inner types define
    enum class EmptyCollectionPolicy : int {
        Disallowed = 0,
        Allowed    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk24ca90;
    ::ll::UntypedStorage<1, 1>  mUnkb47da5;
    ::ll::UntypedStorage<8, 24> mUnka5a10a;
    ::ll::UntypedStorage<8, 48> mUnk5d82fb;
    ::ll::UntypedStorage<8, 8>  mUnk2ee248;
    ::ll::UntypedStorage<1, 1>  mUnka0cbc9;
    ::ll::UntypedStorage<4, 4>  mUnk17bc1d;
    ::ll::UntypedStorage<8, 48> mUnkeb795c;
    ::ll::UntypedStorage<8, 48> mUnk67ff92;
    ::ll::UntypedStorage<8, 16> mUnk3c1031;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionBase& operator=(HotbarCollectionBase const&);
    HotbarCollectionBase(HotbarCollectionBase const&);
    HotbarCollectionBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionBase() /*override*/ = default;

    virtual ::HashedString const& getRegistryId() const /*override*/;

    virtual bool isAllowed(::HashedString const&) const /*override*/;

    virtual void _tryDispatchEvent(
        ::std::variant<
            ::Editor::EditorHotbarCollectionEventActiveHotbarChanged,
            ::Editor::EditorHotbarCollectionEventHotbarUpdated,
            ::Editor::EditorHotbarCollectionEventHotbarRemoved,
            ::Editor::EditorHotbarCollectionEventHotbarDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventHotbarElementDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventElementUpdated,
            ::Editor::EditorHotbarCollectionEventSelectedIndexChanged> const&
    ) const /*override*/;

    virtual ::Editor::Network::PayloadServiceProvider* _getPayloadServiceProvider() const /*override*/;

    virtual bool _isServerSide() const /*override*/;

    virtual void _handleHotbarCollectionActiveHotbarChangedPayload(
        ::Editor::Network::HotbarCollectionActiveHotbarChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionSelectedIndexChangedPayload(
        ::Editor::Network::HotbarCollectionSelectedIndexChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionElementChangedPayload(
        ::Editor::Network::HotbarCollectionElementChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionHotbarChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionHotbarRemovedPayload(
        ::Editor::Network::HotbarCollectionHotbarRemovedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionHotbarDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarDisplayNameChangedPayload const&
    ) /*override*/;

    virtual void _handleHotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    ) /*override*/;
    // NOLINTEND
};

} // namespace Editor
