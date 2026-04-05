#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorRealmsServiceAvailability.h"
#include "mc/common/editor/RealmsServiceStatus.h"
#include "mc/common/editor/RealmsWorldUploadResult.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class GameOptions; }
namespace Editor::Services { struct EditorRealmsWorld; }
namespace Editor::Services { struct EditorRealmsWorldSlot; }
// clang-format on

namespace Editor::Services {

class EditorRealmsServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorRealmsServiceProvider() = default;

    virtual ::std::vector<::Editor::Services::EditorRealmsWorld> const getRealmWorldlist() const = 0;

    virtual ::std::vector<::Editor::Services::EditorRealmsWorldSlot> const getSlots() const = 0;

    virtual ::Editor::Services::RealmsServiceStatus const getServiceStatus() const = 0;

    virtual void loadRealmsWorldList() = 0;

    virtual void loadRealmsWorldSlots(::std::string const& worldId) = 0;

    virtual void downloadRealmWorld(::std::string const& worldId, int const slotId) = 0;

    virtual void beginLoadRealmWorldList(::WeakEntityRef playerRef) = 0;

    virtual void beginLoadRealmSlots(::std::string const& worldId, ::WeakEntityRef playerRef) = 0;

    virtual void beginDownloadWorld(::std::string const& worldId, int slotId, ::WeakEntityRef playerRef) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldListLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorld>)> callback
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldSlotsLoaded(
        ::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorldSlot>)> callback
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldDownload(::std::function<void(bool)> callback) = 0;

    virtual void beginUploadToRealms(
        ::std::string                                                             realmsWorldId,
        int                                                                       slotId,
        ::WeakEntityRef                                                           playerRef,
        ::Editor::GameOptions const&                                              gameOptions,
        ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)> callback
    ) = 0;

    virtual bool const canUploadWorld() const = 0;

    virtual ::Editor::Services::EditorRealmsServiceAvailability const isRealmsServiceAvailable() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
