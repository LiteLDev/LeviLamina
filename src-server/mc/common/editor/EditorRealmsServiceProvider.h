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
    // vIndex: 0
    virtual ~EditorRealmsServiceProvider() = default;

    // vIndex: 1
    virtual ::std::vector<::Editor::Services::EditorRealmsWorld> const getRealmWorldlist() const = 0;

    // vIndex: 2
    virtual ::std::vector<::Editor::Services::EditorRealmsWorldSlot> const getSlots() const = 0;

    // vIndex: 3
    virtual ::Editor::Services::RealmsServiceStatus const getServiceStatus() const = 0;

    // vIndex: 4
    virtual void loadRealmsWorldList() = 0;

    // vIndex: 5
    virtual void loadRealmsWorldSlots(::std::string const&) = 0;

    // vIndex: 6
    virtual void downloadRealmWorld(::std::string const&, int const) = 0;

    // vIndex: 7
    virtual void beginLoadRealmWorldList(::WeakEntityRef) = 0;

    // vIndex: 8
    virtual void beginLoadRealmSlots(::std::string const&, ::WeakEntityRef) = 0;

    // vIndex: 9
    virtual void beginDownloadWorld(::std::string const&, int, ::WeakEntityRef) = 0;

    // vIndex: 10
    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldListLoaded(::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorld>)>) = 0;

    // vIndex: 11
    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldSlotsLoaded(::std::function<void(::std::vector<::Editor::Services::EditorRealmsWorldSlot>)>) = 0;

    // vIndex: 12
    virtual ::Bedrock::PubSub::Subscription listenForRealmsWorldDownload(::std::function<void(bool)>) = 0;

    // vIndex: 13
    virtual void beginUploadToRealms(::std::string, int, ::WeakEntityRef, ::Editor::GameOptions const&, ::std::function<void(::Editor::Services::RealmsWorldUploadResult const&)>) = 0;

    // vIndex: 14
    virtual bool const canUploadWorld() const = 0;

    // vIndex: 15
    virtual ::Editor::Services::EditorRealmsServiceAvailability const isRealmsServiceAvailable() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
